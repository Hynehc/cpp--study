#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<set>
#include<string>
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test()
{
	set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	for (set<int>::iterator it = s.begin();it != s.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	set<int, MyCompare>s2;
	/*pair<string, int>p("sn", 20);
	pair<string, int>p2 = make_pair("jerry");*/


	/*set<int>s;
	pair<set<int>::iterator, bool> ret = s.insert(10);
	ret = s.insert(10);*/
	/*if (ret.second)
	{

	}
	else*/

	/*set<int>s1;
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	printSet(s1);
	set<int>::iterator pos = s1.find(30);
	int num = s1.count(30);*/


	//if (!s1.empty())
	//{

	//}
	/*set<int>s2;
	s1.swap(s2);
	s1.erase(s1.begin());
	s1.erase(30);
	s1.clear();*/
}
int main()
{
	test();
	return 0;
}