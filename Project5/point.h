#pragma once
#include<iostream>
using namespace std;

class Point
{
public:
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
private:
	int mX;
	int mY;
};

class Circle
{
public:
	void setR(int r);
	int getR();
	void setCenter(Point center);
	Point gerCenter();
private:
	int mR;
	Point mCenter;
};