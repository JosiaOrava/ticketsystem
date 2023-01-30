#include "../includes/db.h"
#include <iostream>
#include <sstream>
#include "../sqlite/sqlite3.h"


void newTicket(std::string title, std::string desc, int userID)
{
	sqlite3* db;
	char* err;
	int rc;
	std::stringstream query;
	sqlite3_open("../db/ticketsystem.db", &db);
	query << "INSERT INTO tickets('userID','title','description','status') VALUES(" << userID  << ",\'" << title << "\', \'" << desc << "\', 0);";
	const std::string tmp = query.str();
	const char* sqlQuery = tmp.c_str();
	rc = sqlite3_exec(db, sqlQuery, NULL, NULL, &err);
	if (rc != SQLITE_OK) {
		std::cout << "error: " << err << std::endl;
	}
	sqlite3_close(db);
}