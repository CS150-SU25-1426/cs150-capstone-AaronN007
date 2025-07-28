#include <iostream>
#include "Stock.h"
#include "StockList.h"
using namespace std;

void showMenu() {
    cout << "\nStock Portfolio Menu:" << endl;
    cout << "1. Add Stock" << endl;
    cout << "2. Edit Stock" << endl;
    cout << "3. Delete Stock" << endl;
    cout << "4. Show All Stocks" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main_phase2() {
    StockList portfolio;
    int choice;
    do {
        showMenu();
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            string name;
            int shares;
            double price;
            cout << "Enter stock symbol: ";
            getline(cin, name);
            cout << "Enter number of shares: ";
            cin >> shares;
            cout << "Enter price per share: ";
            cin >> price;
            portfolio.addStock(Stock(name, shares, price));
            cout << "Stock added!" << endl;
        } else if (choice == 2) {
            string name;
            int shares;
            double price;
            cout << "Enter stock symbol to edit: ";
            getline(cin, name);
            cout << "Enter new number of shares: ";
            cin >> shares;
            cout << "Enter new price per share: ";
            cin >> price;
            if (portfolio.editStock(name, shares, price)) {
                cout << "Stock updated!" << endl;
            } else {
                cout << "Stock not found." << endl;
            }
        } else if (choice == 3) {
            string name;
            cout << "Enter stock symbol to delete: ";
            getline(cin, name);
            if (portfolio.deleteStock(name)) {
                cout << "Stock deleted!" << endl;
            } else {
                cout << "Stock not found." << endl;
            }
        } else if (choice == 4) {
            cout << "\nCurrent Portfolio:" << endl;
            portfolio.showAll();
        } else if (choice == 5) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid option. Try again." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (choice != 5);
    return 0;
}

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

// ---- PHASE 3 MENU EXTENSION ----
#include "TaxFreeStock.h"

void showMenuPhase3() {
    cout << "\nStock Portfolio Menu (with Tax-Free):" << endl;
    cout << "1. Add Stock" << endl;
    cout << "2. Edit Stock" << endl;
    cout << "3. Delete Stock" << endl;
    cout << "4. Show All Stocks" << endl;
    cout << "5. Add Tax-Free Stock" << endl;
    cout << "6. Show All Tax-Free Stocks" << endl;
    cout << "7. Exit" << endl;
    cout << "Choose an option: ";
}

int main_phase3() {
    StockList portfolio;
    int choice;
    do {
        showMenuPhase3();
        cin >> choice;
        cin.ignore();
        if (choice == 1) {
            string name;
            int shares;
            double price;
            cout << "Enter stock symbol: ";
            getline(cin, name);
            cout << "Enter number of shares: ";
            cin >> shares;
            cout << "Enter price per share: ";
            cin >> price;
            portfolio.addStock(Stock(name, shares, price));
            cout << "Stock added!" << endl;
        } else if (choice == 2) {
            string name;
            int shares;
            double price;
            cout << "Enter stock symbol to edit: ";
            getline(cin, name);
            cout << "Enter new number of shares: ";
            cin >> shares;
            cout << "Enter new price per share: ";
            cin >> price;
            if (portfolio.editStock(name, shares, price)) {
                cout << "Stock updated!" << endl;
            } else {
                cout << "Stock not found." << endl;
            }
        } else if (choice == 3) {
            string name;
            cout << "Enter stock symbol to delete: ";
            getline(cin, name);
            if (portfolio.deleteStock(name)) {
                cout << "Stock deleted!" << endl;
            } else {
                cout << "Stock not found." << endl;
            }
        } else if (choice == 4) {
            cout << "\nCurrent Portfolio:" << endl;
            portfolio.showAll();
        } else if (choice == 5) {
            string name, accountType;
            int shares;
            double price;
            cout << "Enter stock symbol: ";
            getline(cin, name);
            cout << "Enter number of shares: ";
            cin >> shares;
            cout << "Enter price per share: ";
            cin >> price;
            cin.ignore();
            cout << "Enter account type (e.g., Roth IRA): ";
            getline(cin, accountType);
            portfolio.addTaxFreeStock(TaxFreeStock(name, shares, price, accountType));
            cout << "Tax-Free Stock added!" << endl;
        } else if (choice == 6) {
            cout << "\nTax-Free Stocks:" << endl;
            portfolio.showAllTaxFree();
        } else if (choice == 7) {
            cout << "Exiting..." << endl;
        } else {
            cout << "Invalid option. Try again." << endl;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (choice != 7);
    return 0;
} 
