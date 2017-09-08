//
//  UnsortedList.cpp
//  Lists
//
//  Created by Randy McLain on 7/5/17.
//  Copyright © 2017 RM. All rights reserved.
//

#include <iostream>
#include "UnsortedList.hpp"
using namespace std;
UnsortedList::UnsortedList()
{
    length=0;
    currentLocation=0;
}

bool UnsortedList::isEmpty()
{
    return (length==0);
}

bool UnsortedList::isFull()
{
    return (length==MAX_LENGTH);
}

void UnsortedList::emptyList()
{
    length=0;
    currentLocation=0;
}

int UnsortedList::getLength()
{
    return length;
}

int UnsortedList::listContains(float item)
{

    for (int position=0; position<length; position++)
    {
        if (item == data[position]) {
            return position;
        }
    }
    return -1;
}

void UnsortedList::insertItem(float item)
{
    if (!isFull())
    {
    data[length] = item;
    length++;
    }
}

void UnsortedList::deleteItem(float item)
{
    if (!isEmpty())
    {
    data[listContains(item)] = data[length -1];
    length--;
    }
}

float UnsortedList::getNextItem()
{
    currentLocation = currentLocation + 1;
    return data[currentLocation];
}

float UnsortedList::getPreviousItem()
{
    currentLocation = currentLocation - 1;
    return data[currentLocation];
}

float UnsortedList::getItemAt(int position)
{
    return data[position];
}

void UnsortedList::printList()
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
