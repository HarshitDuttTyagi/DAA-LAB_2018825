import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n,i,ele,f=0;
		System.out.println("enter size of array");
		n=sc.nextInt();
		int a[]=new int[n];
		System.out.println("enter elements of array");
		for(i=0;i<n;i++)
		{
		    a[i]=sc.nextInt();
		}
		System.out.println("enter element you want to search");
		ele=sc.nextInt();
		for(i=0;i<n;i++)
		{
		    if(a[i]==ele)
		    {
		        f=1;
		        break;
		    }
		    
		}
		if(f>0)
		System.out.println("index of element in array is: "+i);
		else
		    System.out.println("element not found in the array");
		
		
		
	}
}