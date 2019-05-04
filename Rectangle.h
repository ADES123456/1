#ifndef Rectangle_h
#define Rectangle_h

class Rectangle
{
private:
	double width;
	double height;
	static int numOfRect;
public:
	Rectangle();
	Rectangle(double, double);
	void setWidth(double);
	double getWidth() const;
	void setHeight(double);
	double getHeight() const;
	double getArea() const;
	static int getNumOfRect();


};
#endif
