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

namespace BankingMangerB2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for deposit
	/// </summary>
	public ref class deposit : public System::Windows::Forms::Form
	{
	public:
		int UserIndex;
		bool boolValue;
		property bool BoolValue {
			bool get() {
				return boolValue;
			}
			void set(bool value) {
				boolValue = value;
			}
		}
		deposit(void)
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
		~deposit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button3;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(deposit::typeid));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(354, 215);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 35);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Deposit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &deposit::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(354, 187);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 22);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(675, 453);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &deposit::button1_Click);
			// 
			// deposit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"deposit";
			this->Text = L"deposit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		User user = userList.getElementAt(UserIndex);
		double balance = user.getBankAccount().balance;

		User Nuser = User(user);
		double amount;

		System::String^ amount_T = textBox1->Text;

		if (System::Double::TryParse(amount_T, amount))
		{
			double newBalance = balance + amount;
			Nuser.getBankAccount().balance = newBalance;
			System::Windows::Forms::MessageBox::Show("Balance after update: " + Nuser.getBankAccount().balance.ToString());
			Transaction currentTransaction = Transaction("deposit", amount);
			Nuser.getBankAccount().transactions.insert(0, currentTransaction);
		}

		userList.replaceElementAt(UserIndex, Nuser);
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	this->boolValue = true;
}
};
}
