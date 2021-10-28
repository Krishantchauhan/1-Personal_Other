import java.util.Scanner;

 class c_input 	 {
    public static void main(String[] args) {
        
        // System.out.println("\n");
        
        Scanner a = new Scanner(System.in);

        double fnum , snum , sum ;

        System.out.println("Enter First Number ");
        fnum = a.nextDouble();

        System.out.println("enter Second number ");
        snum = a.nextDouble();

        sum =fnum+snum;

        System.out.println("The Sum is = "+sum);
        
    }

}