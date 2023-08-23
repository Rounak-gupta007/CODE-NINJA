void addpoly(node*ptr1,node*ptr2,node*ptr3)
{
    int power,coeff;
    while((ptr1! = NULL)&&(ptr2!=NULL))
    {
        if(ptr1->power->ptr2->power)
        power = ptr1->power;
        coeff = ptr1->coeff;
        ptr1 = ptr1->coeff;
    }
    else if (ptr2->power>ptr1->power)
    {
        power = ptr2->power;
        coeff = ptr2->coeff;
        ptr = ptr2->next;
    }
    else{
        coeff = ptr1->coeff+ptr2->coeff;
        power = ptr1->power;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (coeff!=0)
        addnode (ptr3,coeff,power)clear
        
    
}