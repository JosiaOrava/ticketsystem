#pragma once
#include "db.h"
#include <string>
#include "dashboard.h"



namespace ticketsystem {
	void MarshalString(System::String^ s, std::string& os) {
		using namespace System;
		using namespace Runtime::InteropServices;
		const char* chars =
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		bool credentialsOk = false;
		bool registerPage = false;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Title;
	protected:
	private: System::Windows::Forms::Label^ emailLabel;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ emailTextBox;
	private: System::Windows::Forms::TextBox^ passwordTextBox;


	private: System::Windows::Forms::Button^ loginBtn;
	private: System::Windows::Forms::Button^ registerBtn;
	private: System::Windows::Forms::Label^ incorrectLabel;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Title = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->registerBtn = (gcnew System::Windows::Forms::Button());
			this->incorrectLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(234, 78);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(271, 46);
			this->Title->TabIndex = 0;
			this->Title->Text = L"Ticket System";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(82, 145);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(60, 25);
			this->emailLabel->TabIndex = 1;
			this->emailLabel->Text = L"Email";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(82, 192);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(98, 25);
			this->passwordLabel->TabIndex = 2;
			this->passwordLabel->Text = L"Password";
			// 
			// emailTextBox
			// 
			this->emailTextBox->Location = System::Drawing::Point(201, 150);
			this->emailTextBox->Name = L"emailTextBox";
			this->emailTextBox->Size = System::Drawing::Size(316, 20);
			this->emailTextBox->TabIndex = 3;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(201, 196);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(316, 20);
			this->passwordTextBox->TabIndex = 4;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// loginBtn
			// 
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->Location = System::Drawing::Point(201, 243);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(139, 56);
			this->loginBtn->TabIndex = 5;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			this->loginBtn->Click += gcnew System::EventHandler(this, &MyForm::loginBtn_Click);
			// 
			// registerBtn
			// 
			this->registerBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerBtn->Location = System::Drawing::Point(378, 247);
			this->registerBtn->Name = L"registerBtn";
			this->registerBtn->Size = System::Drawing::Size(139, 55);
			this->registerBtn->TabIndex = 6;
			this->registerBtn->Text = L"Register";
			this->registerBtn->UseVisualStyleBackColor = true;
			this->registerBtn->Click += gcnew System::EventHandler(this, &MyForm::registerBtn_Click);
			// 
			// incorrectLabel
			// 
			this->incorrectLabel->AutoSize = true;
			this->incorrectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->incorrectLabel->ForeColor = System::Drawing::Color::Red;
			this->incorrectLabel->Location = System::Drawing::Point(201, 223);
			this->incorrectLabel->Name = L"incorrectLabel";
			this->incorrectLabel->Size = System::Drawing::Size(182, 17);
			this->incorrectLabel->TabIndex = 7;
			this->incorrectLabel->Text = L"Email or password incorrect";
			this->incorrectLabel->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(688, 407);
			this->Controls->Add(this->incorrectLabel);
			this->Controls->Add(this->registerBtn);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->emailTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->Title);
			this->Name = L"MyForm";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void loginBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		userInfo user;
		int result = 0;
		MarshalString(emailTextBox->Text, user.email);
		MarshalString(passwordTextBox->Text, user.password);
		result = checkCredentials(&user);
		if (result == 1) {
			credentialsOk = true;
			this->Close();
		}
		else {
			this->emailTextBox->Text = "";
			this->passwordTextBox->Text = "";
			this->incorrectLabel->Visible = true;
		}
	}
	private: System::Void registerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		registerPage = true;
		this->Close();
	}
};
}
