public class VectorTest {
	public static void main(String[] args) {
		Vec2D p1 = new Vec2D(45.0, 10.0);
		System.out.printf("<%2.2f,%2.2f>\n", p1.getComponentX(), p1.getComponentY());

		System.out.println();

		Vec2D p2 = new Vec2D(90.0, 10.0);
		System.out.printf("<%2.2f,%2.2f>\n", p2.getComponentX(), p2.getComponentY());

		System.out.println();

		Vec2D p3 = new Vec2D(180.0, 1.0);
		System.out.printf("<%2.2f,%2.2f>\n", p3.getComponentX(), p3.getComponentY());
	}
}




