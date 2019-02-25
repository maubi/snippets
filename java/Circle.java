public class Circle extends Shape {
	public Circle(String c, int s) {
		super(c, s);
	}
	public void draw() {
		System.out.printf("%s circle (scale: %d)\n", color, scale);
	}
}
