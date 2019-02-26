import java.util.*;

public class HMapsRun {
	public static void main(String[] args) {
		HashMap<String, String> waifus = new HashMap<String, String>();

		waifus.put("redhead", "Hattori Chise");
		waifus.put("brunette", "Ayukawa Madoka");
		waifus.put("blonde", "Yagami Kou");

		System.out.println("redhead: "	+ waifus.get("redhead"));
		System.out.println("brunette: "	+ waifus.get("brunette"));
		System.out.println("blonde: "	+ waifus.get("blonde"));
	}
}
