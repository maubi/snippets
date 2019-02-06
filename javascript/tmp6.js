const waifus = [
	'Kurata Ami',
	'Iwakura Lain',
	'Violet Evergarden',
	'Ayase Kaya',
	'Sayaka Miki'
];

waifus.forEach((waifu, index) => {
	console.log('WAIFU #'+index, waifu);
});

const waifus2 = [
	{name: 'Lain', age: 13},
	{name: 'Miki', age: 15},
	{name: 'Kaya', age: 16},
	{name: 'Violet', age: 17}
];

let newData = waifus2.filter(function(waifu, index) {
	return waifu.age >= 16;
});
console.log(newData);

const waifu = {
	firstName: 'Kaya',
	lastName: 'Ayase',
	secret: 'I love plushies'
};

const keys = Object.keys(waifu);
keys.forEach(key => {
	console.log(waifu[key]);
});

const filteredKeys = keys.filter(key => {
	return key !== 'secret';
});

filteredKeys.forEach((key, index) => {
	console.log('KEY:', key, ' VALUE:',waifu[key]);
})












