#include <iostream>
using namespace std;
struct mid_point{
   double x1,y1,x2,y2;
	const void print(struct mid_point){
		cout << "Toa do trung diem noi doan thang 2 diem :" << "(" << (x1+x2)/2 <<","<<(y1+y2)/2<< ")"; 
	}
};
int main(){
	mid_point Toado;
	cout << "Nhap toa do diem A:";
	cin >> Toado.x1 >> Toado.y1; 
	cout <<"Nhap toa do diem B:";
	cin >> Toado.x2 >> Toado.y2;
	Toado.print(Toado);
	
}

