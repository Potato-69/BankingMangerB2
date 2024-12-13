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
	/// Summary for DisplayInfo
	/// </summary>
	public ref class DisplayInfo : public System::Windows::Forms::Form
	{
	public:
		int UserIndex;
		DisplayInfo(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Button^ button3;



	private: System::Windows::Forms::Button^ button4;





	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label20;

	public:
		System::String^ username;
	private: System::Windows::Forms::Label^ label12;
	public:
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
		   System::String^ password;

		void DPinfo()
		{
			button2->PerformClick();
		}
		
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
		~DisplayInfo()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DisplayInfo::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(993, 678);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DisplayInfo::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(864, 192);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 35);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Display User Info";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DisplayInfo::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(13, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1055, 234);
			this->panel1->TabIndex = 4;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &DisplayInfo::panel1_Paint);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(77, 179);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(44, 28);
			this->label13->TabIndex = 2;
			this->label13->Text = L"null";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(99, 142);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 28);
			this->label11->TabIndex = 2;
			this->label11->Text = L"null";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(160, 108);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 28);
			this->label10->TabIndex = 2;
			this->label10->Text = L"null";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(118, 77);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(44, 28);
			this->label9->TabIndex = 2;
			this->label9->Text = L"null";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(690, 70);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(44, 28);
			this->label18->TabIndex = 2;
			this->label18->Text = L"null";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(607, 42);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(44, 28);
			this->label17->TabIndex = 2;
			this->label17->Text = L"null";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(120, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(44, 28);
			this->label8->TabIndex = 2;
			this->label8->Text = L"null";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(8, 179);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(63, 28);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Email:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(7, 142);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 28);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(6, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(148, 28);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone Number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 28);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Last Name:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(519, 70);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(165, 28);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Account Number:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(519, 42);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 28);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Balance:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(4, 42);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"First Name:";
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(-2, -2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1055, 41);
			this->panel2->TabIndex = 0;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(888, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(161, 38);
			this->label20->TabIndex = 0;
			this->label20->Text = L"information";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 1);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"null";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(317, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 34);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Deposit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DisplayInfo::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(317, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(156, 33);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Withdraw";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DisplayInfo::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(3, 245);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(470, 52);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Transfer";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &DisplayInfo::button5_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Controls->Add(this->richTextBox1);
			this->panel6->Controls->Add(this->panel7);
			this->panel6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel6->Location = System::Drawing::Point(499, 254);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(569, 409);
			this->panel6->TabIndex = 7;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::Navy;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(4, 50);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(558, 352);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->label22);
			this->panel7->Location = System::Drawing::Point(-2, -3);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(569, 46);
			this->panel7->TabIndex = 0;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(3, 5);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(253, 38);
			this->label22->TabIndex = 1;
			this->label22->Text = L"Transaction History";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(13, 253);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(480, 44);
			this->panel3->TabIndex = 8;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(308, 34);
			this->textBox1->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->textBox2);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel4->Location = System::Drawing::Point(13, 303);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(480, 44);
			this->panel4->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(308, 34);
			this->textBox2->TabIndex = 1;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Controls->Add(this->label12);
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->button5);
			this->panel5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel5->Location = System::Drawing::Point(13, 354);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(480, 304);
			this->panel5->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(3, 31);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(470, 34);
			this->textBox3->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(237, 28);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Target\'s Account Number:";
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(3, 99);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(470, 34);
			this->textBox4->TabIndex = 1;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 68);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(87, 28);
			this->label12->TabIndex = 2;
			this->label12->Text = L"Amount:";
			// 
			// DisplayInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DisplayInfo";
			this->Text = L"DisplayInfo";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->boolValue = true;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;

	std::string Username = context.marshal_as<std::string>(username);
	std::string Userpassword = context.marshal_as<std::string>(password);

	auto currnetUser = userList.head;

	while (currnetUser != nullptr)
	{
		if (Username == currnetUser->data.getUsername() && Userpassword == currnetUser->data.getPassword())
		{
			break;
		}

		currnetUser = currnetUser->next;
	}

	std::string Username_T = currnetUser->data.getUsername();
	System::String^ UsernameN = gcnew System::String(Username_T.c_str());
	label1->Text = UsernameN;

	std::string Fname_T = currnetUser->data.getFname();
	System::String^ Fname = gcnew System::String(Fname_T.c_str());
	label8->Text = Fname;

	std::string Lname_T = currnetUser->data.getLname();
	System::String^ Lname = gcnew System::String(Lname_T.c_str());
	label9->Text = Lname;

	std::string PhoneNum_T = currnetUser->data.getPhonenum();
	System::String^ PhoneNum = gcnew System::String(PhoneNum_T.c_str());
	label10->Text = PhoneNum;

	std::string Address_T = currnetUser->data.getAddress();
	System::String^ Address = gcnew System::String(Address_T.c_str());
	label11->Text = Address;

	std::string Email_T = currnetUser->data.getEmail();
	System::String^ Email = gcnew System::String(Email_T.c_str());
	label13->Text = Email;

	BankAccount UBA = currnetUser->data.getBankAccount();

	std::string ACCnum_T = UBA.getAccountNumber();
	System::String^ ACCnum = gcnew System::String(ACCnum_T.c_str());
	label18->Text = ACCnum;

	double balance = UBA.getBalance();

	label17->Text = balance.ToString();

	int trans_times = UBA.transactions.getSize();

	std::string transactions_T = currnetUser->data.getBankAccount().serialize();
	System::String^ transactions = gcnew System::String(transactions_T.c_str());
	richTextBox1->Text = transactions;
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;

	std::string Username = context.marshal_as<std::string>(username);
	std::string Userpassword = context.marshal_as<std::string>(password);

	auto currnetUser = userList.head;

	while (currnetUser != nullptr)
	{
		if (Username == currnetUser->data.getUsername() && Userpassword == currnetUser->data.getPassword())
		{
			break;
		}

		currnetUser = currnetUser->next;
	}

	double amount;

	System::String^ amount_T = textBox1->Text;
	System::Double::TryParse(amount_T, amount);


		if (System::Double::TryParse(amount_T, amount))
		{
			/*double newBalance = balance + amount;
			NUBA.balance = newBalance;
			Nuser.setBankAccount(NUBA);*/

			currnetUser->data.getBankAccount().performTransaction("deposit", amount);
		}

	textBox1->Clear();
	button2->PerformClick();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;

	std::string Username = context.marshal_as<std::string>(username);
	std::string Userpassword = context.marshal_as<std::string>(password);

	auto currnetUser = userList.head;

	while (currnetUser != nullptr)
	{
		if (Username == currnetUser->data.getUsername() && Userpassword == currnetUser->data.getPassword())
		{
			break;
		}

		currnetUser = currnetUser->next;
	}

	double amount;

	System::String^ amount_T = textBox2->Text;
	System::Double::TryParse(amount_T, amount);

	if (System::Double::TryParse(amount_T, amount))
	{
		if (currnetUser->data.getBankAccount().balance < amount)
		{
			MessageBox::Show("Insufficient funds for withdrawal.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		currnetUser->data.getBankAccount().performTransaction("withdraw", amount);
	}

	textBox2->Clear();
	button2->PerformClick();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	msclr::interop::marshal_context context;

	std::string targetACCnum = context.marshal_as<std::string>(textBox3->Text);

	std::string Username = context.marshal_as<std::string>(username);
	std::string Userpassword = context.marshal_as<std::string>(password);

	auto currnetUser = userList.head;

	auto targetUser = userList.head;

	while (currnetUser != nullptr)
	{
		if (Username == currnetUser->data.getUsername() && Userpassword == currnetUser->data.getPassword())
		{
			break;
		}

		currnetUser = currnetUser->next;
	}

	while (targetUser != nullptr)
	{
		if (targetACCnum == targetUser->data.getBankAccount().getAccountNumber())
		{
			break;
		}

		targetUser = targetUser->next;
	}

	double amount;

	System::String^ amount_T = textBox4->Text;
	System::Double::TryParse(amount_T, amount);

	if (System::Double::TryParse(amount_T, amount))
	{
		if (currnetUser->data.getBankAccount().balance < amount)
		{
			MessageBox::Show("Insufficient funds for the transfer.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		currnetUser->data.getBankAccount().performTransaction("withdraw", amount);
		targetUser->data.getBankAccount().performTransaction("deposit", amount);
	}
}
};
}
