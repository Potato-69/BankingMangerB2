#pragma once
#ifndef BNAKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iomanip>
#include <sstream>
#include "LinkedList.cpp"
#include "Transaction.h"

using namespace std;
class BankAccount {
private:
	static int nextAccountNumber;
	string accountNumber;
    string accountType;
    




public:
    double balance;
    LinkedList<Transaction> transactions;
    BankAccount(const string& accType, double initBalance);
    // Constructor of BankAccount
    BankAccount() : balance(0.0), accountNumber(generateAccountNumber()) {
        // Initialize an empty transaction list
        transactions = LinkedList<Transaction>();
    }
    // Copy constructor
    BankAccount(const BankAccount& other);

    const string& getAccountNumber();
    const string& getAccountType();
    void setAccountType(const string& type);
    double getBalance();
    void setBalance(double newBalance);

    void performTransaction(string transactionType, double amount);

    // Serialization method
    string serialize() const;

    // Deserialization method
    static BankAccount deserialize(const std::string& str);


private:
    static string generateAccountNumber();
};
#endif // BNAKACCOUNT_H


