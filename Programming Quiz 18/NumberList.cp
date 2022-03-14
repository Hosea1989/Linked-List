//
//  NumberList.cpp
//  Module 18 Programming Quiz
//
//  Created by Damien Hosea on 11/30/19.
//  Copyright © 2019 Damien Hosea. All rights reserved.
// ^º^ The Definition for the appenNode member function ^º^
#include "NumberList.h"
#include <iostream>
using namespace std;

void NumberList::appendNode(int num)
{
    ListNode *newNode; //To point to a new node
    ListNode *nodePtr; //To move through a list
    
    //Allocate a new node and store num there
    newNode = new ListNode;
    newNode->value = num;
    newNode->next = nullptr;
    
    //If there are no nodes in the list
    //make newNode the first node
    if (!head)
        head = newNode;
    else //... insert new node at the end of the list
    {
        // Initialize nodePtr to head of list
        nodePtr = head;
        
        // Find the last node in the list
        while (nodePtr->next)
            nodePtr = nodePtr->next;
        
        // Insert newNode as the last node
        nodePtr->next = newNode; 
    }
}

void NumberList::displayList() const
{
    ListNode *nodePtr; //To move through the list
    
    // Position nodeptr at the head of the list
    nodePtr = head;
    
    // While nodePtr at the head of the list.
    while (nodePtr)
    {
        //Display the value in this node
        cout << nodePtr->value <<endl;
        
        //Move to the next node
        nodePtr = nodePtr->next;
    }
        
}

void NumberList::insertNode(int num)
{
    ListNode *newNode; //This is a new node
    ListNode *nodePtr; //This is to traverse the list
    ListNode *previousNode =nullptr; //The previous node
    
    //Allocate a new node and store num there
    newNode = new ListNode;
    newNode->value = num;
    
    //if there are no nodes in the list
    //make newNode the first node
    if(!head)
    {
        head = newNode;
        newNode->next = nullptr;
    }
    else //Otherwise, insert newNode
    {
        //Position nodePtr at the head of list.
        nodePtr = head;
        
        //Initialize previous Node to nullPtr
        previousNode = nullptr;
        
        //Skip  all node whose value is less than num
        while (nodePtr != nullptr && nodePtr->value < num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        
        // If the new node is to be the 1st in the list
        // insert  in before all other nodes
        if (previousNode == nullptr)
        {
            head = newNode;
            newNode->next = nodePtr;
        }
        else //Otherwise insert after the previous node
        {
            previousNode->next = newNode;
            newNode->next = nodePtr;
        }
    }
}

void NumberList::deleteNode(int num)
{
    ListNode *nodePtr; //To tranverse the list
    ListNode *previousNode = nullptr; // To point to the previous node
    
    //If the list is empty, do nothing
    if (!head)
        return;
    
    //Determine if the first node is the one
    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        //Initialize nodePtr to head of list
        nodePtr = head;
        
        //Skip all nodes whose value member is
        // not equal to num
        while (nodePtr != nullptr && nodePtr-> value != num)
        {
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        
        //If nodePtr is not at the end of the list then
        // link the previous node to the node after
        // nodePtr, then delete nodePtr
        if (nodePtr)
        {
            previousNode->next = nodePtr->next;
            delete nodePtr;
        }
    }
}
