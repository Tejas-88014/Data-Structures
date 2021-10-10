class Deque
{
  int Dque[];
  int max;
  int front;
  int rear;
  public Deque(int s)
  {
    max=s;
    Dque = new int[s];
    front=rear=0;
  }
  
  void insertRear(int n)
  {
    if(rear == max)
    {
      System.out.println("Full From Rear End");
    }
    else
    {
      Dque[rear]=n;
      rear++
     }
  }//function ends
  
  void insertFront(int n)
  {
    if(front==0)
    {
      System.out.println("Full From Front End");
    }
    else
    {
      front--;
      Dque[front]=n;
    }
  }//function ends
  
  int deleteFront()
  {
    if(front==rear)
    {
      return(-999);
    }
    else
    {
      int n =Dque[front];
      front++;
      return (n);
    }
  }//function ends
  
  int deleteRear()
  {
    if(front ==rear)
    {
      return(-999);
    }
    else
    {
      rear--;
      int n = Dque[rear];
      return n;
    }
  }//function ends
  
  void display()
  {
    int i=0;
    for(i=front;i<rear;i++)
    {
      System.out.print(Dque[i]+ " " );
    }//loop ends
  }//function ends
  
}//class ends

    
