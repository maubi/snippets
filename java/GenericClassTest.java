public class GenericClassTest <E> {
	private E var;

	public E getVar() {
		return this.var;
	}

	public void setVar(E var) {
		this.var = var;
	}

	public static void main(String[] args) {
		System.out.println("MAIN");

		GenericClassTest<String> obj1 = new GenericClassTest<String>();
		obj1.setVar("Tomoko is love. Tomoko is life.");
		System.out.println(obj1.getVar());
	}
}
