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
		cout << "����������������" << endl;
}
int main(){
	cout << "�������������ִ�����㲻ͬ��ͼ�ε����" << endl;
	cout << "1��������  2;Բ  3��������" << endl;
	int i,e,f,g;
	double j, k,r;
	do{
		cin >> i;
		switch (i){
		case 1:
			cout << "�����ε�������" << endl;
			cin >> e  >> f  >> g ;
			cout<<trigle(e,f,g)<<endl; 
			break;
		case 2:
			cout << "Բ�İ뾶" << endl;
			cin >>j;
			cout<<circle(j)<<endl;
			break;
		case 3:
			cout << "���볤���εĳ���" << endl;
			cin >> k  >> r;
			cout<<integrate(k, r)<<endl;
			break;
		default:
			cout << "��������ֲ��ԣ�Ӧ��123��ѡȡ" << endl;
			break;
		}
		return 0;
		system("pause");
	} while (i !=1&&i !=2&&i!=3);
}
