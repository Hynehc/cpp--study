#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
//template<typename T>
//void myswap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	myswap(a, b);
//	myswap<int>(a, b);
//	cout << a << b << endl;
//	return 0;
//}
//template<class T>
//void myswap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//template<class T>
//void mysort(T arr[],int len)
//{
//	for (int i = 0;i < len;i++)
//	{
//		int max = i;
//		for (int j = i + 1;j < len;j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			myswap(arr[max],arr[i])
//		}
//	}
//}
//void test1()
//{
//	char charArr[] = "badcfe";
//
//}
//int main()
//{
//
//	return 0;
//}
#include<vector>
#include<algorithm>
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test1()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	//vector<int>::iterator itBegin = v.begin();
//	//vector<int>::iterator itEnd = v.end();
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//	/*for (vector<int>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << *it << endl;
//	}*/
//	//stl
//	for_each(v.begin(), v.end(), myPrint);
//}
//int main()
//{
//	test1();
//	return 0;
//}
#include<string>
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->mName = name;
//		this->mAge = age;
//	}
//	string mName;
//	int mAge;
//
//};
//void test01()
//{
//	vector<Person>v;
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	for (vector<Person>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << "name:" << (*it).mName <<"    "<<"age:" << (*it).mAge << endl;
//		cout << "name:" << it->mName << "    " << "age:" << it->mAge << endl;
//	}
//}
//void test02()
//{
//	vector<Person*>v;
//	Person p1("a", 10);
//	Person p2("b", 20);
//	Person p3("c", 30);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	for (vector<Person*>::iterator it = v.begin();it != v.end();it++)
//	{
//		cout << (*it)->mName << (*it)->mAge << endl;
//	}
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}

//void test1()
//{
//	vector<vector<int>>v;
//	vector<int>v1;
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	for (int i = 0;i < 4;i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//	for (vector<vector<int>>::iterator it = v.begin();it != v.end();it++)
//	{
//		for (vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//int main() 
//{
//	test1();
//	return 0;
//}
void test()
{
	///*string s1;
	//const char* str = "hello world";
	//string s2(str);
	//string s3(s2);
	//string s4(10 ,'a');*/
	//string s1;
	//s1 = "hello world";
	//cout << s1 << endl;
	//string s2;
	//s2 = s1;
	//string s3;
	//s3 = 'a';
	//string s4;
	//s4.assign("hello worl");
	//string s5;
	//s5.assign("hello C++", 5);
	//string s6;
	//s6.assign(s5);
	//string s7;
	//s7.assign(10, 'w');
	 
	//string s1 = "ÎÒ";
	//s1 += "°®";
	//s1 += ':';
	//string s2 = "lol dnf";
	//s1 += s2;
	//string s3 = "i";
	//s3.append("love");
	//s3.append("game abcd", 4);
	//s3.append(s2);
	//s3.append(s2, 0, 3);
	//s3.append(s2,4,3);

	//string s1 = "abcdefg";
	//int pos = s1.find("de");
	////if (pos == -1)
	////{
	////	//
	////}
	////else
	////{
	////	//
	////}
	//pos = s1.rfind('de');
	//s1.replace(1, 3, "1111");
	
	//string s1 = "hello";
	//string s2 = "hello";
	//if (s1.compare(s2) == 0)
	//{
	//	cout << "=" << endl;
	//}

	/*string s1 = "hello";
	for (int i = 0;i < s1.size();i++)
	{
		cout << s1[i] << " ";
		cout << endl;
		cout << s1.at(i) << " ";
		cout << endl;
	}
	s1[0] = 'x';
	s1.at(1) = 'x';*/

	//string s1 = "hello";
	//s1.insert(1, "111");
	//s1.erase(1, 3);
	
//	string s = "abcdef";
//	string subStr = s.substr(1, 3);
//	cout << subStr << endl;
//	string email = "zhangsan@sina.com";
//	int pos = email.find("@");
//	string usrName = email.substr(0, pos - 1);
//	cout << usrName << endl;
//}
int main()
{
	test();
	return 0;
}