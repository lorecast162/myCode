public class Test {
    public static void main(String args[]) {
	Lampadina lamp = new Lampadina(49, true);
	System.out.println(lamp.toString());
	for (int x = 0; x < 25; x++) {
	    System.out.println(lamp.toString());
	    for (float w=0; w<2;w+=0.0000001){}
	}
    }
}
