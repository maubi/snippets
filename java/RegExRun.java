import java.util.regex.Pattern;
import java.util.regex.Matcher;

public class RegExRun {
	public static void main(String[] args) {
		String waifus = "Kaya;Ami;Ami;Lain";
		String pattern = "Ami";
		String repString = "Chitose";
		Integer count = 0;

		Pattern p = Pattern.compile(pattern);
		Matcher m = p.matcher(waifus);
		while(m.find()) {
			count++;
			System.out.printf("MATCH %d\n", count);
			System.out.printf("START: %d\n", m.start());
			System.out.printf("END:   %d\n", m.end());
			System.out.println();
		}
		
		waifus = m.replaceAll(repString);
		System.out.println("REPLACED STRING: "+waifus);
	}
}
