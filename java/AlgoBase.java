public abstract class AlgoBase {
	public void algo() {
		step1();
		step2();
		step3();
	}
	
	public void step1() {
		System.out.println("STEP 1");
	}

	public abstract void step2();

	public void step3() {
		System.out.println("STEP 3");
	}

}
