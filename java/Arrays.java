public class Arrays {
	private String[] waifus;

	public Arrays(String[] w) {
		waifus = w;
	}

	public String[] getWaifus() {
		return waifus;
	}

	public void printStr() {
		for(String waifu: waifus) {
			System.out.println(waifu);
		}
	}

	public static void printArray(String[] ar) {
		for(String elem: ar) {
			System.out.println(elem);
		}
	}

	public static void main(String[] args) {
		String[] myWaifus = {"Ami", "Saya", "Violet"};
		Arrays obj1 = new Arrays(myWaifus);
		obj1.printStr();
		
		String[] waifus = new String[3];
		String[] husbandos;
		String[] besties = {"Kurata Ami", "Deedlit", "Sakura Nene"};
		int[] years = {1986, 1990, 2000, 2007};

		waifus[0] = "Ayase Kaya";
		waifus[1] = "Iwakura Lain";
		waifus[2] = "Ahagon Umiko";

		for(int i = 0; i < waifus.length; i++) {
			System.out.println("WAIFU #"+i+": "+waifus[i]);
		}

		husbandos = new String[3];
		husbandos[0] = "Aotsuki Shigure";
		husbandos[1] = "Roll Kran";
		husbandos[2] = "Haruyuki";

		for(int i = 0; i < husbandos.length; i++) {
			System.out.println("HUSBANDO #"+i+": "+husbandos[i]);
		}

		for(int i = 0; i < besties.length; i++) {
			System.out.println("BESTIE #"+i+": "+besties[i]);
		}

		for(int year: years) {
			System.out.println(year);
		}

		printArray(new String[]{"Release the Spyce", "Hanebado!", "Harukana Receive"});

		// Arrays are stored as references!
		char[] letters = {'a', 'b', 'c'};
		char[] lettersCopy = letters;
		lettersCopy[0] = 'z';
		for(char letter: letters) {
			System.out.println(letter);
		}

		Arrays obj2 = new Arrays(new String[]{"Chiara", "Giada", "Rachele"});
		String[] tmp = obj2.getWaifus();
		tmp[0] = "C";
		tmp[1] = "G";
		tmp[2] = "R";
		for(String waifu: obj2.getWaifus()) {
			System.out.println(waifu);
		}
	}
}








