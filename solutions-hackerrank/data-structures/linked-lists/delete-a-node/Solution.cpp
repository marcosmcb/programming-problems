/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    int i;
    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    newNode->next = NULL;
  
    
    if(position == 0)
    {
        newNode = head->next;
        head = newNode;
        return head;
    }
  
    struct Node *aux = head;
    struct Node *nodeBefore = (struct Node *) malloc(sizeof(struct Node));
    for(i=0; i <= position; i++)
    {
        if( i == position )
        {
            newNode = aux->next;
            aux = newNode;
            nodeBefore->next = aux;
            return head;
        }
        else
        {
            nodeBefore = aux;
        }
        aux = aux->next;
        
    }
    return NULL;
}