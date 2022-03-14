//
//  main.cpp
//  Module 18 Programming Quiz
//
//  Created by Damien Hosea on 11/30/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
//

#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
    //A NumberList object
    NumberList list;
    
    //Append some values to the list
    list.appendNode(28);
    list.appendNode(30);
    list.appendNode(31);
    
    //Insert a node in the middle of the list
    cout << " >->> This is the initial list of numbers: "<<endl;
    list.displayList();
    cout << " >->> Now adding the number 29 to the list " <<endl;
    list.insertNode(29);
    list.displayList();
    //I am going to delete number 4 from the list
    cout << " >->> Now deleting number 31 from the list"<<endl;
    list.deleteNode(31);
    list.displayList();
    return 0;
}
