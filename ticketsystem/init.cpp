#include <iostream>
#include "db.h"
#include "sqlite/sqlite3.h"


void initDB() {
	sqlite3* db;
	sqlite3_open("ticketsystem.db", &db);
	char* err;
	int rc;

	rc = sqlite3_exec(db, "CREATE TABLE IF NOT EXISTS users(userID INTEGER PRIMARY KEY AUTOINCREMENT, email VARCHAR(100), password VARCHAR(100), role VARCHAR(20)); INSERT INTO users(userID, email, password, role) VALUES(1, 'admin@ticketsystem.com', 'Admin', 'admin');", NULL, NULL, &err);
	if (rc != SQLITE_OK) {
		std::cout << "error: " << err << std::endl;
	}
	sqlite3_close(db);
	
}