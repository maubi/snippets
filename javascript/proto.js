function Foo(x, y) {
	this.x = y;
	this.y = y;
}

Foo.prototype.z			= 10;
Foo.prototype.calculate	= function() {
	console.log(this.x * this.y);
};

const aki = new Foo(10, 20);
console.log('aki');
console.log(aki);
console.log();

console.log('aki.__proto__');
console.log(Object.getPrototypeOf(aki));
console.log();

console.log('Foo');
console.log(Foo);
console.log();

console.log('Foo.__proto__');
console.log(Object.getPrototypeOf(Foo));
console.log();

console.log('Foo.__proto__.__proto__');
console.log(Object.getPrototypeOf(Object.getPrototypeOf(Foo)));






