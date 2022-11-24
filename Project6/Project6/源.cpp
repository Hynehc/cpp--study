#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Person
{
public:

	//¹¹Ôìº¯Êý
	Person()
	{
		cout << "gouzhao" << endl;
	}
	~Person()
	{
		cout << "xigou" << endl;
	}
};
void test1()
{
	Person p;
}
int main()
{
	Person p;
	return 0;
}