#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<map>
void printMap(map<int,int>&m)
{
	for (map<int, int>::iterator it = m.begin();it != m.end();it++)
	{
		cout << (*it).first<<it->second << " ";
	}
	cout << endl;
}
class MyCompare
{
public:
	bool operator()(int v1, int v2)
	{
		return v1 > v2;
	}
};
void test()
{
	map<int, int, MyCompare>m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 10));
	m.insert(pair<int, int>(3, 10));
	//printMap(m);
	//map<int, int>m2(m);
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;
	m.erase(3);
	map<int, int>::iterator pos = m.find(3);
	int num =m.count(3);
}
int main()
{
	test();
	return 0;
}