import java.util.Scanner;

public class bubble {
    public static void main(String[] args) 
    {
    
        int size;
        System.out.println("Enter the Size of an array");
        Scanner sc =new Scanner(System.in);
        size=sc.nextInt();
        int[] a =new int[size];
        
        System.out.println("Enter the "+size +"Element to Sort\n");

        for(int i =0;i<size;i++)
        {
            a[i]=sc.nextInt();
        }

        // int abc;
        // abc=sort(a,size);
        bub obj1=new bub();
        obj1.sort(a, size);

        
    }    
}

class bub{
    public  void sort(int[] a,int size)
    {
        int temp;
        for (int i = 0; i < size; i++) {
            for(int j=0;j<size-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }

        for(int i=0;i<size;i++)
        {
            System.out.println(a[i]);
            
        }
    } 
}