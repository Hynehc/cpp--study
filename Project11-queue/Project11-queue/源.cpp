#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<queue>
#include<string>
class Person
{
public:
	Person(string name, int age)
	{
		this->mName = name;
		this->mAge = age;
	}
	string mName;
	int mAge;
};
void test()
{
	//queue<int>q;
	queue<Person>q;
	Person q1("tang", 30);
	Person q2("sun", 100);
	q.push(q1);
	q.push(q2);
	while (!q.empty())
	{
		cout << q.front().mName << q.front().mAge << endl;
		cout << q.back().mName << q.back().mAge << endl;
	}
	q.pop();
}
int main()
{
	test();
	return 0;
}