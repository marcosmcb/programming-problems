/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    struct Node* newNode = (struct Node*) malloc( sizeof(struct Node*) );
    int i=0;
    
    newNode->data = data;
    newNode->next = NULL;
    
    if(head == NULL) 
    {    
        head = newNode;
        return head;
    }
    else if(position == 0) 
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    else
    {
        struct Node *aux = head;
        int curr_pos = 1;
        
        while(aux != NULL)
        {
            if(curr_pos == position)
            {
                newNode->next = aux->next;
                aux->next = newNode;
                return head;
            }
            aux = aux->next;
            curr_pos++;
        }
    }
    return NULL;
}