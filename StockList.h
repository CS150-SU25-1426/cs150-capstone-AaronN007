#ifndef STOCKLIST_H
#define STOCKLIST_H

#include <vector>
#include "Stock.h"
#include <iostream>

using namespace std;

class StockList {
private:
    vector<Stock> stocks;
public:
    void addStock(const Stock& stock);
    bool editStock(const string& name, int newShares, double newPrice);
    bool deleteStock(const string& name);
    void showAll() const;
    friend ostream& operator<<(ostream& os, const StockList& list);
    bool operator==(const StockList& other) const;
};

#endif 
