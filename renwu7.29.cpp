#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;
double p;
double circle(double x);
double trigle(int a, int b, int c);
double integrate(double n, double m);
double circle(double x){
	return   x * x *PI;
}
double integrate(double n, double m){
	return n*m;
}
double trigle(int a, int b, int c){
	if (((a + b) > c && ((a - b) < 0 ? -(a - b) : (a - b) < c)) || ((a + c) > b && ((a - c) < 0 ? -(a - c) : (a - c) < b)) || ((b + c) > a && ((b - c) < 0 ? (c - b) : (b - c) < a))){
		p = (a + b + c) / 2;
		return sqrt(p*(p-a)*(p-b)*(p-c));
	}
	else
		cout << "不可以生成三角形" << endl;
}
int main(){
	cout << "请输入以下数字代表计算不同的图形的面积" << endl;
	cout << "1：三角形  2;圆  3：长方形" << endl;
	int i,e,f,g;
	double j, k,r;
	do{
		cin >> i;
		switch (i){
		case 1:
			cout << "三角形的三个边" << endl;
			cin >> e  >> f  >> g ;
			cout<<trigle(e,f,g)<<endl; 
			break;
		case 2:
			cout << "圆的半径" << endl;
			cin >>j;
			cout<<circle(j)<<endl;
			break;
		case 3:
			cout << "输入长方形的长宽" << endl;
			cin >> k  >> r;
			cout<<integrate(k, r)<<endl;
			break;
		default:
			cout << "输入的数字不对，应在123中选取" << endl;
			break;
		}
		return 0;
		system("pause");
	} while (i !=1&&i !=2&&i!=3);
}
