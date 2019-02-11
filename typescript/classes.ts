interface IPerson {
	firstName:	string
	lastName:	string
	say():		void
}

//class Person implements IPerson{				implements not required (duck typing)
class Person {
	firstName: string
	lastName: string

	constructor(fn: string, ln: string) {
		this.firstName	= fn
		this.lastName	= ln
	}

	say() {
		console.log('Ohayo!')
	}
}

class Otaku extends Person {
	favAnime: string
	favManga: string

	constructor(fn: string, ln: string, fa: string, fm: string) {
		super(fn, ln)					// invoke parent constructor
		this.favAnime	= fa
		this.favManga	= fm
	}

	say() {								// overrides parent method
		console.log('Konbanwa!')
	}
}

function greeter(p: IPerson) {
	p.say()
}

let saki			= new Person('Saki', 'Kasukabe')
let harunobu		= new Otaku('Harunobu', 'Madarame', 'Kujibiki Unbalance', 'Kujibiki Unbalance')

greeter(saki)
greeter(harunobu)


