import java.util.Scanner;
public class meth_with_parameters 	 {
    public static void main(String[] args) 
    {
    
        Scanner sc = new Scanner(System.in);

        a obj1 = new a();

        System.out.println("Enter a name here");
        String name = sc.nextLine();
        obj1.Simplemsg(name);
        
        
    
    }
}


class a {

    public void Simplemsg(String name) {
        System.out.println("Hello "+name);
        
    }
}