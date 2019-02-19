public class Cat extends Animal implements IAnimal {
	public Cat(String n, int a) {
		super(n, a);
	}
	public void eat() {
		System.out.println(name + "ate a salmon!");
	}

	public void travel() {
		System.out.println(name + "walked 1 mile!");
	}
}
