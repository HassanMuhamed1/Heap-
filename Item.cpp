#include <bits/stdc++.h>
using namespace std;

#include "Item.h"

Item::Item() : itemName(""), category(""), price(0.0) {}

Item::Item(string itemName, string category, double price)
        : itemName(itemName), category(category), price(price) {}

Item::Item(const Item& item)
        : itemName(item.itemName), category(item.category), price(item.price) {}

void Item::print() {
    cout<<"Item Name: "<<itemName<<' '<<"Category: "<<category<<' '<<"Price: "<<price<<endl;
}

string Item::getItemName() {
    return itemName;
}

string Item::getCategory() {
    return category;
}

double Item::getPrice() {
    return price;
}

bool Item::operator==(const Item &item) const {
     return itemName == item.itemName && price == item.price && category == item.category;
//    return itemName == item.itemName;
}

bool Item::operator<(const Item &it) const  {
    return price < it.price;
}

bool Item::operator>(const Item &it) const {
    return price > it.price;
}
