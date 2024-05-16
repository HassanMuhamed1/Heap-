//
// Created by hassa on 5/14/2024.
//

#ifndef HEAP_ITEM_H
#define HEAP_ITEM_H

#include <bits/stdc++.h>

using namespace std;
//#include <string>
class Item {
private:
    // int id;
    string itemName;
    string category;
    double price;
public:
    Item();
    Item(string itemName , string category , double price);
    Item(const Item& item);
    bool operator < (const Item& it) const;
    bool operator > (const Item& it) const;
    void print();
    void readItems(istream& input);
    string getItemName();
    string getCategory();
    double getPrice();
    bool operator == (const Item& item) const;
};



#endif //HEAP_ITEM_H
