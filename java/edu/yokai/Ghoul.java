package edu.yokai;

public class Ghoul {
	private String name;

	public Ghoul(String n) {
		name = n;
	}

	public void bite() {
		System.out.println(name + " bites!");
	}
}
