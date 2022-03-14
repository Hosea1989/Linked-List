// Specification file for the NumberList class
#ifndef NumberList_h
#define NumberList_h

class NumberList
{
private:
    //Declare a structure for the list
    struct ListNode
    {
        int value; //The value in this node
        struct ListNode *next; // To point to the next node
    };
    ListNode *head;
public:
    //Constructor
    NumberList()
    { head = nullptr; }
    
    //Destructor
     ~NumberList()
    { };
    
    //Linked list operations
    void appendNode(int);
    void insertNode(int);
    void deleteNode(int);
    void displayList() const;
    
    
};
#endif /* NumberList_h */
