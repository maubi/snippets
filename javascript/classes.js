class Person {
	constructor(name, age) {
		this.name = name;
		this.age = age;
	}

	speak() {
		console.log('Nya!');
	}
}

class Otaku extends Person {
	constructor(name, age, anime) {
		super(name, age);
		this.anime = anime;
	}

	get str() {
		return this.name + ' ' + this.age + ' ' + this.anime;
	}

	speak() {
		super.speak();
		console.log('Ohayo!');
	}
}

harunobu = new Otaku('Harunobu', 20, 'Genshiken');
console.log(harunobu.str);
harunobu.speak();








