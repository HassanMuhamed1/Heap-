//
// Created by hassa on 5/14/2024.
//

#include "Heap.h"

#include <bits/stdc++.h>
using namespace std;

Heap::Heap() {
    arr.push_back(Item());
}

void Heap::maxHeapify_name(vector<Item> &vec, int i) {
    int parent = i / 2;
    while (i > 1 && vec[parent].getItemName() < vec[i].getItemName()) {
        swap(vec[parent], vec[i]);
        i = parent;
        parent = i / 2;
    }
}
void Heap::maxHeapify_price(vector<Item> &vec, int i) {
    int parent = i / 2;
    while (i > 1 && vec[parent].getPrice() < vec[i].getPrice()) {
        swap(vec[parent], vec[i]);
        i = parent;
        parent = i / 2;
    }

}

void Heap::minHeapify_name(vector<Item>& vec ,int i) {
    int parent = i / 2;
    while (i > 1 && vec[parent].getItemName() > vec[i].getItemName()) {
        swap(vec[parent], vec[i]);
        i = parent;
        parent = i / 2;
    }

}
void Heap::minHeapify_price(vector<Item>& vec ,int i) {
    int parent = i / 2;
    while (i > 1 && vec[parent].getPrice() > vec[i].getPrice()) {
        swap(vec[parent], vec[i]);
        i = parent;
        parent = i / 2;
    }
}

void Heap::addItem(Item& it , bool byName) {
    arr.push_back(it);
    int i= arr.size()-1;
    if(byName)
        maxHeapify_name(arr,i);
    else
        maxHeapify_price(arr,i);
}

void Heap::buildMaxHeap_name(vector<Item> &vec, int index) {
    for (int i = 1; i <= index; i++) {
        maxHeapify_name(vec, i);
    }
}
void Heap::buildMaxHeap_price(vector<Item> &vec, int index) {
    for (int i = 1; i <= index; i++) {
        maxHeapify_price(vec, i);
    }
}

void Heap::buildMinHeap_price(vector<Item>&vec , int index) {
    for (int i = 1; i <= index; i++) {
        minHeapify_price(vec, i);
    }
}
void Heap::buildMinHeap_name(vector<Item>&vec , int index) {
    for (int i = 1; i <= index; i++) {
        minHeapify_name(vec, i);
    }
}
void Heap::removeItem(Item &item,bool byName) {
    int i;
    for (i = 1; i < arr.size(); i++) {
        if (arr[i] == item)
            break;
    }
    if (i == arr.size()) {
        cout << "Item not found in heap." << endl;
        return;
    }
    swap(arr[i] , arr[arr.size()-1]);
    arr.pop_back();
    if(byName)
        buildMaxHeap_name(arr,arr.size()-1);
    else
        buildMaxHeap_price(arr,arr.size()-1);
}

void Heap::displayItemNormally(){
    if(arr.empty())
        cout<<"There is no items with this name!\n";
    else{
        for(vector<Item>::iterator it = arr.begin(); it != arr.end(); ++it) {
            cout << "Item Name: "<<it->getItemName() << endl;
            cout << "Item Category: "<<it->getCategory() << endl;
            cout << "Item Price: "<<it->getPrice() << endl;
            cout<<endl;
        }
    }
}

void Heap::sortNameAscending() {
    int heapSize = arr.size()-1;
    for (int i = heapSize ; i >=1; i--) {
        swap(arr[i],arr[1] );
        heapSize --;
        buildMaxHeap_name(arr, heapSize);
    }
}

void Heap::sortPriceAscending() {
    int heapSize = (int) (arr.size())-1;
    for (int i = heapSize ; i >=1; i--) {
        swap(arr[i],arr[1] );
        heapSize --;
        buildMaxHeap_price(arr, heapSize);
    }
}

void Heap::sortNameDescending() {
    buildMinHeap_name(arr,arr.size()-1);
    int heapSize = arr.size()-1;
    for (int i = heapSize ; i >=1; i--) {
        swap(arr[1],arr[i] );
        heapSize --;
        buildMinHeap_name(arr, heapSize);
    }
}

void Heap::sortPriceDescending() {
    buildMinHeap_price(arr,arr.size()-1);
    int heapSize = arr.size()-1;
    for (int i = heapSize ; i >=1; i--) {
        swap(arr[1],arr[i] );
        heapSize --;
        buildMinHeap_price(arr, heapSize);
    }
}
