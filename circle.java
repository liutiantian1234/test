package test7_30;

import java.util.Scanner;

public class circle {
	public  float radius;
	public circle() {
		
	}
public circle(float radius) {
		this.radius=radius;
	}

	public double getArea() {
		return radius*radius* Math.PI;
	}
	public double getPerimeter() {
		return 2*radius*Math.PI;
	}
	public  void show() {
		System.out.println("半径:"+radius+" 面积:"+getArea()+" 周长:"+getPerimeter());
		
	
	}

}
