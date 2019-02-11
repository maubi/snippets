let tuple1: [string, number]

tuple1 = ['Ayase Kaya', 16]

tuple1.forEach(value => {
	console.log(value)
})

// tuple1 = [16, 'Ayase Kaya']			error TS2322

let fullName: string
let age: number

fullName	= tuple1[0]
age			= tuple1[1]

console.log(fullName,'is',age,'years old.');
