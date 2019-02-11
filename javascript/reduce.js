const waifus = [
	'Akashiya Moka',
	'Sayaka Miki',
	'Kurata Ami',
	'Ayukawa Madoka',
	'Takanashi Rikka'
];

waifus.forEach(waifu => {
	console.log(waifu.length);
});

function calc (total, waifu) {
	return total + waifu.length;
}

const count = waifus.reduce(calc, 0);
console.log('Waifu list has',count,'characters in total.');

const besties = [
	{ name: 'Moka', age: 15 },
	{ name: 'Kaya', age: 16 },
	{ name: 'Ami',  age: 18 }
];

function calcTotalAge(total, person) {
	return total + person.age;
}

const totalAge = besties.reduce(calcTotalAge, 0);
console.log('Best girls total age is', totalAge);
