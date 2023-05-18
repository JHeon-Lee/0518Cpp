#include <iostream>
#include <array> // STL�� �ִ� array ��� ���

using namespace std;

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] { 1,2,3,4,5 };
	// int arr3[] ( 1,2,3,4,5 ); direct �ʱ�ȭ �Ұ���

	/*
		STL : Standard Template Libraries
	*/
	std::array<int, 5> arr4;
	std::array<int, 5> arr5{ 1,2,3,4,5 };

	cout << arr5[0] << endl;
	cout << arr5[4] << endl;
	// cout << arr5[-1] << endl;
	// cout << arr5[5] << endl; ����ó���� �� �ȵ�

	cout << arr5.at(0) << endl;
	// cout << arr5.at(5) << endl; ���������� ���� 
	cout << arr5.size() << endl;

	return 0;
}