import java.util.Scanner;

// package Best.Searching;

public class Binary {
    public static void main(String[] args) 
    {
    
        int[] a = new int[10];
        int size;
        int ele;
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of an element\n");
        size=sc.nextInt();

        System.out.printf("Enter the %d Elements \n",size);
        for(int i=0;i<size;i++)
        {
            a[i] =sc.nextInt();
        }

        System.out.println("Enter the element to Search in an array\n");
        ele=sc.nextInt();
    
        Search obj1 =new Search();
        obj1.sea(a, size, ele);
    }
}

class Search{
    public void sea(int[] a,int size,int ele)
    {
        int start=0;
        int end=size;

        while(start<=end)
        {
            int mid=(start+end)/2;
            if(a[mid]==ele)
            {
                System.out.println("The element is present at position "+(mid+1));
                break;
            }
            else if(a[mid]>ele)
                end=mid-1;
            else
                start=mid+1;
        }
        if(start>end)
        {
            System.out.println("Element Not in Array\n");
        }
        
    }

}
