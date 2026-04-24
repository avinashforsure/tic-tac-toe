class Vehicle {
    int wheels;
    int speed;
}

class Car extends Vehicle {
    int passengers;
}

class Truck extends Vehicle {
    int load;
}

public class Derive {
    public static void main(String[] args) {
        Car c = new Car();
        c.speed = 120;

        Truck t = new Truck();
        t.speed = 80;

        if (c.speed > t.speed)
            System.out.println("Car is faster");
        else
            System.out.println("Truck is faster");
    }
}