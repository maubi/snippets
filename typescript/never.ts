function error(message: string): never {
	throw new Error(message)
}

function ohayo(n: number): void {
	if(n % 2 == 0) {
		console.log(n)
	} else {
		error(n+' is not divisible by 2')
	}
}

ohayo(4)

try {
	ohayo(5)
//} catch(e: Error) {			error TS1196: Catch clause variable cannot have a type annotation.
} catch(e) {
	console.log(e.message)
}
