#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#define PI 3.14
//class Circle
//{
//public:
//	int m_r;
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//int main()
//{
//	Circle c1;
//	c1.m_r = 10;
//	cout << "ZC:" << c1.calculateZC() << endl;
//	system("pause");
//	return 0;
//}
#include<string>
//class Student
//{
//public:
//	string mName;
//	int mID;
//	void showStudent()
//	{
//		cout << mName << mID << endl;
//	}
//	void serName(string name)
//	{
//		mName = name;
//	}
//	void setID(int id)
//	{
//		mID = id;
//	}
//};
//int main()
//{
//	Student s1;
//	//s1.mName = "zhangshan";
//	s1.serName("zhangshan");
//	s1.mID = 1;
//	s1.showStudent();
//	Student s2;
//	s2.mName = "lishi";
//	s2.mID = 2;
//	s2.showStudent();
//	return 0;
//	
//

//class Person
//{
//public:
//	string mName;
//protected:
//	string mCar;
//private:
//	int mPassword;
//public:
//	void func()
//	{
//		mName = "zhangsan";
//		mCar = "tuolaji";
//		mPassword = 123456;
//	}
//};
//int main()
//{
//	Person p1;
//	p1.mName = "lishi";
//	p1.func();
//	return 0;
//}

//class C1
//{
//	int mA;
//};
//struct C2
//{
//	int mA;
//};
//int main()
//{
//	C1 c1;
//	//c1.mA
//	C2 c2;
//	c2.mA
//	return 0;
//

//class Person
//{
//public:
//	void setName(string name)
//	{
//		mName = name;
//	}
//	string getName()
//	{
//		return mName;
//	}
//	int getAge()
//	{
//		mAge = 0;
//		return mAge;
//	}
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			mAge = 0;
//			return;
//		}
//		mAge = age;
//	}
//	void setLover(string lover)
//	{
//		mLover = lover;
//	}
//private:
//	string mName;
//	int mAge;
//	string mLover;
//};
//int main()
//{
//	Person p;
//	p.setName("zhangshan");
//	cout << "name:" << p.getName() << endl;
//	p.setAge(1000);
//	cout << p.getAge() << endl;
//	p.setLover("changjing");
//	return 0;
//}

//class Cube
//{
//public:
//	void setL(int l)
//	{
//		mL = l;
//	}
//	int getL()
//	{
//		return mL;
//	}	
//	void setW(int w)
//	{
//		mW = w;
//	}
//	int getW()
//	{
//		return mW;
//	}	
//	void setH(int h)
//	{
//		mH = h;
//	}
//	int getH()
//	{
//		return mH;
//	}
//	int calculateS()
//	{
//		return 2 * (mL * mW + mL * mH + mW * mH);
//	}
//	int calculateV()
//	{
//		return mL * mW * mH;
//	}
//
//	bool isSameByClass(Cube& c)
//	{
//		if (mL == c.getL() && mW == c.getW() && mH == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int mL, mW, mH;
//};
//
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//	cout << "S:" << c1.calculateS() << endl;
//	cout << "V:" << c1.calculateV() << endl;
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	int ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "different" << endl;
//	}
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "same" << endl;
//	}
//	else
//	{
//		cout << "different" << endl;
//	}
//	return 0;
//}

//class Point
//{
//public:
//	void setX(int x)
//	{
//		mX = x;
//	}
//	int getX()
//	{
//		return mX;
//	}
//	void setY(int y)
//	{
//		mY = y;
//	}
//	int getY()
//	{
//		return mY;
//	}
//private:
//	int mX;
//	int mY;
//};
//class Circle
//{
//public:
//	void setR(int r)
//	{
//		mR = r;
//	}
//	int getR()
//	{
//		return mR;
//	}
//	void setCenter(Point center)
//	{
//		mCenter = center;
//	}
//	Point gerCenter()
//	{
//		return mCenter;
//	}
//private:
//	int mR;
//	Point mCenter;
//};
#include"point.h"
void isInCircle(Circle &c,Point &p)
{
	int distance =
		(c.gerCenter().getX() - p.getX()) * (c.gerCenter().getX() - p.getX()) +
		(c.gerCenter().getY() - p.getY()) * (c.gerCenter().getY() - p.getY());
	int rDistance = c.getR() * c.getR();
	if (distance == rDistance)
	{
		cout << "shang" << endl;
	}
	else if (distance > rDistance)
	{
		cout << "wai" << endl;
	}
	else
	{
		cout << "nei" << endl;
	}
}
int main()
{
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);
	return 0;
}