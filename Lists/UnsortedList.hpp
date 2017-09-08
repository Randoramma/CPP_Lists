//
//  UnsortedList.hpp
//  Lists
//
//  Created by Randy McLain on 7/5/17.
//  Copyright © 2017 RM. All rights reserved.
//

#ifndef UnsortedList_hpp
#define UnsortedList_hpp

#include <stdio.h>

const int MAX_LENGTH=100;

class UnsortedList
{
public:
    UnsortedList();
    bool isEmpty();
    bool isFull();
    void emptyList();
    int getLength();
    int listContains(float item);
    
    void insertItem(float item);
    void deleteItem(float item);
    
    float getNextItem();
    float getPreviousItem();
    float getItemAt(int position);
    void printList(); 
    
protected:
private:
    int length;
    int currentLocation;
    float data[MAX_LENGTH];
};
#endif /* UnsortedList_hpp */
