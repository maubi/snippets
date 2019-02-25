import java.io.FileReader;
import java.io.IOException;

public class TryWithResourcesTest {
	public static void main(String[] args) {
		try(FileReader fr = new FileReader("./Circle.java")) {
			System.out.println("TRY!");
			throw new IOException();
		} catch(Exception e) {
			System.out.println(e);
		}

		// here resource is gone
	}
}
