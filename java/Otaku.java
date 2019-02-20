public class Otaku extends Person {
	String anime;

	public Otaku(String f, String l, String a) {
		super(f, l);
		anime = a;
	}
	public void printStr() {
		super.printStr();
		System.out.println(anime);
	}
}

