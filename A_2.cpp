#include <iostream>
using namespace std;
struct Point{
	int x,y;
	void print(struct Point){
		cout << &x << "and" << &y << endl;
	}
};
void print(struct Point a){
	cout << &a.x << "and" << &a.y << endl;
}
void print(struct Point* a){
	cout << &a->x << "and" << &a->y << endl;
}

}
int main()
{
	Point Point1 = {1, 2};
	cout << endl;
	check(Point1);
	cout << &Point1.x << " " << &Point1.y << endl;
	check(&Point1);
	return 0;
}
