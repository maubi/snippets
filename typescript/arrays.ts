const waifus: string[] = [
	'Ayase Kaya',
	'Sayaka Miki',
	'Kurata Ami'
]

waifus.forEach(waifu => {
	console.log(waifu);
})

//const anime: string[]					error TS1155: 'const' declarations must be initialized.
const anime: string[] = []

anime.push('Rosario to Vampire')
anime.push('Youjo Senki')
anime.push('Gabriel Dropout')

anime.forEach(title => {
	console.log(title);
})

let manga: string[] = ['Nui!', 'Touch', 'Rosario to Vampire']

manga = [
	'Rough',
	'Kokou no Hitou',
	'Rin'
]

manga.forEach(title => {
	console.log(title);
})













