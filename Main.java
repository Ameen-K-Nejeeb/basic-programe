abstract class Vehicle {
    abstract void go();
}

class Car extends Vehicle {
    void go() {
        System.out.println("Driving the Car");
    }
}

class Bike extends Vehicle {
    void go() {
        System.out.println("Riding the Car");
    }
}

class Boat extends Vehicle {
    void go() {
        System.out.println("Driving the boat");
    }
}

class Main {
    public static void main(String[] args) {

        Car car = new Car();
        Bike bike = new Bike();
        Boat boat = new Boat();

        Vehicle[] vehicles = { car, bike, boat };

        for (Vehicle vehicle : vehicles) {
            vehicle.go();
        }

    }
}
