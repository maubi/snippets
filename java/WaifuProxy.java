public class WaifuProxy {
	private Waifu waifu;

	public WaifuProxy(String name, String anime) {
		waifu = new Waifu(name, anime);
	}

	public void tsuntsun() {
		waifu.tsuntsun();
	}

	public void deredere() throws Exception {
		throw new Exception();
	}
}

