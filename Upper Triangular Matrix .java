import java.util.*;
public class Main
{
	public static void main(String[] args)
	{
		int i  ,  j =0;
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the no. of Elements - ");
		int n = sc.nextInt();
		int a [] = new int[n];
		for(i=0;i<n;i++)
		{
		    a[i]=sc.nextInt();
		}
		System.out.println("Enter the no. of rows - ");
		int r =sc.nextInt();
		
		
		int c =0;
		
		for(i=0;i<r;i++)
		{
	    for(j=0;j<r;j++)
	    {
	        if(i>j)
	        {
	            System.out.print("0" +" ");
	        }
	        else{
	            System.out.print (a[c]+" ");
	            c++;
	        }
	    }
	    System.out.println();
	    
	}

	}
}

