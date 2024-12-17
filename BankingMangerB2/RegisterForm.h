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
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:

		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
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
			this->button1->TabIndex = 2;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &RegisterForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(687, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Register";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(849, 174);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(130, 2);
			this->panel2->TabIndex = 8;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::Black;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(849, 144);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(130, 23);
			this->textBox2->TabIndex = 6;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox2_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(693, 174);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(130, 2);
			this->panel1->TabIndex = 9;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(693, 144);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(130, 23);
			this->textBox1->TabIndex = 7;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox1_KeyDown);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(845, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Last name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(689, 118);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"First name";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(689, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(87, 23);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(845, 185);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(80, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Password";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Black;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(693, 211);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(130, 23);
			this->textBox3->TabIndex = 7;
			this->textBox3->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox3_KeyDown);
			// 
			// panel3
			// 
			this->panel3->Location = System::Drawing::Point(693, 241);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(130, 2);
			this->panel3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Black;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(849, 211);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(130, 23);
			this->textBox4->TabIndex = 6;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox4_KeyDown);
			// 
			// panel4
			// 
			this->panel4->Location = System::Drawing::Point(849, 241);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(130, 2);
			this->panel4->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(689, 249);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 23);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Phone number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(845, 249);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 23);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Email";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(689, 316);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(69, 23);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Balance";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Black;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(693, 275);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(130, 23);
			this->textBox5->TabIndex = 7;
			this->textBox5->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox5_KeyDown);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(845, 316);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 23);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Address";
			// 
			// panel5
			// 
			this->panel5->Location = System::Drawing::Point(693, 305);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(130, 2);
			this->panel5->TabIndex = 9;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Black;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(693, 342);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(130, 23);
			this->textBox6->TabIndex = 7;
			this->textBox6->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox6_KeyDown);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Black;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(849, 275);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(130, 23);
			this->textBox7->TabIndex = 6;
			this->textBox7->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox7_KeyDown);
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(693, 372);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(130, 2);
			this->panel6->TabIndex = 9;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Black;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(849, 342);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(130, 23);
			this->textBox8->TabIndex = 6;
			this->textBox8->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &RegisterForm::textBox8_KeyDown);
			// 
			// panel7
			// 
			this->panel7->Location = System::Drawing::Point(849, 305);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(130, 2);
			this->panel7->TabIndex = 8;
			// 
			// panel8
			// 
			this->panel8->Location = System::Drawing::Point(849, 372);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(130, 2);
			this->panel8->TabIndex = 8;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Transparent;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(693, 396);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(65, 27);
			this->checkBox1->TabIndex = 10;
			this->checkBox1->Text = L"Staff";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::Transparent;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(693, 429);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(136, 27);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"I agree to the";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::Transparent;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(849, 396);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(106, 27);
			this->checkBox3->TabIndex = 10;
			this->checkBox3->Text = L"Customer";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->label10->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->label10->Location = System::Drawing::Point(823, 430);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(172, 23);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Terms and conditions";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(693, 462);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(286, 42);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Register";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisterForm::button2_Click);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1080, 720);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"RegisterForm";
			this->Text = L" ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		this->boolValue = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		msclr::interop::marshal_context context;

		std::string username = context.marshal_as<std::string>(textBox3->Text);
		std::string userpassword = context.marshal_as<std::string>(textBox4->Text);
		
		for (int i = 0; i < userList.getSize(); i++) {
			if (username == userList.getElementAt(i).getUsername() && userpassword == userList.getElementAt(i).getPassword()) {
				MessageBox::Show("User with the same username and password already exists.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
		}

		std::string useraddress = context.marshal_as<std::string>(textBox8->Text);
		std::string userfname = context.marshal_as<std::string>(textBox1->Text);
		std::string userlname = context.marshal_as<std::string>(textBox2->Text);
		std::string useremail = context.marshal_as<std::string>(textBox7->Text);
		// std::string account = context.marshal_as<std::string>(enteredaccount);
		std::string phoneNumber = context.marshal_as<std::string>(textBox5->Text);

		// Find the correct position to insert in a sorted order
		// int index = userList.getSize();

		//  unique ID mechanism 
		std::string userId = "ID_" + std::to_string(static_cast<long long>(time(0)));
		System::String^ UserID = gcnew System::String(userId.c_str());


		double parsedBalance;

		System::Double::TryParse(textBox6->Text, parsedBalance);

		if (checkBox1->Checked == true)
		{
			if (checkBox2->Checked == false)
			{
				MessageBox::Show("Please the terms and conditions.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			string account = "saff";
			BankAccount account2(account, parsedBalance);
			User newUser_A (User::UserRole(User::ADMIN), userfname, userlname, useremail, username,
				userpassword, phoneNumber, useraddress, account2, userId);
			
			// the fields are not empty
			if (String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text)) {
				MessageBox::Show("Please enter both username and password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			userList.append(newUser_A);
		}

		else if (checkBox3->Checked == true)
		{
			if (checkBox2->Checked == false)
			{
				MessageBox::Show("Please the terms and conditions.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
			string account = "customer";
			BankAccount account2(account, parsedBalance);
			User newUser_A(User::UserRole(User::CUSTOMER), userfname, userlname, useremail, username,
				userpassword, phoneNumber, useraddress, account2, userId);
			
			// the fields are not empty
			if (String::IsNullOrEmpty(textBox3->Text) || String::IsNullOrEmpty(textBox4->Text)) {
				MessageBox::Show("Please enter both username and password.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			userList.append(newUser_A);

		}
		else
		{
			MessageBox::Show("Please Check if u want a staff account or a customer.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		

		this->Close();
		boolValue = true;

	}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox2->Focus();
	}
}
private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox3->Focus();
	}
}
private: System::Void textBox3_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox4->Focus();
	}
}
private: System::Void textBox4_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox5->Focus();
	}
}
private: System::Void textBox5_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox7->Focus();
	}
}
private: System::Void textBox7_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox6->Focus();
	}
}
private: System::Void textBox6_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		textBox8->Focus();
	}
}
private: System::Void textBox8_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Enter)
	{
		button2->PerformClick();
	}
}
};
}
