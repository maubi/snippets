public abstract class Shape {
	String color;
	int scale;

	public Shape(String c, int s) {
		color = c;
		scale = s;
	}

	public abstract void draw();
}
