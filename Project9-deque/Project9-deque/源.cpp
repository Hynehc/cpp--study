#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<deque>
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
//	{
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int>d1;
//	for (int i = 0;i < 10;i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//	deque<int>d3(10, 100);
//	deque<int>d4(d3);
//}
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test()
//{
//	deque<int>d1;
//	for (int i = 0;i < 10;i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	deque<int>d4;
//	d4.assign(10, 100);
//}
#include<algorithm>
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin();it != d.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test()
{
	deque<int>d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);
	printDeque(d1);
	sort(d1.begin(), d1.end());
	printDeque(d1);


	//d1.push_back(10);
	//d1.push_back(20);
	//d1.push_front(100);
	//d1.push_front(200);
	//for (int i = 0;i < d1.size();i++)
	//{
	//	cout << d1[i] << " ";
	//}
	//cout << endl;
	//cout << d1.front() << endl;
	//cout << d1.back() << endl;

	//d1.push_back(10);
	//d1.push_back(20);
	//d1.push_front(100);
	//d1.push_front(200);
	//printDeque(d1);
	//d1.pop_back();
	//d1.pop_front();
	//d1.insert(d1.begin(), 1000);
	//d1.insert(d1.begin(), 10000);
	//deque<int>d2;
	//d2.push_back(1);
	//d2.push_back(2);
	//d2.push_back(3);
	//d1.insert(d1.begin(), d2.begin(), d2.end());
	//d1.erase(d1.begin());
	//deque<int>::iterator it = d1.begin();
	//it++;
	//d1.erase(it);
	//printDeque(d1);
	
	
	//if (d1.empty())
	//{
	//	cout << "kong" << endl;
	//}
	//else
	//{
	//	cout << "buweikong" << endl;
	//}
	//d1.resize(15,1);
	//printDeque(d1);
}
int main()
{
	test();
	return 0;
}