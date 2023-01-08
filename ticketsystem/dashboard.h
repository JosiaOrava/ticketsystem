#pragma once

namespace ticketsystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for dashboard
	/// </summary>
	public ref class dashboard : public System::Windows::Forms::Form
	{
	public:
		dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ dashboardTitle;
	private: System::Windows::Forms::Button^ submitTicketBtn;
	private: System::Windows::Forms::TextBox^ ticketTextBox;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ myTicketsLabel;
	private: System::Windows::Forms::ListView^ yourTicketsListView;

	protected:

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
			this->dashboardTitle = (gcnew System::Windows::Forms::Label());
			this->submitTicketBtn = (gcnew System::Windows::Forms::Button());
			this->ticketTextBox = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->myTicketsLabel = (gcnew System::Windows::Forms::Label());
			this->yourTicketsListView = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// dashboardTitle
			// 
			this->dashboardTitle->AutoSize = true;
			this->dashboardTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dashboardTitle->Location = System::Drawing::Point(290, 56);
			this->dashboardTitle->Name = L"dashboardTitle";
			this->dashboardTitle->Size = System::Drawing::Size(275, 46);
			this->dashboardTitle->TabIndex = 0;
			this->dashboardTitle->Text = L"DASHBOARD";
			// 
			// submitTicketBtn
			// 
			this->submitTicketBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitTicketBtn->Location = System::Drawing::Point(158, 357);
			this->submitTicketBtn->Name = L"submitTicketBtn";
			this->submitTicketBtn->Size = System::Drawing::Size(151, 56);
			this->submitTicketBtn->TabIndex = 1;
			this->submitTicketBtn->Text = L"Submit ticket";
			this->submitTicketBtn->UseVisualStyleBackColor = true;
			// 
			// ticketTextBox
			// 
			this->ticketTextBox->Location = System::Drawing::Point(12, 183);
			this->ticketTextBox->Multiline = true;
			this->ticketTextBox->Name = L"ticketTextBox";
			this->ticketTextBox->Size = System::Drawing::Size(456, 168);
			this->ticketTextBox->TabIndex = 2;
			this->ticketTextBox->Text = L"Explain problem";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 157);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(455, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Title";
			// 
			// myTicketsLabel
			// 
			this->myTicketsLabel->AutoSize = true;
			this->myTicketsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->myTicketsLabel->Location = System::Drawing::Point(641, 127);
			this->myTicketsLabel->Name = L"myTicketsLabel";
			this->myTicketsLabel->Size = System::Drawing::Size(113, 25);
			this->myTicketsLabel->TabIndex = 4;
			this->myTicketsLabel->Text = L"Your tickets";
			// 
			// yourTicketsListView
			// 
			this->yourTicketsListView->HideSelection = false;
			this->yourTicketsListView->Location = System::Drawing::Point(574, 155);
			this->yourTicketsListView->Name = L"yourTicketsListView";
			this->yourTicketsListView->Size = System::Drawing::Size(264, 306);
			this->yourTicketsListView->TabIndex = 5;
			this->yourTicketsListView->UseCompatibleStateImageBehavior = false;
			// 
			// dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(850, 473);
			this->Controls->Add(this->yourTicketsListView);
			this->Controls->Add(this->myTicketsLabel);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->ticketTextBox);
			this->Controls->Add(this->submitTicketBtn);
			this->Controls->Add(this->dashboardTitle);
			this->Name = L"dashboard";
			this->Text = L"dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
