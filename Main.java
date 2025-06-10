// Define the Person class
class Person {
    // Attributes
    String name;
    int age;

    // Constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method to display details
    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}

// Main class
public class Main {
    public static void main(String[] args) {
        // Create objects of Person
        Person person1 = new Person("Ameen", 17);
        Person person2 = new Person("Sara", 20);

        // Display their details
        System.out.println("Person 1:");
        person1.displayDetails();

        System.out.println("\nPerson 2:");
        person2.displayDetails();
    }
}
