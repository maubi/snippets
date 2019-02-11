class Otaku {
	firstName: string
	lastName: string
	favAnime: string
	favManga: string

	constructor(f: string, l: string, a: string, m: string) {
		this.firstName = f
		this.lastName = l
		this.favAnime = a
		this.favManga = m
	}

	public printStr(): void {
		console.log(this.firstName, this.lastName, this.favAnime, this.favManga)
	}
}

interface Person {
	firstName: string
	lastName: string
}

function greeter(p: Person): string {
	return p.firstName + ' ' + p.lastName
}

const madarame = new Otaku('Harunobu', 'Madarame', 'Rosario to Vampire', 'Nui!');
madarame.printStr();

console.log(greeter(madarame));


