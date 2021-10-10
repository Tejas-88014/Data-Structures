class Circular
{
  int Que[];
  int max;
  int front;
  int rear;
  public Circular(int a)
  {
    max=a;
    Que = new int [max];
    front=rear=-1;
  }//constructor
  
  void insert(int n)
  {
    if((front ==0 && rear==max-1) || (rear = front-1))
    {
      System.out.println("Queue is full");
      
    }
    else
    {
      if(rear==-1)//first value
      {
        front =rear=0;
      }
      else if(rear=max-1)
      {
        rear=0;
      }
      else
      {
        rear++;
      }
      Que[rear]=n;
    }//if ends
  }//function ends
  
  
  int delete ()
  {
    if(front ==-1)//empty
    {
      return (-999);
    }
    else
    {
      int n= Que[front];
      if(front==rear)//last value
      {
        rear=front= -1;
      }
      else if(front==max-1)
      {
        front =0;
      }
      else
      {
        front++;
      }
      return n;
    }//if ends
  }//functions ends 
  
  void display()
  {
    int i=0;
    if(front<=rear)
    {
      for(i=front;i<=rear;i++)
      {
        System.out.print(Que[i] + " " );
      }
    }
    else //when rear is less than front 
    {
      for(i=front;i<max;i++)
      {
        System.out.print(Que[i] + " " );
      }
      for(i=0;i<=rear;i++)
      {
        System.out.print(Que[i] + " ");
      }
    }//if ends
  }//function ends
}//class ends

  
