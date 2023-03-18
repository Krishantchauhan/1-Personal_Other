public class Main {
    public static void main(String[] args) {
        
        Car car = new Car();
        // can't access the brand in car Cause of private
        // car.brand="BMW";

        //resolve by setter method
        car.setbrand("BMW");
        car.setcolor("Blue");

        // System.out.println("Brand " + car.brand);
        // resolved vy getter method
        System.out.println(" " + car.getBrand());

        car.describeCar();
        
        
    }

}
