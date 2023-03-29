public class main {
    public static void main(String[] args) {

        Employee krish = new Employee("Krish","20/08/2000","01/08/2019");
        System.out.println(krish);

        System.out.println("Age = " + krish.getAge());
        System.out.println("Pay = " + krish.collectPay());

        Salaried_emp Siya = new Salaried_emp("Siya","20/09/2003","01/09/2018",50000);
        System.out.println(Siya);
        System.out.println("Annual Sal $"+Siya.collectPay());
        Siya.retire();
        System.out.println("Joe's Pension check = $" + Siya.collectPay());

        Hourly_emp Krishant = new Hourly_emp("Mary", "05/05/1970",
                "03/03/2021", 15);
        System.out.println(Krishant);
        System.out.println("Mary's Paycheck = $" + Krishant.collectPay());
        System.out.println("Mary's Holiday Pay = $" + Krishant.getDoublePay());
    }
}
