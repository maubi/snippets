public class FinalRun {
	public class Inner1 {
		public String var1;
		public String var2;
	}

	private static final int MAX = 10;
	private final Inner1 INNER1;

	public static void main(String[] args) {
		for(int i = 0; i < MAX ; i++) {
			System.out.println("Let's all be friends with Kuroki Tomoko!");
		}
		// MAX++;			error: cannot assign a value to final variable MAX

		INNER1 = new Inner1();
		INNER1.var1 = "Moka";
		INNER1.var2 = "Tomoko";
		INNER1 = new Inner1();
	}
}
