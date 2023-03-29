public class Employee extends Worker{

    private long empid;
    private String hireDate;
    private static int emp_no=1;

    public Employee(String name, String dob, String hireDate) {
        super(name, dob);
        this.empid = Employee.emp_no++;
        this.hireDate = hireDate;
    }


    @Override
    public String toString() {
        return "Employee{" +
                "empid=" + empid +
                ", hireDate='" + hireDate + '\'' +
                "} " + super.toString();
    }
}
