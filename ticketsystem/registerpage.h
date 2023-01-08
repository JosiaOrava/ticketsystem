#pragma once
#include "db.h"
namespace ticketsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for registerpage
	/// </summary>
	public ref class registerpage : public System::Windows::Forms::Form
	{
		void MarshalString(System::String^ s, std::string& os) {
			using namespace System;
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	public:
		registerpage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ notMatchLabel;
	private: System::Windows::Forms::Label^ emailNotCorrectLabel;
	public:

	public:
		bool registerOk = false;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registerpage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ registerTitleLabel;
	protected:
	private: System::Windows::Forms::Label^ emailLabel;
	private: System::Windows::Forms::TextBox^ emailTextBox;
	private: System::Windows::Forms::Label^ passwordLabel;
	private: System::Windows::Forms::TextBox^ passwordTextBox;

	private: System::Windows::Forms::Label^ confirmPasswordLabel;
	private: System::Windows::Forms::TextBox^ confirmPasswordTextBox;
	private: System::Windows::Forms::Button^ registerBtn;
	private: System::Windows::Forms::Button^ loginBtn;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->registerTitleLabel = (gcnew System::Windows::Forms::Label());
			this->emailLabel = (gcnew System::Windows::Forms::Label());
			this->emailTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->confirmPasswordLabel = (gcnew System::Windows::Forms::Label());
			this->confirmPasswordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->registerBtn = (gcnew System::Windows::Forms::Button());
			this->loginBtn = (gcnew System::Windows::Forms::Button());
			this->notMatchLabel = (gcnew System::Windows::Forms::Label());
			this->emailNotCorrectLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// registerTitleLabel
			// 
			this->registerTitleLabel->AutoSize = true;
			this->registerTitleLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerTitleLabel->Location = System::Drawing::Point(258, 41);
			this->registerTitleLabel->Name = L"registerTitleLabel";
			this->registerTitleLabel->Size = System::Drawing::Size(168, 46);
			this->registerTitleLabel->TabIndex = 0;
			this->registerTitleLabel->Text = L"Register";
			// 
			// emailLabel
			// 
			this->emailLabel->AutoSize = true;
			this->emailLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emailLabel->Location = System::Drawing::Point(304, 117);
			this->emailLabel->Name = L"emailLabel";
			this->emailLabel->Size = System::Drawing::Size(60, 25);
			this->emailLabel->TabIndex = 1;
			this->emailLabel->Text = L"Email";
			// 
			// emailTextBox
			// 
			this->emailTextBox->Location = System::Drawing::Point(229, 145);
			this->emailTextBox->Name = L"emailTextBox";
			this->emailTextBox->Size = System::Drawing::Size(226, 20);
			this->emailTextBox->TabIndex = 2;
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(290, 170);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(98, 25);
			this->passwordLabel->TabIndex = 3;
			this->passwordLabel->Text = L"Password";
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->Location = System::Drawing::Point(230, 198);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->Size = System::Drawing::Size(225, 20);
			this->passwordTextBox->TabIndex = 4;
			this->passwordTextBox->UseSystemPasswordChar = true;
			// 
			// confirmPasswordLabel
			// 
			this->confirmPasswordLabel->AutoSize = true;
			this->confirmPasswordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirmPasswordLabel->Location = System::Drawing::Point(251, 223);
			this->confirmPasswordLabel->Name = L"confirmPasswordLabel";
			this->confirmPasswordLabel->Size = System::Drawing::Size(169, 25);
			this->confirmPasswordLabel->TabIndex = 5;
			this->confirmPasswordLabel->Text = L"Confirm password";
			// 
			// confirmPasswordTextBox
			// 
			this->confirmPasswordTextBox->Location = System::Drawing::Point(229, 251);
			this->confirmPasswordTextBox->Name = L"confirmPasswordTextBox";
			this->confirmPasswordTextBox->Size = System::Drawing::Size(226, 20);
			this->confirmPasswordTextBox->TabIndex = 6;
			this->confirmPasswordTextBox->UseSystemPasswordChar = true;
			// 
			// registerBtn
			// 
			this->registerBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registerBtn->Location = System::Drawing::Point(229, 304);
			this->registerBtn->Name = L"registerBtn";
			this->registerBtn->Size = System::Drawing::Size(118, 48);
			this->registerBtn->TabIndex = 7;
			this->registerBtn->Text = L"Register";
			this->registerBtn->UseVisualStyleBackColor = true;
			this->registerBtn->Click += gcnew System::EventHandler(this, &registerpage::registerBtn_Click);
			// 
			// loginBtn
			// 
			this->loginBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginBtn->Location = System::Drawing::Point(354, 304);
			this->loginBtn->Name = L"loginBtn";
			this->loginBtn->Size = System::Drawing::Size(101, 48);
			this->loginBtn->TabIndex = 8;
			this->loginBtn->Text = L"Login";
			this->loginBtn->UseVisualStyleBackColor = true;
			// 
			// notMatchLabel
			// 
			this->notMatchLabel->AutoSize = true;
			this->notMatchLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->notMatchLabel->ForeColor = System::Drawing::Color::Red;
			this->notMatchLabel->Location = System::Drawing::Point(252, 281);
			this->notMatchLabel->Name = L"notMatchLabel";
			this->notMatchLabel->Size = System::Drawing::Size(183, 20);
			this->notMatchLabel->TabIndex = 9;
			this->notMatchLabel->Text = L"Passwords do not match";
			this->notMatchLabel->Visible = false;
			// 
			// emailNotCorrectLabel
			// 
			this->emailNotCorrectLabel->AutoSize = true;
			this->emailNotCorrectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->emailNotCorrectLabel->ForeColor = System::Drawing::Color::Red;
			this->emailNotCorrectLabel->Location = System::Drawing::Point(291, 281);
			this->emailNotCorrectLabel->Name = L"emailNotCorrectLabel";
			this->emailNotCorrectLabel->Size = System::Drawing::Size(117, 20);
			this->emailNotCorrectLabel->TabIndex = 10;
			this->emailNotCorrectLabel->Text = L"Give valid email";
			this->emailNotCorrectLabel->Visible = false;
			// 
			// registerpage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(688, 407);
			this->Controls->Add(this->emailNotCorrectLabel);
			this->Controls->Add(this->notMatchLabel);
			this->Controls->Add(this->loginBtn);
			this->Controls->Add(this->registerBtn);
			this->Controls->Add(this->confirmPasswordTextBox);
			this->Controls->Add(this->confirmPasswordLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->emailTextBox);
			this->Controls->Add(this->emailLabel);
			this->Controls->Add(this->registerTitleLabel);
			this->Name = L"registerpage";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void registerBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->emailNotCorrectLabel->Visible = false;
		this->notMatchLabel->Visible = false;
		int resultPassword, resultEmail;
		String^ password = this->passwordTextBox->Text;
		String^ confirmPassword = this->confirmPasswordTextBox->Text;
		String^ email = this->emailTextBox->Text;
		resultEmail = checkEmailValid(email);
		resultPassword = checkPasswordMatch(password, confirmPassword);
		if (resultPassword == 1 && resultEmail == 1) {
			userInfo user;
			MarshalString(emailTextBox->Text, user.email);
			MarshalString(passwordTextBox->Text, user.password);
			registerUser(&user);
			registerOk = true;
			this->Close();
		}
		else if(resultEmail == 0){
			this->emailNotCorrectLabel->Visible = true;
		}
		else if (resultPassword == 0) {
			this->notMatchLabel->Visible = true;
		}
	}
};
}
