public class GenericClassTest <E> {
	private E var;

	public E getVar() {
		return this.var;
	}

	public void setVar(E var) {
		this.var = var;
	}

	public static void main(String[] args) {
		GenericClassTest<String> obj1 = new GenericClassTest<String>();
		obj1.setVar("Tomoko is love. Tomoko is life.");
		System.out.println("obj1.val = " + obj1.getVar());

		System.out.println();

		GenericClassTest<Integer> obj2 = new GenericClassTest<Integer>();
		obj2.setVar(1978);
		System.out.println("obj2.val = " + obj2.getVar());
	}
}
