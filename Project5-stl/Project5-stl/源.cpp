#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//int mycount(int*s,int*e,int val)
//{
//	int num = 0;
//	while (s != e)
//	{
//		if (*s == val)
//		{
//			num++;
//		}
//		s++;
//	}
//	return num;
//}
//int main()
//{
//	int arr[] = { 0,7,5,4,9,2,0 };
//	
//	int* begin = arr;//迭代器开始位置
//	int* end = &arr[sizeof(arr) / sizeof(arr[0])];
//	int num = mycount(begin, end, 0);
//	cout << "0:" << num << endl;
//	return 0;
//}


#include<vector>
#include<algorithm>
//void PrintVector(int v)
//{
//	cout << v << " ";
//}
//template<class T>
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	vector<int>::iterator pBegin = v.begin();
//	vector<int>::iterator pEnd = v.end();
//	for_each(pBegin.pEnd, PrintVector);
//}
//class Person
//{
//public:
//	Person(int age, int id) :age(age), id(id)
//	{
//
//	}
//public:
//	int age;
//	int id;
//};
//void test02()
//{
//	vector<Person> v;
//	Person p1(10, 20), p2(30, 40), p3(50, 60);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	for (vector<Person>::iterator it = v.begin() ; it != v.end();it++)
//	{
//		cout << (*it).age << " " << (*it).id << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}

//
//string容器
//
void PrintVector(vector<int>&v)
{
	for (vector<int>::iterator it = v.begin();it != v.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	int arr[] = { 10,20,30,40 };
	vector<int> v2(arr, arr + sizeof(arr) / sizeof(int));
	vector<int>v3(v2.begin(), v2.end());
	vector<int>v4(v3);
	PrintVector(v2);
	PrintVector(v3);
	PrintVector(v4);
}

int main()
{
	test01();
	return 0;
}