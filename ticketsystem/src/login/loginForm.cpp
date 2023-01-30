#include "../../loginForm.h"
#include "../../registerpage.h"
#include "../../includes/db.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	initDB();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ticketsystem::MyForm login;
	
	login.ShowDialog();
	if (login.credentialsOk) {
		ticketsystem::dashboard dh;
		dh.ShowDialog();
	}
	if (login.registerPage) {
		ticketsystem::registerpage rp;
		rp.ShowDialog();
		if (rp.registerOk) {
			login.ShowDialog();
		}
	}
	
	return 0;
}