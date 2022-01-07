int main()
{
    node *head, *tail;  // head points to the address of first node , tail points to the address of last node
    head = tail = NULL; // initally head and tail doesn't points to valid address thats why they are assigned to NULL

    // cout<<"inserting at front : "<<endl;
    // insertatfront(head,tail,1);
    // insertatfront(head,tail,2);
    // insertatfront(head,tail,3);
    // insertatfront(head,tail,4);
    // insertatfront(head,tail,5);
    // printall(head);
    // cout<<endl;
    cout << "inserting at back : " << endl;
    insertatback(head, tail, 1);
    insertatback(head, tail, 2);
    insertatback(head, tail, 3);
    insertatback(head, tail, 4);
    insertatback(head, tail, 5);
    printall(head);

    node *ans = mid(head);
    if (ans == NULL)
    {
        cout << "Mid not exit" << endl;
    }
    else
    {
        cout << "Mid Found is : " << ans->data << endl;
    }

    // reverseLL(head,tail);
    // printall(head);
    // bubblesort(head);
    // printall(head);
    
    cout<<"inserting at middle :"<<endl;
    insertatmiddle(head,tail,2,6);

    // deleteatfront(head,tail);
    // deleteatend(head,tail);

    // deleteatmid(head,tail,2);
    // searchll(head, 7);
    // searchLLrecursion(head, 7);
    // reverseLL(head,tail);
    // printall(head);
    return 0;
}