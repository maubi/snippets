const waifus = [
	'Lain',
	'Ami',
	'Kaya',
	'Violet',
	'Miki'
];

console.log('-------');
console.log('WAIFUS');
console.log('-------');
console.log(waifus);

var filteredWaifus = waifus.filter(waifu => {
	return waifu !== 'Lain';
});

console.log('---------');
console.log('FILTERED');
console.log('---------');
console.log(filteredWaifus);
