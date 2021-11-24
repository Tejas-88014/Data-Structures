import java.util.*;
public class Main
{
	public static void main(String[] args)
	{
		int i  ,  j =0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the no. of Elements");
		int n = sc.nextInt();
		int a [] = new int[n];
		for(i=0;i<n;i++)
		{
		    a[i]=sc.nextInt();
		}
		
		for(i=0;i<n;i++)
		{
		    for(j=0;j<n;j++)
		    {
		       if(j==i)
		    {
		        System.out.print(a[i]);
		    }
		    else
		    {
		    System.out.print("0");
		    }
		  }
		  System.out.println();
		    
		}
	
	}
}


