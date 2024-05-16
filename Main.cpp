#include <iostream>
#include "Item.h"
#include "Heap.h"
#include "MinHeap.h"
int main() {

    MinHeap heap;
    Item item1("Been", "Education", 70.99);
    Item item2("Ammo", "Education", 0.92);
    Item item3("Dog", "Electronics", 20.99);
    Item item4("Can", "Beverage", 100.99);
    Item item5("Man", "Beverage", 30.99);
    Item item6("Fan", "Beverage", 10.99);
    Item item7("Ean", "Beverage", 13.99);
    Item item8("Lan", "Beverage", 2.99);

    heap.addItem(item1,true);
    heap.addItem(item2,true);
    heap.addItem(item3,true);
    heap.addItem(item4,true);
    heap.addItem(item5,true);
    heap.addItem(item6,true);
    heap.addItem(item7,true);
    heap.addItem(item8,true);
//    heap.removeItem(item4,false);
//    heap.removeItem(item1,false);

//    heap.sortNameAscending();
//    heap.sortPriceAscending();
    heap.sortNameDescending();
//    heap.sortPriceDescending();

    heap.displayItemNormally();
}
