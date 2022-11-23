#define  _CRT_SECURE_NO_WARNINGS 1
#include"point.h"

	void Point::setX(int x)
	{
		mX = x;
	}
	int Point::getX()
	{
		return mX;
	}
	void Point::setY(int y)
	{
		mY = y;
	}
	int Point::getY()
	{
		return mY;
	}

		void Circle::setR(int r)
		{
			mR = r;
		}
		int  Circle::getR()
		{
			return mR;
		}
		void  Circle::setCenter(Point center)
		{
			mCenter = center;
		}
		Point  Circle::gerCenter()
		{
			return mCenter;
		}
