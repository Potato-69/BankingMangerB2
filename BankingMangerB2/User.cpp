#include "User.h"

#include <sstream>

using namespace std;

User::User(const UserRole& role, const string& fname, const string& lname,
    const string& email, string Username, const string& password, const string& phonenum,
    const string& address, const BankAccount& bankAccount) : role(role) , Fname(fname), Lname(lname), Email(email), 
    username(Username), Password(password), phonenum(phonenum), address(address), bankAccount(bankAccount)
{
}

User::User(const string& username, const string& password,
    const string& phonenum, const string& address,
    const BankAccount& bankAccount, const UserRole& role)
    : username(username), Password(password), phonenum(phonenum),
    address(address), bankAccount(bankAccount), role(role) {
}


// User initializer 

int User::nextU_ID = 1;



User::User(UserRole usrole, const string& fname, const string& lname, const string& email,
    const string& password, const string& phoneNum, double initBalance, string Username) : Fname(fname), Lname(lname), Email(email), Password(password), role(usrole), phonenum(phoneNum), username(Username) {
    role = usrole;
    uID = generateUserID();
    bankAccount.setBalance(initBalance);
    bankAccount.setAccountType("customer");

}

User::User(const User& other)
    : role(other.role), Fname(other.Fname), Lname(other.Lname), Email(other.Email),
    username(other.username), Password(other.Password), phonenum(other.phonenum),
    address(other.address), bankAccount(other.bankAccount) {}

string User::generateUserID() {
    std::stringstream ss;
    if (nextU_ID == 1) {
        cout << "CUSTOMER is " << CUSTOMER << endl;
        cout << "ADMIN is " << ADMIN << endl;
    }

    cout << "type is " << role << endl;
    //     type = CUSTOMER;
    ss << (role == ADMIN ? "ADM" : "CUS") << std::setfill('0') << std::setw(3) << nextU_ID++;
    return ss.str();
}

// Getters
const string& User::getUsername() const {
    return username;
}

void User::setUserId(const std::string& newUserId) {
    userid = newUserId;
}
const string& User::getPassword() const {
    return Password;
}

const string& User::getPhonenum() const {
    return phonenum;
}

const string& User::getAddress() const {
    return address;
}

const string& User::getFname() const
{
    return Fname;
}

const string& User::getLname() const
{
    return Lname;
}

const string& User::getEmail() const
{
    return Email;
}

const string& User::getUserID() const
{
    return uID;
}

BankAccount& User::getBankAccount() {
    return bankAccount;
}

User::UserRole User::getRole() const {
    return role;
}

// Setters
void User::setUsername(const string& newUsername) {
    username = newUsername;
}

void User::setPassword(const string& newPassword) {
    Password = newPassword;
}

void User::setPhonenum(const string& newPhonenum) {
    phonenum = newPhonenum;
}

void User::setAddress(const string& newAddress) {
    address = newAddress;
}

void User::setBankAccount(const BankAccount& newBankAccount) {
    bankAccount = newBankAccount;
}

void User::setRole(User::UserRole newRole) {
    role = newRole;
}

void User::addTransaction(const string& transactionType, double amount)
{
    Transaction newtransacion = Transaction(transactionType, amount);
    transactions.append(newtransacion);
}

std::string User::serialize() const {
    std::ostringstream oss;

    // Serialize user information
    oss << role << "," << Fname << "," << Lname << "," << Email << "," << Password << "," << phonenum << "," << username << ",";

    // Serialize BankAccount
    oss << serializeBankAccount();

    return oss.str();
}

// Old Mothed
User User::deserialize(const std::string& str) {
    std::istringstream iss(str);
    User user;
    // char comma;

    // Deserialize user information
    std::string userTypeStr;
    if (std::getline(iss, userTypeStr, ',')) {
        // Convert the userTypeStr to the enum UserType
        int userTypeInt;
        std::istringstream(userTypeStr) >> userTypeInt;
        user.role = static_cast<UserRole>(userTypeInt);

    }

    if (std::getline(iss, user.Fname, ',') &&
        std::getline(iss, user.Lname, ',') &&
        std::getline(iss, user.Email, ',') &&
        std::getline(iss, user.Password, ',') &&
        std::getline(iss, user.phonenum, ',') &&
        std::getline(iss, user.username, ',')

        ) {

        user.uID = user.generateUserID();

        // Deserialize BankAccount

        std::string bankAccountStr;
        std::getline(iss, bankAccountStr);
        user.bankAccount = BankAccount::deserialize(bankAccountStr);
    }

    return user;
}


std::string User::serializeBankAccount() const {
    return bankAccount.serialize();
}

BankAccount User::deserializeBankAccount(const std::string& str) {
    return BankAccount::deserialize(str);
}