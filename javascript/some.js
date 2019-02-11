const waifus = [
	{ name: 'Akashiya Moka',		age: 17 },
	{ name: 'Kurata Ami',			age: 18 },
	{ name: 'Ayase Kaya',			age: 16 },
	{ name: 'Violet Evergarden',	age: 20 }
];

waifus.forEach(waifu => {
	console.log(waifu.name,'('+waifu.age+')');
});

console.log();

function checkAdult(person) {
	return person.age >= 18;
}

function checkUnderage(person) {
	return person.age < 18;
}

function checkMature(person) {
	return person.age >= 30;
}

let adultAvailable = waifus.some(checkAdult);
if(adultAvailable) {
	console.log('One or more ADULT waifu available.');
} else {
	console.log('No legal ADULT available.');
}

let underageAvailable = waifus.some(checkUnderage);
if(underageAvailable) {
	console.log('One or more UNDERAGE waifu available.');
} else {
	console.log('No UNDERAGE waifu available.');
}

let matureAvailable = waifus.some(checkMature);
if(matureAvailable) {
	console.log('One or more MATURE waifu available.');
} else {
	console.log('No MATURE waifu available.');
}





