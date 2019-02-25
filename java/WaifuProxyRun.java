public class WaifuProxyRun {
	public static void main(String[] args) {
		WaifuProxy waifu = new WaifuProxy("Takaya Noriko", "Gunbuster!");

		waifu.tsuntsun();

		try {
			waifu.deredere();
		} catch(Exception e) {
			System.out.println("B-Baka!");
		}
	}
}
