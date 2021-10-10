class QueueArray
{
int Que[];
int max;
int front;
int rear;
  QueueArray(int s)
  {
max=s;
Que = new int[max];
front=rear=-1;
}


void insert(int n)
{
if(rear==max-1) //full
{
  System.out.println("Queue is full");
}
  else
  {
    if(rear==-1)//first value
    {
      front=rear=0;
    }
    else
    {
      rear++;
      Que[rear]=n;
      
    }
  }
}//function ends
  
  int delete()
  {
    if(front==-1)
    {
      return(-999);
    }
    else
    {
      int n = Que[front];
      if(front==rear)//last element
      {
        front=rear=-1;
      }
      else
      {
        front++;
      }
      return n;
    }
  }//function ends 
  
  void display()
  {
    int i=0;
    for (i=front;i<=rear;i++)
    {
      System.out.print(Que[i]+ " ");
    }//loop ends
  }//function ends
  
  
  
  
  
  
  
  
  
  
  
  
  
  
