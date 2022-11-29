#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<stack>
void test()
{
	stack<int>s;
	s.push(10);
	s.push(10);
	s.push(10);
	s.push(10);
	cout << s.size() << endl;
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
	cout << s.size() << endl;
}
int main()
{
	test();
	return 0;
}