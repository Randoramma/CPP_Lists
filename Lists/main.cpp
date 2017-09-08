//
//  main.cpp
//  Lists
//
//  Created by Randy McLain on 7/5/17.
//  Copyright © 2017 RM. All rights reserved.
//

#include <iostream>
#include "UnsortedList.hpp"
#include "MyUnsortedList.hpp"
using namespace std;

int main() {

    UnsortedList mylist = UnsortedList();
    
    mylist.insertItem(1.07);
    mylist.insertItem(.066);
    mylist.insertItem(.566);
    mylist.printList();
    mylist.deleteItem(.066);
    mylist.printList();
    mylist.insertItem(345.356);
    mylist.insertItem(4465.35);
    mylist.getItemAt(2);
    mylist.emptyList();
    mylist.printList();
    mylist.insertItem(10);
    mylist.insertItem(5);
    cout << mylist.getLength() << endl;
    cout << mylist.getNextItem() << endl;
    
    MyUnsortedList theList = MyUnsortedList();
    cout << "My List Below" << endl;
    theList.addElement(1.07);
    theList.addElement(.066);
    theList.addElement(.566);
    theList.printList();
    theList.removeElement(.066);
    theList.printList();
    theList.addElement(345.356);
    theList.addElement(4465.35);
    theList.getDataAtIndex(2);
    theList.emptyList();
    theList.printList();
    theList.addElement(10);
    theList.addElement(5);
    cout << theList.getLength() << endl;
    cout << theList.getNextItem() << endl;
    
    
    
    return 0;
}
