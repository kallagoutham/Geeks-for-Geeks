int getNthFromLast(Node *head, int n)
{
      struct Node *thead=head;
      int l=0;
      if(head==nullptr){
          return -1;
      }
      while(thead!=nullptr){
          l++;
          thead=thead->next;
      }
      int k=l-n;
      if(k<0){
          return -1;
      }
      while(k--){
          head=head->next;
      }
      return head->data;
}
//Here we are finding the length of the linked list first and now we are iterating over it k=(l-n) times because nth node from end is same as kth node from begining
