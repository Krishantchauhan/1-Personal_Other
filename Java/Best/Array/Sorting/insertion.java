import java.util.Scanner;

public class insertion {
    public static void main(String[] args) 
    {
    
        Scanner sc =new Scanner(System.in);

        System.out.println("Enter the size of an Array\n");
        int size;
        size=sc.nextInt();

        int[] a=new int[10];

        System.out.println("Enter "+size +" Elements in an Array \n");
        for(int i=0;i<size;i++)
            a[i]=sc.nextInt();
        
        sort obj1 =new sort();

        obj1.ins(a, size);
    
    }
}

class sort{
    public void ins(int[] a,int size)
    {


        for(int i=1;i<size;i++)
        {
            int current=a[i];
            int j=i-1;

            while(j>=0 && a[j]>current)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=current;


        }

        for(int i=0;i<size;i++)
        {
            System.out.print("\t"+a[i]);
        }
    }
}
