#include "Transaction.h"
#include <sstream>



Transaction::Transaction(std::string transactionType, double transactionAmount)
    : type(transactionType), amount(transactionAmount) {

    // Get current date
    time_t now = time(0);
    tm* ltm = localtime(&now);
    date = std::to_string(1 + ltm->tm_mon) + "/" + std::to_string(ltm->tm_mday) + "/" + std::to_string(1900 + ltm->tm_year);
}

// Copy constructor
Transaction::Transaction(const Transaction& other)
    : type(other.type), amount(other.amount), date(other.date) {}


// Implement getters
std::string Transaction::getType() const {
    return type;
}

double Transaction::getAmount() const {
    return amount;
}

const std::string& Transaction::getDate() const {
    return date;
}

// Deserialization method implementation
// Old Method
Transaction Transaction::deserialize(const std::string& str) {
    std::istringstream iss(str);
    Transaction transaction;
    char pipe;

    if (std::getline(iss, transaction.type, '|') &&
        iss >> transaction.amount >> pipe) {
        std::getline(iss, transaction.date);
    }

    return transaction;
}

// Serialization method for Transaction
std::string Transaction::serialize() const {
    return "\n" + type + "|" + std::to_string(amount) + "|" + date;

}