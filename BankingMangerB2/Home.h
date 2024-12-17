#pragma once
#include "List.h"
#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <vcclr.h>
#include <msclr/marshal_cppstd.h>
#include "LinkedList.cpp"
#include "User.h"
#include "BankAccount.h"
#include "Transaction.h"
#include "RegisterForm.h"
#include "DisplayInfo.h"
#include "SearchU.h"

namespace BankingMangerB2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		System::String^ username;
		System::String^ password;
		System::String^ username2;
		System::String^ password2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button5;
	public:
		int UserIndex;
		Home(void)
		{
			InitializeComponent();
			
			panel2->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button7;
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

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(962, 678);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Log out";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Home::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Home::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &Home::timer2_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button2);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(210, 255);
			this->panel1->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(3, 208);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(202, 42);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Change Account info";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Home::button6_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(5, 147);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(202, 55);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Account info/transactions";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Home::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(5, 99);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(202, 42);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Search for an Account";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Home::button3_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(5, 51);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(202, 42);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Add Account";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Home::button7_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(202, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"< Menu";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Home::button2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(240, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(405, 141);
			this->panel2->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(281, 106);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 29);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Continue";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Home::button5_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(170, 84);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(137, 2);
			this->panel4->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(172, 60);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 23);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(170, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(137, 2);
			this->panel3->TabIndex = 6;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(172, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 23);
			this->textBox1->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(5, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(161, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Account Password:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account username:";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->Text = L"Home";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int count, Maxlen = 255, MinLen = 45, cLen;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->boolValue = true;
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (count < 9)
	{
		this->panel1->Size = System::Drawing::Size(210, cLen);
		cLen -= 21;
		count++;
	}
}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	if (count < 9)
	{
		this->panel1->Size = System::Drawing::Size(210, cLen);
		cLen += 21;
		count++;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button2->Text == "< Menu")
	{
		count = 0;
		cLen = Maxlen;
		timer1->Start();
		button2->Text = "> Menu";
	}
	else
	{
		count = 0;
		cLen = MinLen;
		timer2->Start();
		button2->Text = "< Menu";
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	RegisterForm^ registerform = gcnew RegisterForm();
	registerform->Owner = this;
	registerform->ShowDialog();

	if (registerform->boolValue)
	{
		this->Show();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	DisplayInfo^ ACCinfo = gcnew DisplayInfo();
	ACCinfo->Owner = this;

	ACCinfo->username = username;
	ACCinfo->password = password;
	
	ACCinfo->ShowDialog();

	if (ACCinfo->boolValue)
	{
		this->Show();
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	SearchU^ searchU = gcnew SearchU();
	searchU->Owner = this;
	searchU->PopulateListBox1();

	searchU->ShowDialog();

	if (searchU->boolValue)
	{
		this->Show();
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel2->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	/*msclr::interop::marshal_context context;

	std::string username = context.marshal_as<std::string>(textBox1->Text);
	std::string userpassword = context.marshal_as<std::string>(textBox2->Text);

	auto currnetUser = userList.head;

	while (currnetUser != nullptr)
	{
		if (username == currnetUser->data.getUsername() && userpassword == currnetUser->data.getPassword())
		{
			break;
		}

		currnetUser = currnetUser->next;
	}

	this->Hide();
	ChangeInfo^ changeInfo = gcnew ChangeInfo();
	changeInfo->Owner = this;
	
	std::string Username_T = currnetUser->data.getUsername();
	System::String^ UsernameN = gcnew System::String(Username_T.c_str());

	std::string Password_T = currnetUser->data.getPassword();
	System::String^ PasswordN = gcnew System::String(Username_T.c_str());

	changeInfo->username = UsernameN;
	changeInfo->password = PasswordN;

	changeInfo->ShowDialog();

	if (changeInfo->boolValue)
	{
		this->Show();
	}*/

}
};
}
