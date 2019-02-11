const waifu = 'Ayase Kaya';
console.log(waifu, ':', waifu.length);

const fullWaifu = waifu.concat('(16)');
console.log(fullWaifu, ':', fullWaifu.length);

console.log(waifu.toUpperCase());
console.log(fullWaifu.toLowerCase());

const patt1 = /^A/;
const patt2 = /1/;

console.log(patt1.test(waifu));
console.log(patt2.test(waifu));

console.log(patt1.test(fullWaifu));
console.log(patt2.test(fullWaifu));

let c;
c = waifu.charAt('2');
console.log(c);

c = fullWaifu.charAt('11');
console.log(c);

let n;
n = waifu.indexOf('K');
console.log(n);

n = fullWaifu.indexOf('1');
console.log(n);





