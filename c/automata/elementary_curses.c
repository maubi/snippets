// demo.c

#include <unistd.h>
#include <ncurses.h>
#include "elementary_curses.h"

int main(int argc, char *argv[]) {

	unsigned char c_row[ROW_SIZE] = {DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, ALIVE, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD, DEAD};
	int x, y, i, iteration, rule = 0;
	int max_x, max_y;
	int ret_val;


	// initializes curses
	initscr();
	start_color();
	init_pair(1, COLOR, COLOR_BLACK);
	attron(COLOR_PAIR(1));
	noecho();
	curs_set(FALSE);
	scrollok(stdscr, TRUE);
	getmaxyx(stdscr,max_y, max_x);

	x = y = 0;
	iteration = 1;
	for (i = 0; (MAX_ITERATIONS == 0) || i <= MAX_ITERATIONS; i++) {
		// update view
		if (y == max_y) {
			ret_val = scroll(stdscr);
			y = max_y - 1;
		}
		printRow(c_row, x, y, iteration);
		refresh();
		usleep(DELAY);
		
		// do transition
		if (iteration != MAX_ITERATIONS) {
			updateRow(c_row, 3);
			y++;
			iteration++;
		}
	}

	mvprintw(y + 2, 0, "[PRESS A KEY]");
	getch();

	endwin(); // Restore normal terminal behaviouir
}

void printRow(unsigned char *row_p, int x, int y, int iteration) {
	int i;
	for (i = 0; i < ROW_SIZE; i++) {
		if (row_p[i] == ALIVE) {
			mvaddch(y, x+i, '#');
		} else {
			mvaddch(y, x+i, ' ');
		}
	}
	mvprintw(y, ROW_SIZE + 2, "Iteration: %d", iteration);
	return;
}

void updateRow(unsigned char *row_p, int rule) {
	unsigned char rules[256][8] = {
		{DEAD, DEAD, DEAD, ALIVE, ALIVE, ALIVE, ALIVE, DEAD},
		{DEAD, DEAD, ALIVE, ALIVE, ALIVE, ALIVE, DEAD, DEAD},
		{ALIVE, ALIVE, DEAD, ALIVE, ALIVE, ALIVE, DEAD, DEAD},
		{ALIVE, DEAD, DEAD, ALIVE, DEAD, ALIVE, ALIVE, DEAD}
	};
	int i;
	int status;
	unsigned char left_n, right_n;
	unsigned char row_n[ROW_SIZE];
	for (i = 0; i < ROW_SIZE; i++) {
		// ignore edges?
		if ((i == 0 || i == ROW_SIZE - 1) && (EDGE_IGNORE == 1)) {
			row_n[i] = DEAD;
			continue;
		}

		// calc neighbours
		if ((i == ROW_SIZE - 1) && (WRAPPING == 0)) {				// edge uses OUT_OF_BOUND value for missing neighbour
			left_n = row_p[i-1];
			right_n = OUT_OF_BOUND;
		} else if ((i == 0) && (WRAPPING == 0)) {				// edge uses OUT_OF_BOUND value for missing neighbour
			left_n = OUT_OF_BOUND;
			right_n = row_p[i+1];
		} else if (i == 0 && WRAPPING == 1) {					// edge uses valid neighbour for missing neighbour
			left_n = row_p[i+1];
			right_n = row_p[i+1];
		} else if (i == ROW_SIZE - 1 && WRAPPING == 1) {			// edge uses valid neighbour for missing neighbour
			left_n = row_p[i-1];
			right_n = row_p[i-1];
		} else if (i == 0){							// edge wraps
			right_n = row_p[i+1];
			left_n = row_p[ROW_SIZE - 1];
		} else if (i == ROW_SIZE) {						// edge wraps
			right_n = row_p[0];
			left_n = row_p[i-1];
		} else {								// no edge cell
			right_n = row_p[i+1];
			left_n = row_p[i-1];
		}

		// apply rule
		if (row_p[i] == ALIVE && right_n == ALIVE && left_n == ALIVE) {
			row_n[i] = rules[rule][0];
		} else if (row_p[i] == ALIVE && right_n == DEAD && left_n == ALIVE) {
			row_n[i] = rules[rule][1];
		} else if (row_p[i] == DEAD && right_n == ALIVE && left_n == ALIVE) {
			row_n[i] = rules[rule][2];
		} else if (row_p[i] == DEAD && right_n == DEAD && left_n == ALIVE) {
			row_n[i] = rules[rule][3];
		} else if (row_p[i] == ALIVE && right_n == ALIVE && left_n == DEAD) {
			row_n[i] = rules[rule][4];
		} else if (row_p[i] == ALIVE && right_n == DEAD && left_n == DEAD) {
			row_n[i] = rules[rule][5];
		} else if (row_p[i] == DEAD && right_n == ALIVE && left_n == DEAD) {
			row_n[i] = rules[rule][6];
		} else if (row_p[i] == DEAD && right_n == DEAD && left_n == DEAD) {
			row_n[i] = rules[rule][7];
		}
	}

	// update current row
	for (i = 0; i < ROW_SIZE; i++) {
		row_p[i] = row_n[i];
	}
}
