const lain = {
	name: 'Lain',
	surname: 'Iwakura',
	pwd: 'navi'
};

console.log(lain);

const keys = Object.keys(lain);
console.log(keys);

let publicLain = {};
keys.forEach(key => {
	if(key !== 'pwd') {
		publicLain[key] = lain[key];
	}
});
console.log(publicLain);

