function multiply(factor) {
	return number => factor * number;
}

var num_double = multiply(2);
var num_triple = multiply(3);

console.log(num_double(1));
console.log(num_triple(1));
