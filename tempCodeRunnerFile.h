
        node<t>*head=temp[i];
        while(head!=NULL)
        {
            insert(head->key,head->value);
            head=head->next;
        }
        delete temp[i];
    }