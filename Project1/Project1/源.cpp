#define  _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<string>
//using namespace std;
////#define Day 7
////int main()
////{
////	/*cout << "hello world" << endl;*/
////	/*int a = 10;
////	cout << "a = " << a << endl;*/
////	/*cout << "yizho" << Day << "tian" << endl;*/
////	//char ch = 'w';
////	//cout << (int)ch << endl;
////
////	//string str = "hello world";
////	//cout << str << endl;
////
////	//bool flag = true;
////	//cout << flag << endl;
////	//flag = false;
////	//cout << flag << endl;
////
////	//int a = 0;
////	//cin >> a;
////	//cout << a << endl;
////
////	//string str = "hello";
////	//cin >> str;
////	//cout
////
////
////	system("pause");
////	return 0;
////}
////void MySwap(int& a, int& b)
////{
////	int tmp = a;
////	a = b;
////	b = tmp;
////}
////void MySwap(double& a, double& b)
////{
////	double tp = a;
////	a = b;
////	b = tp;
////}
//
//using namespace std;
//template<class T>
////template<typenme T>
//void MySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	cout << "a:" << a << "b:" << b << endl;
//	MySwap(a, b);
//	cout << "a:" << a << "b:" << b << endl;
//
//}
//int main()
//{
//	test01();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//template<class T>
//int MyAdd(T a, T b)
//{
//	return a + b;
//}
//int MyAdd(int a, char c)
//{
//	return a + c;
//}
//void test()
//{
//	int a = 10;
//	int b = 20;
//	char c1 = 'a';
//	char c2 = 'b';
//	MyAdd<>(a, b);
//#if 0
//	MyAdd(a, c1);
//	MyAdd(a, b);
//	MyAdd(c1, b);
//#endif
//}
//template<class T>
//void Print(T a)
//{
//
//}
//template<class T>
//void
//int main()
//{
//	test();
//	return 0;
//}

#include<iostream>
using namespace std;
//template<class T>
//T MyAdd(T a, T b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	MyAdd(a, b);
//	double c = 1.22;
//	double d = 2.14;
//	MyAdd(c, d);
//	return 0;
//}

//template<class T>
//class Person
//{
//public:
//	Person(T id, T age)
//	{
//		this->mage = age;
//		this->mid = id;
//	}
//	void Show()
//	{
//		cout << "ID" << mid << "Age" << mage << endl;
//	}
//public:
//	T mid;
//	T mage;
//};
//void test()
//{
//	Person<int>p(10, 20);
//	p.Show();
//}
//int main()
//{
//
//	return 0;
//}

//template<class T>
//void Print(T* arr, int len)
//{
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//template<class T>
//void MySort(T* arr, int len)
//{
//	int i = 0;
//	for (i = 0;i < len-1;i++)
//	{
//		for (int j = 0;j < len - 1 - i;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 2,6,1,8,9,2 };
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	/*Print(arr, len);
//	MySort(arr, len);
//	Print(arr, len);*/
//	char chArr[] = { 'a','c','b','p','t' };
//	int len = sizeof(chArr) / sizeof(char);
//	Print(chArr, len);
//	MySort(chArr, len);
//	Print(chArr, len);
//
//	return 0;
//}
//template<class T>
//class Person
//{
//public:
//	Person()
//	{
//		mAge = 0;
//	}
//public:
//	T mAge;
//
//};
//class SubPerson :public Person<int>
//{
//
//};
//int main()
//{
//
//	return 0;
//}

//template<class T>
//class Animal
//{
//public:
//	void Jiao()
//	{
//		cout << mAge << endl;
//	}
//public:
//	T mAge;
//};
//template<class T>
//class Cat :public Animal<T>
//{
//
//};
//int main()
//{
//	Cat<int>cat;
//	return 0;
//}