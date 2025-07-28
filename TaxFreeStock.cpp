#include "TaxFreeStock.h"

using namespace std;

TaxFreeStock::TaxFreeStock(const string& name, int shares, double price, const string& accountType)
    : Stock(name, shares, price), accountType(accountType) {}

string TaxFreeStock::getAccountType() const {
    return accountType;
}

ostream& operator<<(ostream& os, const TaxFreeStock& stock) {
    os << static_cast<const Stock&>(stock) << ", Account Type: " << stock.accountType;
    return os;
}

bool TaxFreeStock::operator==(const TaxFreeStock& other) const {
    return static_cast<const Stock&>(*this) == static_cast<const Stock&>(other) && accountType == other.accountType;
} 
