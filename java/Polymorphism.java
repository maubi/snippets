public class Polymorphism {
	public static void render(Shape s) {
		s.draw();
	}
	public static void main(String[] args) {
		Diamond diamond1 = new Diamond("red", 1);
		Circle circle1 = new Circle("yellow", 1);

		render(diamond1);
		render(circle1);
	}
}
