#include <iostream>
using namespace std;

//class Point 点类主体 

class Point
{
protected:
	float x, y;
public:
	Point(float x, float y);
	void pritPoint();
};

//class Rectanlege 矩形类主体

class Rectanlege :public Point
{
protected:
	float length, width;
public:
	Rectanlege(float x, float y, float length, float width);
	void PritRectanlege();
};

//class Cube 类主体 

class Cube :public Rectanlege
{
protected:
	float hight;
public:
	Cube(float x, float y, float length, float width, float hight);
	void PritCube();

};

//main 主函数主体 

int main()
{
	Point p(1, 1);
	Rectanlege r(2, 2, 1, 3);
	Cube c(2, 3, 4, 5, 6);
	cout << "---------------" << endl;
	p.pritPoint();
	cout << "---------------" << endl;
	r.PritRectanlege();
	cout << "---------------" << endl;
	c.PritCube();
}

//class Point 点类外函数声明 

Point::Point(float x, float y)
	:x(x), y(y)
{}

void Point::pritPoint()
{
	cout << "Point ：(" << x << "," << y << ")" << endl;
}

//class Rectanlege 矩形类外函数声明 

Rectanlege::Rectanlege(float x, float y, float length, float width)
	:Point(x, y), length(length), width(width)
{}

void Rectanlege::PritRectanlege()
{
	cout << "Rectanlege:";
	Point::pritPoint();

	cout << "length=" << length << endl;
	cout << "width=" << width << endl;
}

//class Cube 立方体类外函数声明 

Cube::Cube(float x, float y, float length, float width, float hight)
	:Rectanlege(x, y, length, width), hight(hight)
{}

void Cube::PritCube()
{
	cout << "Cube:";
	Rectanlege::PritRectanlege();
	cout << "Higth：" << hight << endl;
}