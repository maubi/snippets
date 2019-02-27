import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class RegEx2Run {
	public static void main(String[] args) {
		Pattern pat = Pattern.compile("(\\d+)");
		Matcher mat = pat.matcher("123-456-789");
		while(mat.find()) {
			System.out.println(mat.group());
		}
	}
}
