//
//  MyUnsortedList.cpp
//  Lists
//
//  Created by Randy McLain on 7/7/17.
//  Copyright © 2017 RM. All rights reserved.
//

#include <iostream>
#include "MyUnsortedList.hpp"

using namespace std;
MyUnsortedList::MyUnsortedList()
{
    currentLocation=0;
    length=0;

}

bool MyUnsortedList::isEmpty() {
    return (length==0);
}

bool MyUnsortedList::isFull() {
    return (length==MAX_LIST_SIZE);
}

void MyUnsortedList::emptyList() {
    length = 0;
    currentLocation = 0;
}

int MyUnsortedList::getLength() {
    return length;
}

void MyUnsortedList::addElement(float item) {
    if (!isFull()){
        data[length] = item;
        length++;
    }
}

void MyUnsortedList::removeElement(float item) {
    if (!isEmpty()) {
        data[listContains(item)]=data[length--];
    }
}

float MyUnsortedList::getDataAtIndex(int index) {
    return data[index];
}

float MyUnsortedList::getNextItem() {
    
    return (currentLocation++ == MAX_LIST_SIZE-1)? -1 : data[currentLocation];
}

float MyUnsortedList::getPreviousItem() {
    return (currentLocation-- == 0)? -1 : data[currentLocation];
}

int MyUnsortedList::listContains(float item) {
    
    for (int index=0; index<length; index++){
        if (data[index] == item) {
            return index;
        }
    }
    return -1;
}

void MyUnsortedList::printList() {
    if (isEmpty()) return;
    
    for (int index =0; index<length; index++){
        cout << data[index] << "\n" << endl;
    }
}

