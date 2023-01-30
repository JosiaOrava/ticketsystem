#include "../../includes/db.h"
#include "../../sqlite/sqlite3.h"
#include <iostream>



int checkCredentials(userInfo* user) {
	sqlite3* db;
	sqlite3_stmt* stmt;
	int result;
	sqlite3_open("ticketsystem.db", &db);
	std::string sql = "SELECT EXISTS (SELECT * FROM users WHERE email=\'" + user->email + "\' AND password=\'" + user->password + "\')";
	sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, 0);
	sqlite3_step(stmt);
	result = sqlite3_column_int(stmt, 0);
	if (result == 0) {
		return 0;
	}
	sqlite3_close(db);
	return 1;
}