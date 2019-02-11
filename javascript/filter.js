const waifus = [
	{ name: 'Kaya',		age: 16 },
	{ name: 'Moka',		age: 15 },
	{ name: 'Ami',		age: 20 },
	{ name: 'Violet',	age: 18 }
];

let legalWaifus = waifus.filter(waifu => {
	return waifu.age >= 18;
});

legalWaifus.forEach(waifu => {
	console.log(waifu.name,'is a legal waifu');
});
