public class Salaried_emp extends Employee{

    double anual_sal;
    boolean isRetired;

    public Salaried_emp(String name, String dob, String hireDate, double anual_sal) {
        super(name, dob, hireDate);
        this.anual_sal = anual_sal;
    }

    public double collectPay(){
        double paycheck = anual_sal / 26;
        double adjustedPay = (isRetired) ? 0.9 * paycheck : paycheck;

        return (int) adjustedPay;
    }

    public void retire(){
        terminate("09/02/2018");
        isRetired = true;
    }


}
