#include<iostream>
using namespace std;

 	class Time{
	int hour;
	int min;
	int sec;
	 public:
	 Time() : hour(0), min(0), sec(0){}
	 Time(int h, int m, int s) : hour(h), min(m), sec(s){}
	 Time operator+(const Time& a){
	 	Time temp;
	 	temp.sec = sec + a.sec;
	 	temp.min = min + a.min + (temp.sec/60);
	 	temp.sec %= 60;
	 	temp.hour = hour + a.hour + (temp.min/60);
	 	temp.min %= 60;
	 	return temp;
	 }
	
	void display(){
		cout << "Time:" << hour << " Hours " << min << " Minutes " << sec << " Second " << endl;
	}
};
int main(){
	Time t1(12,25,60);
	Time t2(3,60,60);
	Time t3 = t1 + t2;
	t3.display();
	return 0;
}
