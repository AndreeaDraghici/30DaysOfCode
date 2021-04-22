#pragma once
#include"Book.h"
#include<iostream>
using namespace std;
class MyBook : public Book
{
protected:
    int price;
public:
    MyBook(const string& title, const string& author, int price)
        : Book(title, author), price(price) {}

    virtual void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

