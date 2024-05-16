//
// Created by hassa on 5/14/2024.
//

#ifndef HEAP_MINHEAP_H
#define HEAP_MINHEAP_H
#include "Item.h"


class MinHeap {
    vector<Item>arr;
public:
    MinHeap();
    void addItem(Item &item,bool byName);
    void removeItem(Item &item,bool byName);
    void displayItemNormally();
    void sortNameAscending();
    void sortPriceAscending();
    void sortNameDescending();
    void sortPriceDescending();
    void maxHeapify_name(vector<Item>&vec , int i);
    void maxHeapify_price(vector<Item>&vec , int i);
    void buildMaxHeap_name(vector<Item>& vec, int index);
    void buildMaxHeap_price(vector<Item>& vec, int index);
    void minHeapify_name(vector<Item>&vec , int i);
    void minHeapify_price(vector<Item>&vec , int i);
    void buildMinHeap_name(vector<Item>& vec ,int index);
    void buildMinHeap_price(vector<Item>& vec ,int index);
};


#endif //HEAP_MINHEAP_H
