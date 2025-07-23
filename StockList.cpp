#include "StockList.h"

using namespace std;

void StockList::addStock(const Stock& stock) {
    stocks.push_back(stock);
}

bool StockList::editStock(const string& name, int newShares, double newPrice) {
    for (auto& stock : stocks) {
        if (stock.getName() == name) {
            stock = Stock(name, newShares, newPrice);
            return true;
        }
    }
    return false;
}

bool StockList::deleteStock(const string& name) {
    for (auto it = stocks.begin(); it != stocks.end(); ++it) {
        if (it->getName() == name) {
            stocks.erase(it);
            return true;
        }
    }
    return false;
}

void StockList::showAll() const {
    for (const auto& stock : stocks) {
        cout << stock << endl;
    }
}

ostream& operator<<(ostream& os, const StockList& list) {
    for (const auto& stock : list.stocks) {
        os << stock << endl;
    }
    return os;
}

bool StockList::operator==(const StockList& other) const {
    return stocks == other.stocks;
} 
