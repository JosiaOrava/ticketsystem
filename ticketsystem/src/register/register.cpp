#include "../../includes/db.h"
#include <iostream>
#include "../../sqlite/sqlite3.h"


int checkPasswordMatch(System::String^ password, System::String^ confirmPassword) {
	if (password == confirmPassword) {
		return 1;
	}
	return 0;
}

void registerUser(userInfo* user) {
	sqlite3* db;
	sqlite3_open("db/ticketsystem.db", &db);
	char* err;
	int rc;
	std::string query = "INSERT INTO users (email, password, role)  VALUES (\'" + user->email + "\', \'" + user->password + "\', 'employee')";
	rc = sqlite3_exec(db, query.c_str(), NULL, NULL, &err);
	if (rc != SQLITE_OK) {
		std::cout << "error: " << err << std::endl;
	}
	sqlite3_close(db);
}

int checkEmailValid(System::String^ email) {
	if (email->IndexOf('@') == -1) {
		return 0;
	}
	return 1;
}