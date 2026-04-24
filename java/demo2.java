class Vehicle {
    private String ownerName;
    private int speed;
    private String color;
    private String regNumber;

    Vehicle(String ownerName, int speed, String color, String regNumber) {
        this.ownerName = ownerName;
        this.speed = speed;
        this.color = color;
        this.regNumber = regNumber;
    }

    public void showData() {
        System.out.println("Owner Name: " + ownerName);
        System.out.println("Speed: " + speed);
        System.out.println("Color: " + color);
        System.out.println("Registration Number: " + regNumber);
    }
}

class Car extends Vehicle {
    private String vehicleNumber;

    Car(String ownerName, int speed, String color, String regNumber, String vehicleNumber) {
        super(ownerName, speed, color, regNumber);
        this.vehicleNumber = vehicleNumber;
    }

    public void showCarData() {
        super.showData();
        System.out.println("Vehicle Number: " + vehicleNumber);
    }
}

class Bus extends Vehicle {
    private String manufacturer;

    Bus(String ownerName, int speed, String color, String regNumber, String manufacturer) {
        super(ownerName, speed, color, regNumber);
        this.manufacturer = manufacturer;
    }

    public void showBusData() {
        super.showData();
        System.out.println("Manufacturer: " + manufacturer);
    }
}

public class Main {
    public static void main(String[] args) {
        Car car1 = new Car("Avinash", 120, "Black", "JH01AB1234", "CAR789");
        System.out.println("- Car Details --");
        car1.showCarData();

        System.out.println();

        Bus bus1 = new Bus("Ravi Travels", 80, "White", "JH02CD5678", "Tata Motors");
        System.out.println("-- Bus Details --");
        bus1.showBusData();
    }
}
