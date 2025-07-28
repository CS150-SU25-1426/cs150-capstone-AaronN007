[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/W7bqK6NI)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=19964027)
# CS150-Capstone
 Stock Portfolio 

## Resources
- Yahoo Finance: https://finance.yahoo.com/
- Google Finance: https://www.google.com/finance
- C++ documentation: https://cplusplus.com/
- C++ Inheritance Reference: https://en.cppreference.com/w/cpp/language/inheritance

## Summary
This project implements a Stock class and a StockList class for managing a stock portfolio. The StockList class allows users to add, edit, delete, and display stocks through a menu-driven interface. Operator overloading is used for both classes to support printing and comparison. Stock information such as ticker symbols and example prices were referenced from Yahoo Finance and Google Finance.

A TaxFreeStock class, derived from Stock, is also included to represent stocks held in tax-free accounts (e.g., Roth IRA). TaxFreeStock introduces an additional attribute, accountType, to specify the type of tax-advantaged account. This class demonstrates the use of C++ inheritance by reusing the Stock class's attributes and methods, while extending its functionality. TaxFreeStock also overloads the << and == operators to provide custom printing and comparison, just like the base Stock class.

The menu system was extended to allow users to add and display both regular stocks and tax-free stocks, making it easy to manage a diverse portfolio. This demonstrates how inheritance can be used to expand an inventory system to handle specialized item types while reusing existing code and logic.

## Reflection
The process of designing the Stock class and implementing operator overloads was straightforward. Researching real-world stock data from finance websites helped ensure realistic test cases. 
