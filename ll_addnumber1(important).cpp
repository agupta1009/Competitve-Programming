
Node* NextLargeNumber(Node *head) {
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input is handled automatically.
     */
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        head->data+=1;
         if(head->data==10)
        {
            Node * temp=new Node(1);
        head->data=0;
        temp->next=head;
        head=temp;
        }
        return head;
    }
    Node * output=NextLargeNumber(head->next);
            head->next=output;
        return head;
}