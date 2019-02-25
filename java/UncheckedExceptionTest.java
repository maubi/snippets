public class UncheckedExceptionTest {
	public static void main(String[] args) {
		String[] waifus = {"Ami", "Lain", "Kaya"};
		try {
			System.out.println(waifus[0]);
			System.out.println(waifus[1]);
			System.out.println(waifus[2]);
			System.out.println(waifus[3]);		// out-of-bound
		} catch(Exception e) {
			System.out.println("EXCEPTION!");
		}
	}
}
