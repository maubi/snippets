class Otaku {
	constructor(name, favAnime, favManga) {
		this.name = name;
		this.favAnime = favAnime;
		this.favManga = favManga;
	}

	printStr() {
		console.log(this.name, this.favAnime, this.favManga);
	}

	get str() {
		let string = 'NAME: '+this.name+' ANIME: '+this.favAnime+' MANGA: '+this.favManga;
		return string;
	}

	static speak() {
		console.log('Ohayo!');
	}
}

const madarame = new Otaku('Madarame Harunobu', 'Release the Spyce', 'Nui!');

madarame.printStr();

const keys = Object.keys(madarame);
console.log(keys);

for(key in madarame) {
	console.log(key, madarame[key]);
}

console.log(madarame.str);

Otaku.speak();
