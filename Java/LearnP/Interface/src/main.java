public class main {
    public static void main(String[] args) {

        ITelephone myPhone;
        myPhone = new DeskPhone(701733);
        myPhone.powerOn();
        myPhone.callPhone(701733);
        myPhone.ans();

        myPhone = new mobPhone(6969);
        myPhone.powerOn();
        myPhone.callPhone(6969);
        myPhone.ans();
    }
}
