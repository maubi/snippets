enum Tier {Bronze, Silver, Gold, Platinum}

class Waifu {
	t:		Tier
	name:	string
	age:	number

	constructor(n: string, a: number, t: Tier) {
		this.name	= n
		this.age	= a
		this.t		= t
	}

	say(): void {
		console.log(this.name,'is a',this.age,'years old waifu of',this.t,'tier')
	}
}

const saki = new Waifu('Kasukabe Saki', 21, Tier.Gold)
saki.say()
