void reverse(Node* &head,Node* &temp,Node* &prev){

   // rukna kab hai
   if(temp == NULL){
      head=prev;
      return;
   }
   reverse(head,temp->next,temp);
   temp->next=prev;
}

Node* reverseLinkedList(Node *head){
   Node* temp =head;
   Node* prev = NULL;
   reverse(head,temp,prev);
   return head;
}