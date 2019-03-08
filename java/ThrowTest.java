public class ThrowTest {
	//public void foo(int val) {	error: unreported exception Exception; must be caught or declared to be thrown	
	public void foo(int val) throws Exception {
		if(val < 0) {
			throw new Exception("Not a valid positive integer.");
		} else {
			System.out.println(2 * val);
		}
	}
	public static void main(String[] args) {
		ThrowTest app = new ThrowTest();
		try {
			app.foo(-1);
		} catch(Exception e) {
			System.out.println(e);
		}
	}
}
