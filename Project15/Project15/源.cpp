#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//class MyAdd
//{
//public:
//	int operator()(int v1, int v2)
//	{
//		return v1 + v2;
//	}
//};
//void test()
//{
//	MyAdd myadd;
//	cout << myadd(10, 10) << endl;
//}
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator()(string test)
//	{
//		cout << test << endl;
//		this->count++;
//	}
//	int count;
//};
//void test1()
//{
//	MyPrint myPrint;
//	myPrint("hello,world");
//	myPrint("hello,world");
//	myPrint("hello,world");
//	myPrint("hello,world");
//	myPrint("hello,world");
//	cout << myPrint.count << endl;
//}
//void doPrint(MyPrint& mp, string test)
//{
//	mp(test);
//}
//void test2()
//{
//	MyPrint myPrint;
//	doPrint(myPrint, "hello,C++");
//}
#include<vector>
//class GreaterFive
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//void test()
//{
//	vector<int>v;
//	for (int i = 0;i < 10;i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(), v.end(), GreaterFive());
//	
//}
#include<algorithm>
//class MyCompare
//{
//public:
//	bool operator()(int val1, int val2)
//	{
//		return val1 > val2;
//	}
//};
//void test()
//{
//	/*vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(), MyCompare());*/
//}
#include<functional>
//void test()
//{
//	negate<int>n;
//	n(50);
//	cout << n(50) << endl;
//}
//void test1()
//{
//	plus<int>p;
//	cout << p(10, 20) << endl;
//}
#include<vector>
#include<algorithm>
//class MyCompare
//{
//public:
//	bool operator()(int v1,int v2)
//	{
//		return v1 > v2;
//	}
//};
//void test()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(10);
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//
//}

void test()
{
	vector<bool>v;
	v.push_back(true);
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	for (vector<bool>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	vector<bool>v2;
	v2.resize(v.size());
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>());
	for (vector<bool>::iterator it = v2.begin();it != v2.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	test();
	/*test1();*/
	return 0;
}