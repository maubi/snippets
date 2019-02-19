public class EncapRun {
	public static void main(String [] args) {
		Encap favs1 = new Encap("Genshiken", "Kokou no Hitou", "Youjo Senki");
		System.out.println(favs1.getAnime() + ' ' + favs1.getManga() + ' ' + favs1.getNovel());

		Encap favs2 = new Encap();
		favs2.setAnime("Release the Spyce");
		favs2.setManga("Rosario to Vampire");
		favs2.setNovel("Kiki's Delivery Service");
		System.out.println(favs2.getAnime() + ' ' + favs2.getManga() + ' ' + favs2.getNovel());
	}
}
