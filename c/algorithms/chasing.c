#include <unistd.h>
#include <stdlib.h>
#include <ncurses.h>
#include "chasing.h"

int getMaxLength(unsigned char [][20], int);
int center(int, int);
void print_menu(unsigned char [][20], int, int);
void initializeGrid (unsigned char [][20], int);
void printGrid(unsigned char [][20], int);
void setCharAt(unsigned char [][20], int, int, unsigned char);
void chaseBasicStep(int, int, int, int, int *, int *);

int main(int argc, char *argv[]) {
	unsigned char grid[20][20];
	unsigned char menu[10][20] =	{"Basic", "Line-of-sight", "EXIT"};
	int c;
	int active;
	int pred_x, pred_y;
	int prey_x, prey_y;
	int new_x, new_y;

	// initializes curses
	initscr();
	start_color();							// enable color
	cbreak();								// keyboard input does not work on lines
	keypad(stdscr, TRUE);					// enable special characters
	init_pair(1, COLOR, COLOR_BLACK);		// define first color combination
	init_pair(2, COLOR_WHITE, COLOR);		// define highlight color combination
	noecho();								// do not echo characters on-screen
	curs_set(FALSE);						// do not show cursor

	initializeGrid(grid, 20);
	active = 0;	
	while (1) {			// main loop
		// let the user choose the algorithm
		int done = 0;
		while (!done) {
			print_menu(menu, 3, active);
			refresh();
			c = getch();
			switch(c) {
				case KEY_UP:
					active--;
					if (active < 0) {
						active = 2;
					}
					break;
				case KEY_DOWN:
					active++;
					if (active > 2) {
						active = 0;
					}
					break;
				case '\n':
					done = 1;
					break;
			}
		}

		if (active == 2) {
			break;
		} else if (active == 0) {
			clear();
			//mvprintw(0,0,"Basic Chasing");

			pred_x = 10;
			pred_y = 5;
			prey_x = 2;
			prey_y = 15;
			
			setCharAt(grid, pred_x, pred_y, 'P');
			setCharAt(grid, prey_x, prey_y, 'p');

			printGrid(grid, 20);
			while (! (pred_x == prey_x && pred_y == prey_y)) {
				chaseBasicStep(pred_x, pred_y, prey_x, prey_y, &new_x, &new_y);
				setCharAt(grid, pred_x, pred_y, '.');
				setCharAt(grid, new_x, new_y, 'P');
				printGrid(grid, 20);
				pred_x = new_x;
				pred_y = new_y;
				usleep(300000);
			}

			refresh();
			getch();
		} else if (active == 1) {
			clear();
			mvprintw(0,0,"Line-of-sight Chasing");
			refresh();
			getch();
		}
	}

	endwin(); // Restore normal terminal behaviouir
}

void print_menu(unsigned char menu[][20], int size, int active) {
	int i, k, x, y, max_x, max_y;
	i = k = 0;

	getmaxyx(stdscr, max_y, max_x);
	x = center(getMaxLength(menu, size), max_x);		// -1?
	y = center(size, max_y);

	clear();
	for (i = 0; i < size; i++) {
		if (i == active) {
			attron(COLOR_PAIR(2));
		} else {
			attron(COLOR_PAIR(1));
		}
		for (k = 0; menu[i][k] != '\0'; k++) {
			mvaddch(y + i, x + k, menu[i][k]);
		}
	}
	attron(COLOR_PAIR(1));
	refresh();
}

int center(int size, int width) {
	int position;

	position = (int) ( ((float)width - (float)size) / 2.0 );
	return position;
}

int getMaxLength(unsigned char strings[][20], int size) {
	int i, k, length, max_length;
	
	max_length = 0;
	for (i = 0; i < size; i++) {
		length = 0;
		for (k = 0; strings[i][k] != '\0'; k++) {
			length++;
		}
		if (length > max_length) {
			max_length = length;
		}	
	}
	return max_length;
}

void initializeGrid(unsigned char grid[][20], int rows) {
	int i, k;
	for (i = 0; i < rows; i++) {
		for (k = 0; k < 20; k++) {
			grid[i][k] = '.';
		}
	}
}

void printGrid(unsigned char grid[][20], int rows) {
	int i, k;
	int x, y;
	int max_x, max_y;

	getmaxyx(stdscr, max_y, max_x);
	x = center(20, max_x);
	y = center(rows, max_y);
		
	for (i = 0; i < rows; i++) {
		for (k = 0; k < 20; k++) {
			mvaddch(y + i, x + k, grid[i][k]);
		}
	}
	refresh();
}

void setCharAt(unsigned char grid[][20], int x, int y, unsigned char glyph) {
	grid[x][y] = glyph;
}


void chaseBasicStep(int pred_x, int pred_y, int prey_x, int prey_y, int *new_x, int *new_y) {
	if (pred_x > prey_x) {
		*new_x = pred_x - 1;
	} else if (pred_x < prey_x) {
		*new_x = pred_x + 1;
	} else {
		*new_x = pred_x;
	}
	if (pred_y > prey_y) {
		*new_y = pred_y - 1;
	} else if (pred_y < prey_y) {
		*new_y = pred_y + 1;
	} else {
		*new_y = pred_y;
	}
}








