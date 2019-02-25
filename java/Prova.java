public class Prova {
	private String name;
	private String anime;

	public Prova() {
	}

	public Prova(String name, String anime) {
		this.name	= name;
		this.anime	= anime;
	}

	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getAnime() {
		return this.anime;
	}

	public void setAnime(String anime) {
		this.anime = anime;
	}

	public void speak() {
		System.out.printf("Hi! My name is %s, and I am the MC of the anime '%s'\n", this.name, this.anime);
	}

	public static void main(String[] args) {
		Prova noriko = new Prova("Takaya Noriko", "Gunbuster!");
		System.out.println(noriko.getName());
		System.out.println(noriko.getAnime());
		noriko.speak();

		Prova violet = new Prova();
		violet.setName("Violet Evergarden");
		violet.setAnime("Violet Evergarden");
		violet.speak();
	}
}






