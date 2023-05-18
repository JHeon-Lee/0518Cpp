#include <iostream>
#include <cassert> // 디버깅 체크에 도움

using namespace std;

int main()
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	int e = 14;

	printf("%d", a); // f11 누르면서 값들 확인 가능(조사식)
	printf("%d", b);
	printf("%d", c);
	printf("%d", d);
	printf("%d", e);

	int x;
	cin >> x;

	assert(x != 0 && "x is 0"); // false 일 경우 프로그램을 터뜨림, && 뒤에 터졌을때 안내문구 기입 가능

	// static_assert(flase);  컴파일 타임에서 오류잡히게 해줌

	const int x1 = 6;
	const int y1 = 7;
	static_assert(x1 < y1, "x1 isbigger than y1"); // x1이 y1 보다 커지면 바로 오류잡힘

	return 0;
}