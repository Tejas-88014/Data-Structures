#include<iostream>
using namespace std;

class Stack{
 int a[30];
 int top;
	
 public: 
   Stack()
   {
    top=-1;
   }
 void Push(int);
 int Pop();
 void ClearStack();
 bool IsEmpty();
 void TopEl();
 void Size();
 void display();  
};

int main()
{
 Stack ob; 
 int ch,ele,b; char c;
 do{
  cout<<"MENU"<<endl;
  cout<<"1. Push element"<<endl;
  cout<<"2. Pop element"<<endl;
  cout<<"3. Find the top element"<<endl;
  cout<<"4. Size of stack"<<endl;
  cout<<"5. Clear stack"<<endl;
  cout<<"6. Display Stack"<<endl;
  cout<<"7. Exit"<<endl;
  cout<<"Enter choice(1-7)"<<endl;
  cin>>ch;
  switch(ch)
  {
   case 1: {
    cout<<"Enter the element you wish to push in stack: ";
    cin>>ele;
    ob.Push(ele);
    ob.display();    
    break;
   }
   case 2: {
    b=ob.Pop();
    if(b!=-1)
    cout<<"The element you popped: "<<b<<endl;
    ob.display();
    break;
   }
   case 3: {
    ob.TopEl();
    break;
   }
   case 4: {
    ob.Size();
    break;
   }
   case 5: {
    ob.ClearStack();
    break;
   }
   case 6: {
    ob.display();
    break;
   }
   case 7: {
    cout<<"Aborting!"<<endl;
    exit(1);
    break;
   }
   default: {
    cout<<"Invalid Choice"<<endl;
    break;
   }
  }
  
  cout<<"Do you wish to continue(Y/N)?"<<endl;
  cin>>c;
  
 }while(c=='y'||c=='Y');
	
 return 0;
}

bool Stack::IsEmpty()
{
 if(top==-1)
 return true;
    else return false;
}

void Stack::Push(int ele)
{
 //if(IsEmpty()==true)
 //cout<<"Stack is Empty"<<endl; 
	
    if(top==29)
   cout<<"Stack is full"<<endl; 
	
 else {
  top++;
  a[top]=ele;
 }

}

int Stack::Pop()
{ int ele;
 if(IsEmpty()==true)
 {
   cout<<"Stack is Empty!"<<endl;
   return -1; 
 }
 else 
 { ele=a[top];
 a[top]=0;
 top--;
 return ele;
 }
	
}

void Stack::TopEl()
{
 int ele;
 ele=a[top];
 cout<<"The Top Element of stack is: "<<ele<<endl;
}

void Stack::Size()
{ int ctr=0;
 if(IsEmpty()==true)
 cout<<"Stack is Empty"<<endl; 
 else{
  for(int i=0;i<=top;i++)
  {
     ctr++; 
  }
  cout<<"The size of stack is: "<<ctr<<endl;
 }
}

void Stack::ClearStack()
{
 while(top!=-1)
 {
  Pop();
 }
}

void Stack::display()
{
 for(int i=0;i<=top;i++)
 {  
    
  cout<<a[i]<<" ";
 }
 cout<<endl;
}
