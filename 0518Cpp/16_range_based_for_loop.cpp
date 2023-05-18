#include <iostream>

using namespace std;

int main()
{
	int fibonacci[]{ 0,1,1,2,3,5,8,13,21,34 };

	for (const auto& number : fibonacci)
		cout << number << " "; // 처음부터 끝까지 찍힘

	cout << endl;

	for (const auto& number : { 0,1,1,2,3,5,8,13,21,34 })
		cout << number << " "; // 처음부터 끝까지 찍힘

	int* test = new int[10];
	// for(auto t : test); 포인터에는 사용 불가

	return 0;
}