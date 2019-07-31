package test7_30;

import java.util.Scanner;

public class Cylinder extends circle {
	
	private double height;
	public Cylinder() {
		
	}
  public Cylinder(float radius,double height) {
	 super(radius);
	 this.radius=radius;
	  this.height=height;
  }
  public double getVolume() {
	  return getArea()*height;
  }
  public void showVolume() {
	  System.out.println(getVolume());
  }

public static void main(String arg[]) {
	Scanner sc=new Scanner(System.in);
	System.out.println("ÇëÊäÈëÔ²µÄ°ë¾¶£º");
	float radius=sc.nextFloat();
	System.out.println("Ô²ÖùµÄ¸ß£º");
	double height=sc.nextDouble();
	Cylinder cylinder=new Cylinder(radius,height);
	cylinder.show();
	cylinder.showVolume();
}
}