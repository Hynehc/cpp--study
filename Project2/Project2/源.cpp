#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include"Person.h"
using namespace std;
template<class T>
int main()
{
	Person p("AAA", 20);
	p.Show();
	return 0;
}