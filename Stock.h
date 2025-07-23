#ifndef STOCK_H
#define STOCK_H

#include <string>
#include <iostream>

using namespace std;

class Stock {
private:
    string name;
    int shares;
    double price;
public:
    Stock(const string& name, int shares, double price);

    // Getters
    string getName() const;
    int getShares() const;
    double getPrice() const;

    // Operator overloads
    friend ostream& operator<<(ostream& os, const Stock& stock);
    bool operator==(const Stock& other) const;
};

#endif // STOCK_H 
