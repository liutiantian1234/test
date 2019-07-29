package test7_29;

import java.util.Scanner;

public class circle {
 private  double radius;

public circle() {
	
}
public circle(double radius) {
	this.radius=radius;
}
public  double getArea() {
	return Math.PI*radius*radius;
}
public double getErimeter() {
	return Math.PI*2*radius;
}
public void show() {
	double area=getArea();
	double perimeter=getErimeter();
	System.out.println("圆的半径:"+radius+" 圆的面积:"+area+" 圆的周长:"+perimeter);
}

public static  void main(String arg[]) {
	Scanner sc=new Scanner(System.in);
	System.out.println("请输入半径：");
	double r=sc.nextDouble();
	circle circle1=new circle(r);
	circle1.show();
}
}
