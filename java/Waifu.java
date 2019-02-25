public class Waifu {
	private String name;
	private String anime;

	public Waifu(String name, String anime) {
		this.name = name;
		this.anime = anime;
	}

	public void speak() {
		System.out.println(this.name + ' ' + this.anime);
	}

	public void tsuntsun() {
		System.out.println("I hate you!");
	}

	public void deredere() {
		System.out.println("I love you!");
	}

	public void baka() {
		System.out.println("Baka!");
	}
}
