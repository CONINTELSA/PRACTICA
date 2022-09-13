#include<iostream>
using namespace std;

int main()
{
	float x,y, s,r,m,d;
	cout<<"Ingrese el valor de X="; cin>>x;
	cout<<"Ingrese el valor de Y="; cin>>y;
	s=x+y;
	r=x-y;
	m=x*y;
	d=x/y;
	cout<<"La suma de "<<x<<"+"<<y<<"="<<s<<endl;
	cout<<"La resta de "<<x<<"-"<<y<<"="<<r<<endl;
	cout<<"La multiplicacion de "<<x<<"*"<<y<<"="<<m<<endl;
	cout<<"La division de "<<x<<"/"<<y<<"="<<d<<endl;
	return 0;

}
