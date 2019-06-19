var waifu = 'My eternal waifu is Iwakura Lain';
console.log(waifu);

console.log(waifu.search(/Iwakur.\sLain/));

var waifu2 = waifu.replace(/\w+\sLain/, 'Nishizumi Maho');
console.log(waifu2);

var char20 = waifu.charAt(20);
console.log(char20);

var charCode20 = waifu.charCodeAt(20);
console.log(charCode20);

var shiina = ' Murakami Shiina ';
console.log(shiina);

var shiina = shiina.trim();
console.log(shiina);
