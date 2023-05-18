#include <iostream>
#include <array> // STL에 있는 array 기능 사용

using namespace std;

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] { 1,2,3,4,5 };
	// int arr3[] ( 1,2,3,4,5 ); direct 초기화 불가능

	/*
		STL : Standard Template Libraries
	*/
	std::array<int, 5> arr4;
	std::array<int, 5> arr5{ 1,2,3,4,5 };

	cout << arr5[0] << endl;
	cout << arr5[4] << endl;
	// cout << arr5[-1] << endl;
	// cout << arr5[5] << endl; 예외처리가 잘 안됨

	cout << arr5.at(0) << endl;
	// cout << arr5.at(5) << endl; 안전하지만 느림 
	cout << arr5.size() << endl;

	return 0;
}