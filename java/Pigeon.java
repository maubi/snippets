public class Pigeon extends Animal implements IAnimal {
	public Pigeon(String n, int a) {
		super(n, a);
	}
	public void eat() {
		System.out.println(name + " ate a cracker!");
	}

	public void travel() {
		System.out.println(name + " flew 1 mile!");
	}
}
