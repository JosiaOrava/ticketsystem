#pragma once
#include "user.h"

int checkCredentials(userInfo* user);
void initDB();
int checkPasswordMatch(System::String^ password, System::String^ confirmPassword);
void registerUser(userInfo* user);
int checkEmailValid(System::String^ email);