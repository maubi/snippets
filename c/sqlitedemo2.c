#include <stdio.h>
#include <sqlite3.h>

static int callback(void *, int, char **, char **);

int main(int argc, char **argv) {
	sqlite3 *db;
	sqlite3_stmt *stmt1;
	char *zErrMsg = 0;
	char *dbname = "prova";
	char *sql = "SELECT * FROM manga";
	int rc;
	
	// FIXME: PARSE COMMAND-LINE ARGUMENTS

	rc = sqlite3_open(dbname, &db);
	if(rc) {
		fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return 1;
	}

	rc = sqlite3_prepare(db, sql, -1, &stmt1, NULL);
	if (rc) {
		fprintf(stderr, "Cannot prepare query: %s\n", sqlite3_errmsg(db));
		sqlite3_close(db);
		return(1);
	}

/*
	rc = sqlite3_bind_int(stmt1, 1, 10);	
	rc = sqlite3_bind_text(stmt1, 2, "New Game!", -1, SQLITE_STATIC);	
	rc = sqlite3_bind_int(stmt1, 3, 6);
*/
	
	printf("--------------------------------\n");
	printf("%-4.4s %-20.20s %-6.6s\n", "ID", "TITLE", "AUTHOR");
	printf("--------------------------------\n");
	while((rc = sqlite3_step(stmt1)) == SQLITE_ROW) {
		const char *c1 = sqlite3_column_text(stmt1, 0);
		const char *c2 = sqlite3_column_text(stmt1, 1);
		const char *c3 = sqlite3_column_text(stmt1, 2);
		printf("%-4.4s %-20.20s %-6.6s\n", c1?c1:"NULL", c2?c2:"NULL", c3?c3:"NULL");
	}
	if(rc == SQLITE_ERROR) {
		fprintf(stderr, "Cannot step: %s\n", sqlite3_errmsg(db));
		sqlite3_finalize(stmt1);
		sqlite3_close(db);
		return(1);
	}
	printf("--------------------------------\n");
	sqlite3_finalize(stmt1);
	sqlite3_close(db);
	return 0;
}
