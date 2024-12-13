#pragma once
#ifndef DATA_STRUCTURE_PROJECT_USER_H
#define DATA_STRUCTURE_PROJECT_USER_H

#include <iostream>
#include <string>
#include "BankAccount.h"
#include <string>
#include <iomanip>
#include <sstream>
#include "LinkedList.cpp"
#include "Transaction.h"
using namespace std;

class User
{public:
	static int nextU_ID;
	enum UserRole
	{
		ADMIN,
        CUSTOMER
	};
    User(const UserRole& role, const string& fname,
        const string& lname, const string& email, string Username,
        const string& password, const string& phonenum, const string& address,
        const BankAccount& bankAccount);
    User(const string& username, const string& password,
        const string& phonenum, const string& address,
        const BankAccount& bankAccount, const UserRole& role);

    User(UserRole role, const string& fname, const string& lname, const string& email,
        const string& password, const string& phoneNum, double initBalance, string Username);

    User() : Fname(""), Lname(""), Email(""), Password(""), phonenum("") {
        //       type = userType;
        //       uID = generateUserID();



    }
    User(const User& other);


    void setUserId(const std::string& newUserId);
    // Getters
protected: std::string userid;

public:
    LinkedList<Transaction> transactions;

    const string& getUsername() const;
    const string& getPassword() const;
    const string& getPhonenum() const;
    const string& getAddress() const;
    const string& getFname() const;
    const string& getLname() const;
    const string& getEmail() const;
    const string& getUserID() const;

    BankAccount& getBankAccount();
    UserRole getRole() const;

    // Setters
    void setUsername(const string& newUsername);
    void setPassword(const string& newPassword);
    void setPhonenum(const string& newPhonenum);
    void setAddress(const string& newAddress);
    void setBankAccount(const BankAccount& newBankAccount);
    void setRole(UserRole newRole);

    void addTransaction(const string& transactionType, double amount);

    // Helper function to serialize BankAccount
    std::string serializeBankAccount() const;

    // Helper function to deserialize BankAccount
    static BankAccount deserializeBankAccount(const std::string& str);

    // Serialize function
    std::string serialize() const;

    // Deserialize function
    // Old Mothed
    static User deserialize(const std::string& str);
    string generateUserID();

protected:
    string username;
    string Password;
    string phonenum;
    string address;
    string uID;
    string Email;
    BankAccount bankAccount;
    string Fname;
    string Lname;
    UserRole role;
};
#endif // !DATA_STRUCTURE_PROJECT_USER_H