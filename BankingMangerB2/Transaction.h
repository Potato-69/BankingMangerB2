#pragma once
#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Transaction {
public:


private:
    string type;
    double amount;
    string date;

public:
    Transaction(string transactionType, double transactionAmount);
    Transaction(const Transaction& other);

    // Getters for transaction details
    string getType() const;
    double getAmount() const;
    const string& getDate() const;
    static Transaction deserialize(const std::string& str);
    std::string serialize() const;

    Transaction() : amount(0) {}  // Set default values as needed

};
#endif

