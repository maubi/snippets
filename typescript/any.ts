abstract class Person {
	name:	string
	age:	number

	constructor(n: string, a: number) {
		this.name	= n
		this.age	= a
	}

	abstract say(): void
}

class Waifu extends Person {
	say(): void {
		console.log('WAIFU', this.name, this.age)
	}
}

class Husbando extends Person{
	say(): void {
		console.log('HUSBANDO', this.name, this.age)
	}
}

let saki: Object = new Waifu('Saki', 21)
// saki.say()		error TS2339: Property 'say' does not exist on type 'Object'	

let person: any

person = new Waifu('Saya', 16)
person.say()

person = new Husbando('Fafnir', 200)
person.say()








