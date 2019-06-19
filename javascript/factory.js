function Cat() {
	this.verse = 'nya';
}

function Dog() {
	this.verse = 'bau';
}

function Eagle() {
	this.verse = 'squeak';
}

function AnimalFactory() {
	this.getAnimal = function(species, secret) {
		switch(species) {
			case 'dog':
				return new Dog();
				break;
			case 'cat':
				return new Cat();
				break;
			case 'eagle':
				if(secret != 'lain') {
					return {};
				}
				return new Eagle();
			default:
				return {};
				break;
		}
	}
}

var factory	= new AnimalFactory();
var pallino	= factory.getAnimal('dog');
var kyoko	= factory.getAnimal('cat');
var fafnir	= factory.getAnimal('eagle', 'lain');
var kanna	= factory.getAnimal('eagle');
var nobody	= factory.getAnimal('tiger');

console.log('pallino: '	+ pallino.verse);
console.log('kyoko: '	+ kyoko.verse);
console.log('nobody: '	+ nobody.verse);
console.log('fafnir: '	+ fafnir.verse);
console.log('kanna: '	+ kanna.verse);
