public class classicSingleton(){
	public static classicSingleton singletonInstance = null;
	protected classicSingleton(){
		// private constructor do not allow class to be extended . It's better u define ur class as final.
	}
	public static classicSingleton getInstance(){
		if(singletonInstance == null){
			singletonInstance = new classicSingleton();
		}
		return singletonInstance;
	}
}

// 111 % 3 = 0;
// 111 % 4 = 1;
// 111 % 5 = 1;