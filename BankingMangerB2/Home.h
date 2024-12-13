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
		int UserIndex;
		Home(void)
		{
			InitializeComponent();
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
			this->panel1->SuspendLayout();
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
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Home";
			this->Text = L"Home";
			this->panel1->ResumeLayout(false);
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
	ACCinfo->UserIndex = UserIndex;

	if (ACCinfo->boolValue)
	{
		this->Show();
	}
}
};
}
