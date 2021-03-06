#include<iostream>
#include<cstddef>
using namespace std;
class node
{
public:
	int data;
	node *next;
    node*start=NULL;   //declaring the start pointer as NULL as it not pointing anywhere currently

  void create(int k)   //function begins for creation of linked list
  {
	node *ptr,*ptr1;
	
  for(int i=0;i<k;i++)
  {
	  ptr=new node;
	  cin>>ptr->data;
	  ptr->next=NULL;
	  if(start==NULL)
	   {start=ptr;}
	   else
	   {ptr1=start;
	   while (ptr1->next!=NULL)
	    {
		   ptr1=ptr1->next;
	   }
	   ptr1->next=ptr;
	   		   
	   } 
  }
}
 void display()            //function begins for display of linked list
 {
	 node *temp=start;
	 while(temp!=NULL)
	 {
		 cout<<temp->data<<" ";
		 temp=temp->next;
	 }
 }

 void sorting()
 {
	 node* ptr=start;
	 int temp;
	 while(ptr->next!=NULL)
	 {
		 node *cptr=ptr->next;
		 while(cptr!=NULL)
		 {
			 if(ptr->data > cptr->data)
			 {
				 temp=ptr->data;
				 ptr->data=cptr->data;
				 cptr->data=temp;
			 }
			 cptr=cptr->next;

		 }
		ptr=ptr->next; 
	 }
 }
 
   };
int main()
{
	node N;
	int n;
	
	
	cout<<"enter the number of elements for unsorted list";   // for creating the list
	cin>>n;
	N.create(n);    
	N.display();
    N.sorting();
	cout<<endl;
    N.display();
    
}