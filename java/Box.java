public class Box<T> {
	private T t;

	public void add(T t) {
		this.t = t;
	}

	public T get() {
		return t;
	}

	public static void main(String[] args) {
		Box<String> box1 = new Box<String>();

		box1.add("Kawashima Ami");
		System.out.printf("%s\n", box1.get());

		Box<Integer> box2 = new Box<Integer>();
		box2.add(1978);
		System.out.printf("%d\n", box2.get());
	}
}
