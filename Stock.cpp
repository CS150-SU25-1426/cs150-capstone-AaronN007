#include "Stock.h"

using namespace std;

Stock::Stock(const string& name, int shares, double price)
    : name(name), shares(shares), price(price) {}

string Stock::getName() const { return name; }
int Stock::getShares() const { return shares; }
double Stock::getPrice() const { return price; }

ostream& operator<<(ostream& os, const Stock& stock) {
    os << "Stock: " << stock.name << ", Shares: " << stock.shares << ", Price: $" << stock.price;
    return os;
}

bool Stock::operator==(const Stock& other) const {
    return name == other.name && shares == other.shares && price == other.price;
} 
