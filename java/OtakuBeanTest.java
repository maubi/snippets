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
	}
}
