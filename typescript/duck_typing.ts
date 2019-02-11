interface IPerson {
	firstName:	string
	lastName:	string
}

function fullName(p: IPerson): string {
	return p.firstName+' '+p.lastName
}

const waifu = {
	firstName: 'Kaya',
	lastName: 'Ayase'
}

const full = fullName(waifu)	// duck typing: arg does not implement IPerson but has the same structure
console.log('I have a waifu. Her name is:', full);
