// WaifuBean.java

public class WaifuBean implements java.io.Serializable {
	private String name;
	private boolean favourite;

	public WaifuBean() { };

	public String getName() {
		return this.name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public boolean isFavourite() {
		return this.favourite;
	}

	public void setFavourite(boolean favourite) {
		this.favourite = favourite;
	}
}
