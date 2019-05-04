#include<iostream>
#include<iomanip>
#include"Rectangle.h"
using namespace std;

void printRectangleArray(Rectangle rectArray[], int size)
{
	for (int i = 0; i < size; i++) {
		cout << rectArray[i].getWidth() << setw(8) << 
		rectArray[i].getHeight() << setw(8) << rectArray[i].getArea() << endl;

	}
	cout << Rectangle::getNumOfRect() << setw(8) << "Rectangles" << endl;

}

int main()
{
	
	const int size = 3;
	double x, y;
	Rectangle r[size];
	for (int i = 0; i < size; i++) {
		cin >> x >> y;
		r[i].setWidth(x);
		r[i].setHeight(y);
	}
	
	printRectangleArray(r, size);
	
	system("pause");
	return 0;
}