//1. WAP to create simple calculator using class

#include<iostream>
using namespace std;

class Calculator
{
	public :
		void add()
		{
			int x,y,result;
			cout<<"\nEnter the value of x= ";
			cin>> x;
			cout<<"Enter the value of y= ";
			cin>>y;
			result = x + y;
			cout<<"\nAddition of "<< x << " And " << y<< " is  = " <<result;
		}
		void sub()
		{
			int x,y,result;
			cout<<"\n\nEnter the value of x= ";
			cin>> x;
			cout<<"Enter the value of y= ";
			cin>>y;
			result = x - y;
			cout<<"\nSubtract of "<< x << " And " << y << " is  = " <<result;
		}
		void multi()
		{
			int x,y,result;
			cout<<"\n\nEnter the value of x= ";
			cin>> x;
			cout<<"Enter the value of y= ";
			cin>>y;
			result = x * y;
			cout<<"\nMultiplication of "<< x << " And " << y<< " is  = " <<result;
		}
		void div()
		{
			int x,y,result;
			cout<<"\n\nEnter the value of x= ";
			cin>> x;
			cout<<"Enter the value of y= ";
			cin>>y;
			result = x / y;
			cout<<"\ndivide of "<< x << " And " << y<< " is  = " <<result;
		}
};

int main()
{
	Calculator c1;
	c1.add();
	c1.sub();
	c1.multi();
	c1.div();
}

