#ifndef TAXFREESTOCK_H
#define TAXFREESTOCK_H

#include "Stock.h"
#include <string>
#include <iostream>

using namespace std;

class TaxFreeStock : public Stock {
private:
    string accountType;
public:
    TaxFreeStock(const string& name, int shares, double price, const string& accountType);
    string getAccountType() const;
    // Operator overloads
    friend ostream& operator<<(ostream& os, const TaxFreeStock& stock);
    bool operator==(const TaxFreeStock& other) const;
};

#endif 
