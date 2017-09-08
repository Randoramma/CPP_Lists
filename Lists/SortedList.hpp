//
//  SortedList.hpp
//  Lists
//
//  Created by Randy McLain on 7/5/17.
//  Copyright © 2017 RM. All rights reserved.
//

#ifndef SortedList_hpp
#define SortedList_hpp

#include <stdio.h>

const int MAX_SORTED_LENGTH=100;


class SortedList
{
public: SortedList();
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
    int currentPos;
    float data[MAX_SORTED_LENGTH];
};
#endif /* SortedList_hpp */
