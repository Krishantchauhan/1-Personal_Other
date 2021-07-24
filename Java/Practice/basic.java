import java.util.Scanner;

public class basic{
    public static void main(String[] args) 
    {
        int s;
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the size of an Array\n");
        s=sc.nextInt();
        
        // int[] array = new int[10];
        int[] a =new int[10];

        System.out.printf("Enter the %d of Element \n",s);
        

        for(int i=0;i<s;i++)
        {
            a[i]=sc.nextInt();
        }

        System.out.println("Output\n");
        
        
        for(int i=0;i<s;i++)
        {
            System.out.println(a[i]);
            
        }
    
    }
}