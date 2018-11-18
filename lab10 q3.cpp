#include<iostream>

using namespace std; //we have to create a class for rectangle
class rectangle
{        //public command for length and breadth
	public:

	double l;
	double b;

	//making functions for area and perimeter
	double area(void);
	double perimeter(void);

};

double rectangle::area(void)
{
	return l*b;
}

double rectangle::perimeter(void)
{
	return 2*(l+b);
}

int main()
{
	rectangle rect1,rect2;
	cout<<"what are the dimensions for triangle number 1"<<endl;
	cin>>rect1.l>>rect1.b;
	cout<<"what are the dimensions for triangle number 2"<<endl;
	cin>>rect2.l>>rect2.b;


	double area1=rect1.area(),area2=rect2.area();
	double peri1=rect1.perimeter(),peri2=rect2.perimeter();

	//applyig condition statement and finding greater area
	if (area1<area2)
	{
		cout<<"rectangle 2 has larger area than the first rectangle"<<endl;
	}
	else if (area1>area2)
	{
		cout<<"rectangle 1 has more area than the second rectangle"<<endl;
	}
	else cout<<"both the areas are equal"<<endl;

   //applying condition statement to perimeter
	if (peri1<peri2)
	{
		cout<<"rectangle 2 has greater perimeter than rectangle 1"<<endl;
	}
	else if (peri1>peri2)
	{
		cout<<"rectangle 1 has greater perimeter than the rectangle 2"<<endl;
	}
	else cout<<"both the areas are equal"<<endl;

	return 0;
}
