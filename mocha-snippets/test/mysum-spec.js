var assert = require("assert");
//var { mysum } = require('../mysum');
var  mysum = require('../mysum').mysum;

describe('mysum', function() {
	var data;
	before(function() {
		data = [
			{ a: 5, b: 5},
			{ a: 3, b: 10},
			{ a: 1, b: 1}
		];
	});
	after(function() {
		data = [];
	});

	it('should return 10', function() {
		var a = data[0].a;
		var b = data[0].b;
		assert.equal(10, mysum(a, b));
	});
	it('should return 13', function() {
		var a = data[1].a;
		var b = data[1].b;
		assert.equal(13, mysum(a, b));
	});
	it('should return 1', function() {
		var a = data[2].a;
		var b = data[2].b;
		assert.equal(1, mysum(a, b));
	});
});
