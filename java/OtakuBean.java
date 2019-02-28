// OtakuBean.java

public class OtakuBean implements java.io.Serializable {
	private String name;
	private String favAnime;
	private String favManga;

	public OtakuBean() { }
	public String getName() { return this.name; }
	public String getFavAnime() { return this.favAnime; };
	public String getFavManga() { return this.favManga; };
	public void setName(String name) { this.name = name; }
	public void setFavAnime(String favAnime) { this.favAnime = favAnime; }
	public void setFavManga(String favManga) { this.favManga = favManga; }
}
