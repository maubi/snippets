const waifus = [
	'Ayase Kaya',
	'Kurata Ami',
	'Sayaka Miki',
	'Akashiya Moka'
];

let waifusLength = waifus.map(waifu => {
	return waifu.length;
});

waifusLength.forEach(value => {
	console.log(value);
});
