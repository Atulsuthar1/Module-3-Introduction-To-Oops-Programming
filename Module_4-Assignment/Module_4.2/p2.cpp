// 2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class shape 
{
	protected :
		double length;
		double width;
    public :
		void setvalue(double l,double w)
		{
			length = l;
			width = w;
		}
		void getvalue()
		{
			cout<<"\nLength = "<<length;
			cout<<"\nWidth = "<<width;
		}
};
class rectangle : public shape
{
	private :
		double area;
	public :
	   void calculatearea()
	   {
	   		shape :: getvalue();
	   	    area=length*width;
	   }	
	   void displayarea()
	   {
	   	    cout<<"\nArea of ranctangle is = "<<area;
	   }
};
int main()
{
	rectangle r1;
	r1.setvalue(4.2,3.6);
	r1.calculatearea();	
	r1.displayarea();
}


