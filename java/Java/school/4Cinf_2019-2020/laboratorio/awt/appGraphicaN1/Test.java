import java.awt.*;

public class Test {
	public static void main(String[] args) {
		double cnt = 0;

		//set up frame
		Frame fr1 = new Frame("Titolo");
		fr1.setSize(800,600);
		fr1.setVisible(true);
		
		Disegno dis = new Disegno(new Punto(100,54), new Punto(50,165));
		fr1.add(dis);

		while (true) {
			cnt +=0.000001;
			if (cnt >= 1) {
				dis.repaint();
				cnt = 0;
			}
		}
	}
}