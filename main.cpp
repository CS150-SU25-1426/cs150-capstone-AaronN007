#include <iostream>
#include "Stock.h"

using namespace std;

int main() {
    Stock s1("AAPL", 10, 175.50);
    Stock s2("GOOGL", 5, 2800.00);
    Stock s3("AAPL", 10, 175.50);

    cout << s1 << endl;
    cout << s2 << endl;

    if (s1 == s3) {
        cout << "s1 and s3 are the same stock holding." << endl;
    } else {
        cout << "s1 and s3 are different stock holdings." << endl;
    }

    if (s1 == s2) {
        cout << "s1 and s2 are the same stock holding." << endl;
    } else {
        cout << "s1 and s2 are different stock holdings." << endl;
    }

    return 0;
} 
