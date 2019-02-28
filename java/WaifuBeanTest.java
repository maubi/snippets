public class WaifuBeanTest {
	public static void main(String[] args) {
		WaifuBean waifu = new WaifuBean();

		waifu.setName("Kurata Ami");
		waifu.setFavourite(true);

		System.out.println("NAME: " + waifu.getName());
		if(waifu.isFavourite()) {
			System.out.println("She is a favourite of mine!");
		}
	}
}
