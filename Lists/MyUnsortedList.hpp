//
//  MyUnsortedList.hpp
//  Lists
//
//  Created by Randy McLain on 7/7/17.
//  Copyright © 2017 RM. All rights reserved.
//

#ifndef MyUnsortedList_hpp
#define MyUnsortedList_hpp

#include <stdio.h>

const int MAX_LIST_SIZE = 100;
class MyUnsortedList
{

public:
    MyUnsortedList();
    // methods
    bool isEmpty();
    bool isFull();
    
    void emptyList();
    int getLength();
    
    void setDataAtIndex(int index);
    void addElement(float item);
    void removeElement(float item); //
    
    float getDataAtIndex(int index);
    float getNextItem();
    float getPreviousItem();
    
    int listContains(float item);
    
    void printList();
    
private:
    
    // properties
    int currentLocation;
    float data[MAX_LIST_SIZE];
    int length;
    
};
#endif /* MyUnsortedList_hpp */
