

{

    NodeList *root1 ;
    NodeList *root2 ;



    if(root1==NULL)
    {

        return root2 ;

    }
    if(root2==NULL)
        return root1 ;

    NodeList *head=NULL;
    NodeList*tail=NULL;

    while(root1&&root2)
    {

        if(root1->val<=root2->val)
        {

            if(head==NULL)
            {

                head=root1;
                tail=root1 ;
            }
            else{
                tail->next=root1 ;
                tail=root1 ;
            }
            root1=root1->next ;
        }
        else{
                        if(head==NULL)
                        {

                            head=root2;
                            tail=root2 ;
                        }
                    else{
                            tail->next=root2 ;
                            tail=root2 ;
                    }
                    root2=root2->next ;
        }


    }

    if(root1)
    {

        tail->next=root1 ;
    }
    if(root2)
    {

        tail->next=root2 ;
    }

}
