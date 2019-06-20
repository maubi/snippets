// legacy controller
var $scope = {};

function WaifuCtrl($scope) {
	$scope.waifus = [];		// use a local data structure instead?
	$scope.addWaifu = function(waifu) {
		$scope.waifus.push(waifu);
	};
	$scope.getWaifus = function() {
		return $scope.waifus;
	};
};

var ctrl1 = new WaifuCtrl($scope);
console.log(ctrl1);

$scope.addWaifu('Lain Iwakura');
console.log($scope);
$scope.addWaifu('Kurata Ami');
console.log($scope);

// controller AS syntax
var $scope2 = {};
function AnimeCtrl() {
	var anime = this;
	var catalog = ['Saekano', 'Squid Girl', 'Battle Programmer Shirase'];	// data structure local to the function constructor
	anime.addAnime = function(item) {
		catalog.push(item);
	};
	anime.getCatalog = function() {
		return catalog;	// closure around the local structure
	}
};

$scope2.anime = new AnimeCtrl();
$scope2.anime.addAnime('Dangaioh');
console.log($scope2.anime.getCatalog());

// service
function MangaService() {
	var mangaService = this;
	var catalog = [];
	mangaService.add = function(item) {
		catalog.push(item);
	};
	mangaService.del = function(index) {
		catalog.splice(index, 1);
	};
	mangaService.getAll = function() {
		return catalog;
	};
};

var $scope3 = {};
var mangaService = new MangaService();

function MangaCtrl(mangaService) {
	var manga = this;
	manga.addItem = function(item) {
		mangaService.add(item);
	};
	manga.delItem = function(index) {
		mangaService.del(index);
	}
	manga.catalog = mangaService.getAll();
};
$scope3.manga = new MangaCtrl(mangaService);
$scope3.manga.addItem('Orange Road');
$scope3.manga.addItem('Video Girl Ai');
$scope3.manga.delItem(0);
$scope3.manga.addItem('Kokou no Hitou');
console.log($scope3.manga);








