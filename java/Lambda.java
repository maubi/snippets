import java.util.*;

public class Lambda {
	public static void main(String[] args) {
		ArrayList<String> waifus = new ArrayList<String>();

		waifus.add("Ami");
		waifus.add("Kaya");
		waifus.add("Lain");

		waifus.forEach((waifu) -> {
			System.out.println(waifu);
		});
	}
}
