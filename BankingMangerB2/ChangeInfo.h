#pragma once
#include "RegisterForm.h"
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

namespace BankingMangerB2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ChangeInfo
	/// </summary>
	public ref class ChangeInfo : public System::Windows::Forms::Form
	{
	public:
		bool boolValue = false;
		System::String^ username;
		System::String^ password;
		ChangeInfo(void)
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
		~ChangeInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button7;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ChangeInfo::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(615, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(184, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Change Password";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ChangeInfo::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(60, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Old Password";
			this->label1->Click += gcnew System::EventHandler(this, &ChangeInfo::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(347, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"New Password";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(180, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 23);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &ChangeInfo::textBox1_TextChanged);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(178, 44);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(137, 2);
			this->panel1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(472, 22);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 23);
			this->textBox2->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(472, 46);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(137, 2);
			this->panel2->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(615, 55);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 29);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Change First Name";
			this->button2->UseVisualStyleBackColor = false;
			//this->button2->Click += gcnew System::EventHandler(this, &ChangeInfo::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(51, 55);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 23);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Old first Name";
			this->label3->Click += gcnew System::EventHandler(this, &ChangeInfo::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(335, 55);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 23);
			this->label4->TabIndex = 2;
			this->label4->Text = L"New First Name";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(178, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 23);
			this->textBox3->TabIndex = 3;
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(178, 79);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(137, 2);
			this->panel3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(472, 55);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(137, 23);
			this->textBox4->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(472, 79);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(137, 2);
			this->panel4->TabIndex = 4;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(615, 90);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 29);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Change Last Name";
			this->button3->UseVisualStyleBackColor = false;
			//this->button3->Click += gcnew System::EventHandler(this, &ChangeInfo::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(47, 92);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 23);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Old Last Name";
			this->label5->Click += gcnew System::EventHandler(this, &ChangeInfo::label1_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(335, 92);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 23);
			this->label6->TabIndex = 2;
			this->label6->Text = L"New Last Name";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(178, 90);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(137, 23);
			this->textBox5->TabIndex = 3;
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(178, 114);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(137, 2);
			this->panel5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(472, 90);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(137, 23);
			this->textBox6->TabIndex = 3;
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(472, 114);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(137, 2);
			this->panel6->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(615, 125);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 29);
			this->button4->TabIndex = 0;
			this->button4->Text = L"Change Phone Num";
			this->button4->UseVisualStyleBackColor = false;
			//this->button4->Click += gcnew System::EventHandler(this, &ChangeInfo::button4_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(38, 127);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 23);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Old Phone Num";
			this->label7->Click += gcnew System::EventHandler(this, &ChangeInfo::label1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(321, 127);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(145, 23);
			this->label8->TabIndex = 2;
			this->label8->Text = L"New PhoneNume";
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(178, 125);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(137, 23);
			this->textBox7->TabIndex = 3;
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(178, 149);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(137, 2);
			this->panel7->TabIndex = 4;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(472, 125);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(137, 23);
			this->textBox8->TabIndex = 3;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(472, 149);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(137, 2);
			this->panel8->TabIndex = 4;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(615, 160);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 29);
			this->button5->TabIndex = 0;
			this->button5->Text = L"Change Email";
			this->button5->UseVisualStyleBackColor = false;
			//this->button5->Click += gcnew System::EventHandler(this, &ChangeInfo::button5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(87, 162);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 23);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Old Email";
			this->label9->Click += gcnew System::EventHandler(this, &ChangeInfo::label1_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(376, 162);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(90, 23);
			this->label10->TabIndex = 2;
			this->label10->Text = L"New Email";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(178, 160);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(137, 23);
			this->textBox9->TabIndex = 3;
			// 
			// panel9
			// 
			this->panel9->Location = System::Drawing::Point(178, 184);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(137, 2);
			this->panel9->TabIndex = 4;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(472, 160);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(137, 23);
			this->textBox10->TabIndex = 3;
			// 
			// panel10
			// 
			this->panel10->Location = System::Drawing::Point(472, 184);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(137, 2);
			this->panel10->TabIndex = 4;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(615, 195);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(184, 29);
			this->button6->TabIndex = 0;
			this->button6->Text = L"Change Address";
			this->button6->UseVisualStyleBackColor = false;
			//this->button6->Click += gcnew System::EventHandler(this, &ChangeInfo::button6_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(70, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(102, 23);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Old Address";
			this->label11->Click += gcnew System::EventHandler(this, &ChangeInfo::label1_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(357, 197);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(109, 23);
			this->label12->TabIndex = 2;
			this->label12->Text = L"New Address";
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->Location = System::Drawing::Point(178, 195);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(137, 23);
			this->textBox11->TabIndex = 3;
			// 
			// panel11
			// 
			this->panel11->Location = System::Drawing::Point(178, 219);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(137, 2);
			this->panel11->TabIndex = 4;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(472, 195);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(137, 23);
			this->textBox12->TabIndex = 3;
			// 
			// panel12
			// 
			this->panel12->Location = System::Drawing::Point(472, 219);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(137, 2);
			this->panel12->TabIndex = 4;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(773, 236);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(77, 29);
			this->button7->TabIndex = 0;
			this->button7->Text = L"Back";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &ChangeInfo::button7_Click);
			// 
			// ChangeInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(862, 277);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ChangeInfo";
			this->Text = L"ChangeInfo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	this->boolValue = true;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
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

	std::string OldUserPassword = context.marshal_as<std::string>(textBox1->Text);
	if (currnetUser->data.getPassword() == OldUserPassword)
	{
		std::string NewUserPassword = context.marshal_as<std::string>(textBox2->Text);
		currnetUser->data.setPassword(NewUserPassword);
	}
	else
	{
		MessageBox::Show("Wrong old Password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
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

	std::string OldUserFname = context.marshal_as<std::string>(textBox3->Text);
	if (currnetUser->data.getFname() == OldUserFname)
	{
		std::string NewUserFname = context.marshal_as<std::string>(textBox4->Text);
		currnetUser->data.setFname(NewUserFname);
	}
	else
	{
		MessageBox::Show("Wrong old name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
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

	std::string OldUserLname = context.marshal_as<std::string>(textBox5->Text);
	if (currnetUser->data.getLname() == OldUserLname)
	{
		std::string NewUserLname = context.marshal_as<std::string>(textBox6->Text);
		currnetUser->data.setLname(NewUserLname);
	}
	else
	{
		MessageBox::Show("Wrong old name.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

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

	std::string OldUserPhoneNum = context.marshal_as<std::string>(textBox7->Text);
	if (currnetUser->data.getPhonenum() == OldUserPhoneNum)
	{
		std::string NewUserPhoneNum = context.marshal_as<std::string>(textBox8->Text);
		currnetUser->data.setLname(NewUserPhoneNum);
	}
	else
	{
		MessageBox::Show("Wrong old Phone number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
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

	std::string OldUserEmail = context.marshal_as<std::string>(textBox9->Text);
	if (currnetUser->data.getPhonenum() == OldUserEmail)
	{
		std::string NewUserEmail = context.marshal_as<std::string>(textBox10->Text);
		currnetUser->data.setEmail(NewUserEmail);
	}
	else
	{
		MessageBox::Show("Wrong old Email.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
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

	std::string OldUserAddress = context.marshal_as<std::string>(textBox11->Text);
	if (currnetUser->data.getPhonenum() == OldUserAddress)
	{
		std::string NewUserAddress = context.marshal_as<std::string>(textBox12->Text);
		currnetUser->data.setAddress(NewUserAddress);
	}
	else
	{
		MessageBox::Show("Wrong old Address.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
};
}
