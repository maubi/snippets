package org.yokai.turtle;

public class Turtle {
	private Point2D		p;
	private Vec2D		w;
	private int			speed;
	private boolean		penDown;

	public Turtle() {}

	public Turtle(Point2D p, Vec2D w) {
		this.p			= p;
		this.w			= w;
		this.speed		= 1;
		this.penDown	= true;
	}

	public void setSpeed(int speed) throws Exception {
		if(speed < 0 || speed > 10) {
			throw new Exception("Wrong speed");
		}

		this.speed = speed;
	}

	public void forward(int d) {} 

	public void backward(int d) {}

	public void penup() { penDown = false; }

	public void pendown() { penDown = true; }

	public void left(double a) {}

	public void right(double a) {}

	public void home() {}

	private void draw() {}

	public void printStr() {
		System.out.printf("P = <%2d,%2d>\n", p.getX(), p.getY());
		System.out.printf("W = <%2.2f,%2.2f>\n", w.getDirection(), w.getMagnitude());
		if(penDown) {
			System.out.println("The pen is DOWN");
		} else {
			System.out.println("The pen is UP");
		}
		System.out.printf("speed = %2d\n", speed);
	}
}
