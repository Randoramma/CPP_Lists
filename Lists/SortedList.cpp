//
//  SortedList.cpp
//  Lists
//
//  Created by Randy McLain on 7/5/17.
//  Copyright © 2017 RM. All rights reserved.
//

#include "SortedList.hpp"
#include <iostream>
using namespace std;
SortedList::SortedList()
{
    length=0;
    currentPos=0;
}

bool SortedList::isEmpty()
{
    return (length==0);
}

bool SortedList::isFull()
{
    return (length==MAX_SORTED_LENGTH);
}

void SortedList::emptyList()
{
    length=0;
    currentPos=0;
}

int SortedList::getLength()
{
    return length;
}

int SortedList::listContains(float item)
{
    
    for (int position=0; position<length; position++)
    {
        if (item == data[position]) {
            return position;
        }
    }
    return -1;
}

void SortedList::insertItem(float item)
{
    int location = 0;
    while (location<length && data[location]<item)
    {
        location++;
    }
    for (int index=length; index>location; index--)
    {
        data[index]=data[index-1];
    }
    data[location]=item; 
}

void SortedList::deleteItem(float item)
{
    if (!isEmpty())
    {
        data[listContains(item)] = data[length -1];
        length--;
    }
}

float SortedList::getNextItem()
{
    currentPos = currentPos + 1;
    return data[currentPos];
}

float SortedList::getPreviousItem()
{
    currentPos = currentPos - 1;
    return data[currentPos];
}

float SortedList::getItemAt(int position)
{
    return data[position];
}

void SortedList::printList()
{
    if (!isEmpty())
    {
        for (int position=0; position<length; position++)
        {
            cout << data[position]<< " \n" << endl;
        }
    }
    else
    {
        cout << "list is empty" << endl;
    }
}
