import java.io.*;

public class ProcessTest {
	public static void main(String[] args) {
		Runtime rt = Runtime.getRuntime();
		try{
			Process p = rt.exec("ls");
			BufferedReader input = new BufferedReader(new InputStreamReader(p.getInputStream()));
			String line = null;
			while((line = input.readLine()) != null) {
				System.out.println(line);
			}
		} catch(Exception e) {
			System.out.println("ERROR");
		}
	}
}
