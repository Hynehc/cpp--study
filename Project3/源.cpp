#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
template<class T1,class T2>
class Person {
public:
	Person(T1 name,T2 age) {
		this->mName = name;
		this->mAge = age;
	}
	void Show();
	{
		cout << "name:" << this->mName << "age:" << this->mAge << endl;
	}
public:
	T1 mName;
	T2 mAge;
};
void test()
{
	Person<string, int>p("AAA", 20);
	p.Show();
}
int main()
{

	return 0;
}