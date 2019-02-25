import java.io.FileReader;
import java.io.FileNotFoundException;

public class CheckedExceptionTest {
	public static void main(String[] args) {
		try {
			FileReader fr = new FileReader("i_do_not_exist.txt");
		} catch(FileNotFoundException e) {
			System.out.println("CANNOT READ: FILE DOES NOT EXIST!");
		}
	}
} 
