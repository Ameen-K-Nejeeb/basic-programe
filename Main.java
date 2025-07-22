abstract class Shape {
    abstract double area();
}

class Circle extends Shape {
    double radious;

    Circle(double radious) {
        this.radious = radious;
    }

    public double area() {
        return 3.14 * radious * radious;
    }
}

class Triangle extends Shape {
    double base, height;

    Triangle(double base, double height) {
        this.base = base;
        this.height = height;
    }

    public double area() {
        return 0.5 * base * height;
    }
}

class Rectangle extends Shape {
    double length, breadth;

    Rectangle(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    public double area() {
        return length * breadth;
    }
}

class Main {
    public static void main(String[] args) {

        Circle circle = new Circle(3);
        Triangle triangle = new Triangle(5, 6);
        Rectangle rectangle = new Rectangle(7, 5);

        System.out.println("Area of Circle : " + circle.area());
        System.out.println("Area of Triangle : " + triangle.area());
        System.out.println("Area of Rectangle : " + rectangle.area());

    }
}
