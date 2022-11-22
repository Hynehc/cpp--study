#pragma once//防止头文件被重复包含
//#ifndef PERSON_H
//#define PERSON_H
//#endif
#include<iostream>
#include<string.h>
using namespace std;
class Person
{
public:
	Person(string name, int age);
	void Show();

public:
	string mName;
	int mAge;
	int mID;
};
