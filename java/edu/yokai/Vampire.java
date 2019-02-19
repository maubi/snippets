package edu.yokai;

public class Vampire {
	private String name;

	public Vampire(String n) {
		name = n;
	}

	public void kick() {
		System.out.println(name + " kicks!");
	}
}
