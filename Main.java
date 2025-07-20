interface Prey {
    void flee();
}

interface Predator {
    void hunt();
}

class Rabbit implements Prey {
    public void flee() {
        System.out.println("*Rabbit is running away*");
    }
}

class Fish implements Prey, Predator {
    public void flee() {
        System.out.println("*Fish swims away*");
    }

    public void hunt() {
        System.out.println("*Fish hunts*");
    }
}

class Hawk implements Predator {
    public void hunt() {
        System.out.println("*Hawk hunts*");
    }
}

public class Main {
    public static void main(String[] args) {
        Rabbit rabbit = new Rabbit();
        Hawk hawk = new Hawk();
        Fish fish = new Fish();

        rabbit.flee();
        hawk.hunt();

        System.out.println();

        fish.flee();
        fish.hunt();
    }
}
