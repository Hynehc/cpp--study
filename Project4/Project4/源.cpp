#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include"Person.h"
//int main()
//{
//	/*Person<int>p(10);
//	p.Show();*/
//
//	return 0;
//}

template<class T>
class MyArr
{public:
	MyArr(int capacity)
	{
		this->mCapcity = capcity;
		this->mSize = 0;
		this->pArr = new T[this->mCapcity];
	}
	MyArr(const MyArr& arr);
	T& operator[](int index)
	{
		return this->pArr[index];
	}
	MyArr<T> operator = (const MyArr<T>& arr);
	void PushBack(T& data)
	{
		if (this->mSize >= this->mCapacity)
		{
			return;
		}
		this->pArr[this->mSize] = data;
		this->mSize++;
	}
#if 0
	void PushBack(T&& data)
	{
		if (this->mSize >= this->mCapacity)
		{
			return;
		}
		this->pArr[this->mSize] = data;
		this->mSize++;
	}
#endif
public:
	int mCapcity;
	int mSize;
	T* pArr;
};
int main()
{

	return 0;
}