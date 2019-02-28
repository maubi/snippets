public class GenericClassTest2 <E, T> {
	private E var1;
	private T var2;

	public GenericClassTest2() {
	}

	public GenericClassTest2(E var1, T var2) {
		this.var1 = var1;
		this.var2 = var2;
	}

	public E getVar1() { return this.var1; }
	public void setVar1(E var1) { this.var1 = var1; };

	public T getVar2() { return this.var2; }
	public void setVar2(T var2) { this.var2 = var2; }

	public static void main(String[] args) {
		System.out.println("MAIN");

		GenericClassTest2<String, Integer> obj1 = new GenericClassTest2<String, Integer>("Tomoko", 15);
		System.out.printf("%s is %d years old.\n", obj1.getVar1(), obj1.getVar2());
	}
}
