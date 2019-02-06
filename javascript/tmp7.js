class Otaku {
	constructor(name, favAnime, favManga) {
		this.name = name;
		this.favAnime = favAnime;
		this.favManga = favManga;
	}

	printStr() {
		console.log(this.name, this.favAnime, this.favManga);
	}
}

const madarame = new Otaku('Madarame Harunobu', 'Release the Spyce', 'Nui!');

madarame.printStr();

const keys = Object.keys(madarame);
console.log(keys);

for(key in madarame) {
	console.log(key, madarame[key]);
}
