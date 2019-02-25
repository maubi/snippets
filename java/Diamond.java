public class Diamond extends Shape {
	public Diamond(String c, int s) {
		super(c, s);
	}
	public void draw() {
		System.out.printf("%s diamond (scale %d)\n", color, scale);
	}
}
