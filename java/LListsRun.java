import java.util.*;

public class LListsRun {
	public static void main(String[] args) {
		LinkedList<String> waifus = new LinkedList<String>();

		waifus.add("Kawashima Ami");
		waifus.add("Kurata Ami");
		waifus.add("Violet Evergarden");
		waifus.add("Iwakura Lain");
		waifus.add("Ayase Kaya");
		waifus.add("BOGUS");

		waifus.removeLast();

		String waifu = waifus.get(4);
		System.out.println(waifus);
		System.out.println(waifu);
	}
}
