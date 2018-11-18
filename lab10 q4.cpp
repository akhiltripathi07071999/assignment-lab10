//
#include <iostream>
using namespace std;

class point
	{
		int a_cordinate, b_cordinate;
		public:
		void set_a(int a);
		//function set for a
		void set_b(int b);
		//function set for y
		int get_a(void);
		//display function for a
		int get_b(void);
		//display function for b
	};

void point:: set_a(int a)
	{
		a_cordinate = a;
		//setting a as x cordinate
	}
void point:: set_b(int b)
	{
		b_cordinate = b;//seting b as y cordinate
	}
int point:: get_a()
	{
		return a_cordinate;//display value of x cordinate
	}
int point :: get_b()
	{//display value of y cordinate
		return b_cordinate;
	}

class rectangle //rectangle
	{
		private://private members
		void side(void)//length of side
			{
				int s1=p4.get_b()- p1.get_b();
				int s2=p4.get_a()- p3.get_a();
			}
		public://public members
		point p1;//points of rectange using peviously defined clas
		point p2;
		point p3;
		point p4;
		rectangle ()
			{
				p4.set_a(0);//defalt constructor for making a 1*1 rectange with all point in 1st quadrant and one point at (0,0)
				p4.set_b(0);
				p3.set_a(1);
				p3.set_b(0);
				p2.set_a(1);
				p2.set_b(1);
				p1.set_a(0);
				p1.set_b(0);
			}
		rectangle (point a, point b)//constructor taking inputy cordinates of the rectange
			{
				p4 = a;//point4
				p2 = b;//point2
				p1.set_a(p4.get_a()) ;//set the value of points by makings the k=lines parallel
				p1.set_b(p2.get_b());
				p3.set_a(p2.get_a());
				p3.set_b(p4.get_b());
			}
		void display (void)//printing the cordinate of the rectangle
			{
				cout<< "The cordinates of the rectangle is" << '('<<p1.get_a()<<","<<p1.get_b()<<')'<<'('<<p2.get_a()<<","<<p2.get_b()<<')'<<'('<<p3.get_a()<<","<<p3.get_b()<<')'<<'('<<p4.get_a()<<","<<p4.get_b()<<')'<<endl;
			}
		int area (void)//area
		{
			int ar = (p4.get_b()- p1.get_b())*(p4.get_a()- p3.get_a());//side * side
			return ar;
		}
	};

int main ()
	{
		int A, B, C, D;//integers for cordinate
		point p1, p2;//digonal points of rectangle
		cout<<"Enter the a and b cordinates of the left lower point of the rectange respectivly"<<endl;
		cin>> A;//taking p4 cordinate
		cin>> B;
		p2.set_a(A);//setting the cordinates
		p2.set_b(B);
		cout<<"Enter the a and b cordinates of the right upper point of the rectange respectivly"<<endl;
		cin >> C;//taking p2 cordinate
		cin >> D;
		p1.set_a(C);//setting the p1 value
		p1.set_b(D);
		rectangle rect(p1,p2);
		rect.display();
		if(rect.area()>0)
			{
				cout<< "Area of the rectangle is "<<(rect.area())<<endl;
			}
		else cout<< "Area of the rectangle is "<<-(rect.area())<<endl;//to keep area always positive
		return 0;
	}
