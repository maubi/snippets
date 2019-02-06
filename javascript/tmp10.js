// Constructor function
function Otaku(name, age, anime, manga) {
	this.name = name;
	this.age = age;
	this.anime = anime;
	this.manga = manga;
}

const madarame = new Otaku('Madarame Harunobu', 20, 'Rosario to Vampire', 'Nui!');
console.log(typeof madarame);
console.log(madarame.name);
console.log(madarame.age);
console.log(madarame.anime);
console.log(madarame.manga);

Otaku.foo = function() {
	console.log('Phew!');
}

console.log(Otaku);

Otaku.foo();
