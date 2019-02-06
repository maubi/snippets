const waifu = {
	firstName: 'Kaya',
	lastName: 'Ayase',
	age: 16
};

const waifus = [
	'Lain',
	'Kaya',
	'Miki'
];

console.log('for..in..waifu');
for(key in waifu) {
	console.log(key);
}

console.log('for..in..waifus');
for(key in waifus) {
	console.log(key);
}

/*	WRONG: not iterable
for(value of waifu) {
	console.log(value);
}
*/

console.log('for..of..waifus');
for(value of waifus) {
	console.log(value);
}
