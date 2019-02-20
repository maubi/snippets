public class GenericMethodTest {
	public static <E> void printArray(E[] arg) {
		for(E elem: arg) {
			System.out.printf("%s\n", elem);
		}
	}

	public static void main(String[] args) {
		String[] waifus = {
			"Kawashima Ami",
			"Kurata Ami",
			"Kaname Madoka",
			"Sayaka Miki",
			"Violet Evergarden"
		};

/*
		int[] years = {1990, 1991, 1992};		
			reason: inference variable E has incompatible bounds
    		equality constraints: int
    		upper bounds: Object
*/

		Integer[] years = {1990, 1991, 1992};

		printArray(waifus);
		System.out.println();
		printArray(years);
	}
}
