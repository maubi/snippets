package vehicles;

public class Car implements IVehicle {
	private String modelName;
	private int doors;
	private String owner;

	public Car(String m, int d, String o) {
		modelName = m;
		doors = d;
		owner = o;
	}

	public void drive() {
		System.out.println("Car is driving.");
	}

	public void start() {
		System.out.println("Car has started.");
	}

	public void stop() {
		System.out.println("Car has stopped.");
	}

	public static void main(String [] args) {
		Car leoncino = new Car("Peugeot 207", 3, "Mauro Bisiani");
		leoncino.start();
		leoncino.drive();
		leoncino.stop();
	}
}




