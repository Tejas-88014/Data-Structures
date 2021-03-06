#include<iostream>

using namespace std;

class node{
	public:
		int info;
		node*next;
};

class SLL{
	node*head;
	node*tail;
	node*temp;
	
public:
	SLL()
	{
		head=temp=tail=NULL;
	}
	
	void AddToHead();
	void AddToTail();
	void DeleteFromHead();
	void DeleteFromTail();
	
	void Display();
};

int main()
{   
int ch, data; SLL ob1,ob2; char c;
     
    
	do{ 
		cout<<"MENU"<<endl;
		cout<<"1. Add a node to head"<<endl;
		cout<<"2. Add a node to tail"<<endl;
		cout<<"3. Delete a node from head"<<endl;
		cout<<"4. Delete a node from tail"<<endl;
		cout<<"5. Display node"<<endl;
		cout<<"ENTER CHOICE :";
		cin>>ch;
		
		switch(ch)
		{ 
		  case 1: { ob1.AddToHead();
		            ob1.Display();
		        	break;
		          }
		  case 2: { ob1.AddToTail();
		            ob1.Display();
		        	break;
		          }
		 case 3: { ob1.DeleteFromHead();
		            ob1.Display();
		        	break;
		          }
	      case 4: { ob1.DeleteFromTail();
		            ob1.Display();
		        	break;
		          }
		  default: {cout<<"INVALID CHOICE!"<<endl;
		           break;
		          }            		  
				  
			}	
			cout<<endl<<endl;
			cout<<"DO YOU WISH TO CONTINUE?(Y/N)"<<endl;
			cin>>c;
		}while(c=='y'||c=='Y');
		
	}
	
void SLL::AddToHead()
 {  int data;
 	cout<<"Enter data: ";
 	cin>>data;
 	cout<<endl;
 	
 	temp=new node;
 	temp->info=data;
 	temp->next=NULL;
 	
 	if(head==NULL)
 	{
 	head=temp;
 	tail=temp;
    }
     
    else {
    	
    	temp->next=head;
    	head=temp; 
	} 
 }

void SLL::Display(){
	temp=head;
	while(temp!=NULL)
	{   cout<<temp->info;
	    if(temp->next!=NULL)
	    cout<<" --> ";
		temp=temp->next;
	}
}

void SLL::AddToTail()
{ int data;
 	cout<<"Enter data: ";
 	cin>>data;
 	cout<<endl;
 	
 	temp=new node;
 	temp->info=data;
 	temp->next=NULL;
 	
 	if(tail==NULL)
 	{
 		head=temp;
 		tail=temp;
    }
    else{
    	tail->next=temp;
    	tail=temp;
	} 	
}

void SLL::DeleteFromHead()
{
	temp=head;
	head=head->next;
	temp->next=NULL;
	delete temp;	
}

void SLL::DeleteFromTail()
{   if(head->next==NULL)
   {
	 delete head;
   }
		temp=head;
	while(temp->next->next!=NULL)
	{
		temp=temp->next;
	}
	delete (temp->next);
	temp->next=NULL;
	tail=temp;
}
