#include<iostream>
using namespace std;

class Height{
	int meter;
	int centimeter;
	public:
		Height() : meter(0), centimeter(0) {}
		Height(int m , int c) : meter(m), centimeter(c) {}
		Height operator+(const Height& a){
			Height temp;
			temp.centimeter = centimeter + a.centimeter;
			temp.meter = meter + a.meter + (temp.centimeter/100);
			temp.centimeter %= 100;
			return temp;
		}
		void display() const{
			cout << "Height:" << meter << " meters " << centimeter << " centimeters"<<endl;
		} 
};

int main(){
	Height h1(1,25);
	Height h2(2,80);
	Height h3 = h1 + h2;
	h3.display();
	return 0;
}
