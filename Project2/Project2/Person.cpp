#define  _CRT_SECURE_NO_WARNINGS 1
#include"Person.h"
Person::Person(string name, int age)
{
	this->mName = name;
	this->mAge = age;
}
void Person::Show()
{
	cout << "Nae:" << this->mName << "Age:" << this->mAge << endl;
}