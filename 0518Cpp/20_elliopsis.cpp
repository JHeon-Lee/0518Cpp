#include <iostream>
#include <cstdarg> // 필요

// 가변함수

using namespace std;

double findAverage(int count, ...) // 인자값이 변할 수 있음을 표현
{
	double sum = 0;

	va_list lists; // ... 의 목록들

	va_start(lists, count); // ...의 크기 지정

	for (int arg = 0; arg < count; arg++)
		sum += va_arg(lists, int); // 지정한 자료형 크기만큼 움직이면서 lists를 체크

	va_end(lists); // 동적할당 해제와 비슷함

	return sum / count;
}

int main()
{
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(3, 1, 2, 3, 4, 5) << endl; // 맨 위랑 같음

	return 0;
}