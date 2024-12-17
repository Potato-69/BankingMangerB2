#pragma once
#include "List.h"
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <iomanip>
#include <sstream>
#include "LinkedList.cpp"
#include "User.h"
#include "BankAccount.h"
#include "Transaction.h"
#include "deposit.h"
#include <iostream>
#include <iomanip>
#include <sstream>

namespace BankingMangerB2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SearchU
	/// </summary>
	public ref class SearchU : public System::Windows::Forms::Form
	{
	public:
		bool boolValue;
		property bool BoolValue {
			bool get() {
				return boolValue;
			}
			void set(bool value) {
				boolValue = value;
			}
		}
		SearchU(void)
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
		~SearchU()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SearchU::typeid));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Black;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(12, 62);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(1056, 646);
			this->listBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1018, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 42);
			this->button1->TabIndex = 1;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SearchU::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Search by username";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(455, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 28);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Search by Account number";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(3, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 23);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SearchU::textBox1_KeyDown);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(204, 19);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(245, 28);
			this->panel2->TabIndex = 4;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Location = System::Drawing::Point(708, 19);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(245, 28);
			this->panel1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(3, 3);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 23);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SearchU::textBox2_KeyDown);
			// 
			// SearchU
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Navy;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->listBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SearchU";
			this->Text = L"SearchU";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: void PopulateListBox1() {
			auto currnetUser = userList.head;
			while (currnetUser != nullptr) {
				std::string Username_T = currnetUser->data.getUsername();
				std::string Fname_T = currnetUser->data.getFname();
				std::string Lname_T = currnetUser->data.getLname();
				std::string Password_T = currnetUser->data.getPhonenum();
				
				std::ostringstream oss;

				oss << "Username: " << Username_T << ", First name: " << Fname_T << ", Last name: " << Lname_T <<
					", Password: " << Password_T;

				std::string userinfo = oss.str();

				System::String^ info = gcnew System::String(userinfo.c_str());

				listBox1->Items->Add(info);
				currnetUser = currnetUser->next;
			}
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->boolValue = true;
	}

private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		listBox1->Items->Clear();

		msclr::interop::marshal_context context;

		std::string Username = context.marshal_as<std::string>(textBox1->Text);

		auto currnetUser = userList.head;

		while (currnetUser != nullptr)
		{
			if (Username == currnetUser->data.getUsername())
			{
				std::string Username_T = currnetUser->data.getUsername();
				std::string Fname_T = currnetUser->data.getFname();
				std::string Lname_T = currnetUser->data.getLname();
				std::string Password_T = currnetUser->data.getPassword();

				std::ostringstream oss;

				oss << "Username: " << Username_T << ", First name: " << Fname_T << ", Last name: " << Lname_T <<
					", Password: " << Password_T;

				std::string userinfo = oss.str();

				System::String^ info = gcnew System::String(userinfo.c_str());

				listBox1->Items->Add(info);
				
			}

			currnetUser = currnetUser->next;
		}

	}

}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		listBox1->Items->Clear();

		msclr::interop::marshal_context context;

		std::string ACCnum = context.marshal_as<std::string>(textBox2->Text);

		auto currnetUser = userList.head;

		while (currnetUser != nullptr)
		{
			if (ACCnum == currnetUser->data.getBankAccount().getAccountNumber())
			{
				std::string Username_T = currnetUser->data.getUsername();
				std::string Fname_T = currnetUser->data.getFname();
				std::string Lname_T = currnetUser->data.getLname();
				std::string Password_T = currnetUser->data.getPhonenum();

				std::ostringstream oss;

				oss << "Username: " << Username_T << ", First name: " << Fname_T << ", Last name: " << Lname_T <<
					", Password: " << Password_T;

				std::string userinfo = oss.str();

				System::String^ info = gcnew System::String(userinfo.c_str());

				listBox1->Items->Add(info);

			}

			currnetUser = currnetUser->next;
		}

	}
}
};
}
