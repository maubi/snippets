#include <newt.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int center(char *, int);

int main(void) {
	int cols, rows;
	char s[50];
	char msg[] = "Root text in other corner";

	newtInit();
	newtCls();

	newtGetScreenSize(&cols, &rows);	

	sprintf(s, "COLS:%d ROWS:%d", cols, rows);
	newtDrawRootText(0, 0, s);
	newtDrawRootText(center(msg, cols), -2, msg);

	newtPushHelpLine(NULL);
	newtRefresh();
	sleep(1);

	newtPushHelpLine("A help line");
	newtRefresh();
	sleep(1);

	newtPopHelpLine();
	newtRefresh();
	sleep(1);

	newtCenteredWindow(20, 20, "Win1");
	newtRefresh();
	sleep(2);
	newtOpenWindow(1, 1, 20, 20, "Win2");
	newtRefresh();
	sleep(2);
	newtPopWindow();
	sleep(2);
	newtPopWindow();
	sleep(1);

	newtFinished();
}

int center(char *s, int w) {
	return (w - strlen(s)) / 2;
}






