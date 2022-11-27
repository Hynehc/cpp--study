#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std ;
#include<vector>
//void printVector(vector<int>& v)
//{
//	vector<int>v1;
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//		cout << endl;
//	}
//}
//void test()
//{
//	vector<int>v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	vector<int>v3;(10, 100);
//	printVector(v3);
//	vector<int>v4(v3);
//	printVector(v4);
//}

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//		cout << endl;
//	}
//}
//void test()
//{
//	vector<int>v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4); 
//}
//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//void test()
//{
//	vector<int>v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	if (v1.empty())
//	{
//		cout << "kong" << endl;
//	}
//	else
//	{
//		cout << "buweikong" << endl;
//		cout << v1.capacity() << endl;
//		cout << v1.size() << endl;
//	}
//	v1.resize(15,100);
//	printVector(v1);
//	v1.resize(5);
//	printVector(v1);
//}
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//		cout << endl;
//	}
//}
//void test()
//{
//	vector<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//	printVector(v1);
//	v1.pop_back();
//	printVector(v1);
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//	v1.insert(v1.begin(), 2, 1000);
//	v1.erase(v1.begin()); 
//	v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	
//}

//void test()
//{
//	vector<int>v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 0;i < v1.size();i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0;i < 10;i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//	cout << v1.front() << endl;
//	cout << v1.back() << endl;
//}

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	vector<int>v1;
//	for (int i = 0;i < 10;i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//	vector<int>v2;
//	for (int i = 10;i > 0;i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//
//}

//void test()
//{
//	vector<int>v;
//	for (int i = 0;i < 100000;i++)
//	{
//		v.push_back(i);
//	}
//	cout << v.capacity() << endl;
//	cout << v.size() << endl;
//	v.resize(3);
//	vector<int>(v). swap(v);
//}

void test()
{
	vector<int>v;
	v.reserve(100000);
	int num = 0;
	int* p = NULL;

	for (int i = 0;i < 100000;i++)
	{
		v.push_back(i);
		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}
	cout << num << endl;
}
int main()
{
	test();
	return 0;
}