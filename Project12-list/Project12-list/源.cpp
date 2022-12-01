#define  _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<list>
void printList(list<int>& l)
{
	for (list<int>::iterator it = l.begin();it != l.end();it++)
	{
		cout << *it << " ";
	 }
	cout << endl;
}
void test()
{
	list<int>l1;



	//l1.push_back(10);
	//l1.push_back(10);
	//l1.push_back(10);
	//l1.push_back(10);
	//l1.push_front(100);
	//l1.push_front(100);
	//l1.push_front(100);
	//l1.push_front(100);
	//l1.pop_back();
	//l1.pop_front();
	//printList(l1);
	//l1.insert(l1.begin(), 1000);
	//list<int>::iterator it = l1.begin();
	//l1.insert(++it, 1000);
	//it = l1.begin();
	//l1.erase(++it);
	//l1.remove(100);
	//printList(l1);




	/*l1.resize(10,1000);
	l1.resize(2);*/
	//if (!l1.empty())
	//{

	//}
	// 
	//list<int>l2(l1.begin(), l1.end());
	//list<int>l3(l2);
	//list<int>l4(10, 1000);

	/*list<int>l2;
	l2 = l1;
	list<int>l3;
	l3.assign(l2.begin(), l3.end());
	list<int>l4;
	l4.assign(10, 100);*/

}
//void test1()
//{
//	list<int>l1;
//	l1.push_back(10);
//	l1.push_back(10);
//	l1.push_back(10);
//	l1.push_back(10);
//	list<int>l2;
//	l2.assign(10, 1000);
//	l1.swap(l2);
//
//}
int main()
{
	test();
	return 0;
}