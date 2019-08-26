struct Node
{
    int data; 
    struct Node* next; 
}

void Print (struct Node* head )// takes as argument the address of the head node 
{
    //THESE 3 LINES PRINT THE LIST IN NON REVERSE WAY
    if (head == NULL) return; // EXIT CONDITION @ the end of list 
    printf("%d", head -> data); //prints the data of the head node 
    Print(head->next); //address of the next node. Recursive call

    //THESE 3 LINES OF CODE PRINT LIST IN REVERSE
    if (head == NULL) return;      
    Print(head->next);
    printf("%d". head -> data); //
}

// CODE TO INSERT NODE 

int main()
{
    struct Node* head = NULL; //local variable 
    head = Insert( head, 2); // head = copy of the address of head node 
    head = Insert( head, 4);
    head = Insert( head, 6);
    head = Insert( head, 5);
    Print(head); //Output: 2 4 6 5 
}