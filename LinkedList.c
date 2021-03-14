struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
    new_node->data  = new_data; 
    new_node->next = (*head_ref); 
    (*head_ref)    = new_node; 
} 
void deleteNode(struct Node **head_ref, int position) 
{ 
   if (*head_ref == NULL) 
      return;
   struct Node* temp = *head_ref; 
   if (position == 0)
    { 
        *head_ref = temp->next;   
        free(temp);              
        return; 
    } 
    for (int i=0; temp!=NULL && i<position-1; i++) 
         temp = temp->next;
    if (temp == NULL || temp->next == NULL) 
         return; 
    struct Node *next = temp->next->next; 
    free(temp->next);  
    temp->next = next; 
}
void printList(struct Node *node) 
{ 
    while (node != NULL) 
    { 
        printf(" %d ", node->data); 
        node = node->next; 
    } 
} 
