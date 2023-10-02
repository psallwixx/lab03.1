#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main()
{
	list<int> A = { 1, 8, 14, 18, 19, 22, 23, 24, 25 };
	list<int> B = { 1, 4, 5, 10, 11, 17, 18, 23, 25 };
	list<int> C = { 1, 10, 11, 12, 15, 19, 20, 24, 25 };

	list<int> F1(A.size() + B.size());
	list<int>::iterator itRes1;
    itRes1 = set_union(A.begin(), A.end(), B.begin(), B.end(), F1.begin());
	list<int>::iterator it1 = F1.begin();

	while (it1 != itRes1)
	{
		cout << *it1 << " ";
		it1++;
	}
	cout << endl;

	list<int> F2(A.size() + C.size());
	list<int>::iterator itRes2;
	itRes2 = set_intersection(A.begin(), A.end(), C.begin(), C.end(), F2.begin());
	list<int>::iterator it2 = F2.begin();

	while (it2 != itRes2)
	{
		cout << *it2 << " ";
		it2++;
	}
	cout << endl;
  
	list<int> F3(F1.size() + F2.size());
	list<int>::iterator itRes3;
	itRes3 = set_difference(F1.begin(), F1.end(), F2.begin(), F2.end(), F3.begin());
	list<int>::iterator it3 = F3.begin();

	while (it3 != itRes3)
	{
		cout << *it3 << " ";
		it3++;
	}
	cout << endl;
}
