public class Lambda2 {
	interface IGreeter {
		public void greet(String msg);
	}

	public static void main(String[] args) {
		IGreeter greet1 = msg -> System.out.println(msg);
		greet1.greet("Lain Iwakura");
	}
}
