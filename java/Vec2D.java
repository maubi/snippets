package org.yokai.turtle;

public class Vec2D implements java.io.Serializable {
	private double direction;
	private double magnitude;

	public Vec2D(double direction, double magnitude) {
		this.direction = direction;
		this.magnitude = magnitude;
	}

	public double getDirection() {
		return direction;
	}

	public double getMagnitude() {
		return magnitude;
	}

	public void setDirection(double direction) {
		this.direction = direction;
	}

	public void setMagnitude(double magnitude) {
		this.magnitude = magnitude;
	}

	public double getComponentX() {
		double dir = direction % 360;
		if(dir == 90 || dir == 270) {
			return 0;
		} else {
			return magnitude * Math.cos(Math.toRadians(direction));
		}
	}

	public double getComponentY() {
		double dir = direction % 360;
		if(dir == 0 || dir == 180) {
			return 0;
		} else {
			return magnitude * Math.sin(Math.toRadians(direction));
		}
	}
}
