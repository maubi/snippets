const waifus = [
	'Ami',
	'Kaya',
	'Madoka',
	'Satanichia',
	'Violet'
];

const waifusStr = waifus.join('-');
console.log(waifusStr);

function Person(name) {
	this.name = name;
}

Person.prototype.toString = function() {
	return this.name;
}

const husbandos = [
	new Person('Fafnir'),
	new Person('Ushio'),
	new Person('Madarame')
];

console.log(husbandos.join(' AND '));
