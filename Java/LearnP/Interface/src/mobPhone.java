public class mobPhone implements ITelephone{
    private int myNumber;
    private boolean isRinging;
    private boolean isOn = false;

    public mobPhone(int myNumber) {
        this.myNumber = myNumber;
    }

    @Override
    public void powerOn() {
        isOn = true;
        System.out.println("MObile phone ON");
    }

    @Override
    public void dial(int phoneNumber) {
        if(isOn)
            System.out.println("Now ringing "+ phoneNumber);
        else
            System.out.println("Phone is Switch off");
    }

    @Override
    public void ans() {
        if(isRinging){
            System.out.println("Answering the MOb phone");
            isRinging=false;
        }
    }

    @Override
    public boolean callPhone(int phoneNumber) {
        if(phoneNumber == myNumber && isOn){
            isRinging = true;
            System.out.println("Mobile ring");
        }else {
            isRinging = false;
            System.out.println("Mobile phone is OFF");
        }
        return isRinging;
    }

    @Override
    public boolean isRinging() {
        return isRinging;
    }
}
