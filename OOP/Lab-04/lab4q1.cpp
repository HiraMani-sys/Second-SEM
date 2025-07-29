#include <iostream>
#include <cmath>
using namespace std;

class polygon
{
	protected:
	double height;
	double width;
	polygon()
	{
		height = 0;
		width = 0;
	}
	polygon(double h , double w)
	{
		height = h;
		width = w;
	}
};
class triangle : public polygon
{
	public:
		triangle(double h, double w) : polygon(h, w) {}
		double calculate_area()
	{
		return .5 * (height * width);
	}
	
		double calculate_perimeter()
	{
		double hypo;
		hypo = sqrt((height*height)+(width*width));
		return (height + width + hypo);
	}

};
class rectangle : public polygon
{
		public:
		rectangle(double h, double w) : polygon(h, w) {}
	double calculate_area()
	{
				return height * width;
	}
	
	double calculate_perimeter()
	{
	
		return 2 * (height + width);
	}
};

int main(void)
{
	triangle t1(5, 2.5);
	rectangle r1(5, 5);
	cout << "area of triangle: " << t1.calculate_area() << endl;
	cout << "perimeter of triangle: " << t1.calculate_perimeter() << endl;
	cout << "area of rectangle: " << r1.calculate_area() << endl;
	cout << "perimeter of rectangle: " << r1.calculate_perimeter() << endl;
}

