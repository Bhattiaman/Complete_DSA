#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node * reverse(Node* head)
{
    if(head==NULL||head->next==NULL)
    return head;
    Node* newnode=reverse(head->next);
    Node* temp=head->next;
    temp->next=head;
    head->next=NULL;
    return newnode;
}
//to add two linked list 
Node* addTwoLists(Node* first, Node* second) {
    Node*reverse1=reverse(first);
    Node*reverse2=reverse(second);
    int carry=0;
    Node*temp1=reverse1;
    Node*temp2=reverse2;
    //make a new linked which will be returned
    Node*ans=new Node(-1);
    Node*temp=ans;
    while(temp1!=NULL&&temp2!=NULL)
    {
       int num=temp1->data+temp2->data+carry;
       temp->next=new Node(num%10);
       carry=num/10;
       temp1=temp1->next;
       temp2=temp2->next;
       temp=temp->next;
    }
    while(temp1!=NULL)
    {
       int num=temp1->data+carry;
       temp->next=new Node(num%10);
       carry=num/10;
       temp1=temp1->next;
       temp=temp->next;         
      // temp2=temp2->next;
    }
     while(temp2!=NULL)
    {
       int num=temp2->data+carry;
       temp->next=new Node(num%10);
       carry=num/10;
       temp2=temp2->next;
       temp=temp->next;
      // temp2=temp2->next;
    }
    //agar carry bach jay to yeh case bhi solve karna haii
    if(carry!=0)
     temp->next=new Node(carry);
    ans=ans->next;
    reverse(reverse1);
    reverse(reverse2);
    return reverse(ans);
}

Node *multiplyLL(Node *head1, Node *head2)
{
    // Write your code here
	head1=reverse(head1);
	head2=reverse(head2);
	Node*temp1=head1;
	Node*temp2=head2;
	int carry=0;
	vector<Node*>ans;
	Node*zerohead=new Node(0);
	Node*zerotail= zerohead;
	while(temp2!=NULL)
	{
		Node*temphead=new Node(-1);
		Node*temp=temphead;
		while(temp1!=NULL)
		{
            int num=(temp1->data*temp2->data)+carry;
			temp->next=new Node(num%10);
			carry=num/10;
			temp=temp->next;
			temp1=temp1->next;
		}
		if(carry!=0)
		temp->next=new Node(carry);
		temphead=temphead->next;
		zerotail->next=temphead;
		ans.push_back(zerohead->next);
		temp2=temp2->next;
	}
	Node*sum=new Node(0);
	for(auto i=ans.begin();i!=ans.end();i++)
	{
		sum=addTwoLists(sum,*i);
	}
	sum=sum->next;
	return reverse(sum);
}
