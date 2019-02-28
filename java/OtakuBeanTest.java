// OtakuBeanTest.java

public class OtakuBeanTest {
	public static void main(String[] args) {
		OtakuBean madarame = new OtakuBean();
		madarame.setName("Madarame Harunobu");
		madarame.setFavAnime("Release the Spyce");
		madarame.setFavManga("Nui!");

		System.out.println(madarame.getName());
		System.out.println(madarame.getFavAnime());
		System.out.println(madarame.getFavManga());

		OtakuBean sasahara = new OtakuBean();
		sasahara.setName("Sasahara Kenji");
		sasahara.setFavAnime("Kujibiki Unbalance");
		sasahara.setFavManga("Rin");

		System.out.println(sasahara.getName());
		System.out.println(sasahara.getFavAnime());
		System.out.println(sasahara.getFavManga());
	}
}
