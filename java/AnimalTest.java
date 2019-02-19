public class AnimalTest {
	public static void main(String [] args) {
		Cat kyoko = new Cat("Kyoko", 16);
		Pigeon hato = new Pigeon("Hatou", 15);

		kyoko.eat();
		kyoko.travel();

		hato.eat();
		hato.travel();
	}
}
