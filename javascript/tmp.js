const waifus = {
	main: 'Lain',
	sidekick: 'Ami',
	optional: 'Kaya'
};

const {optional, ...filteredWaifus} = waifus;

console.log(filteredWaifus);
