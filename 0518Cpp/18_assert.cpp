#include <iostream>
#include <cassert> // ����� üũ�� ����

using namespace std;

int main()
{
	int a = 10;
	int b = 11;
	int c = 12;
	int d = 13;
	int e = 14;

	printf("%d", a); // f11 �����鼭 ���� Ȯ�� ����(�����)
	printf("%d", b);
	printf("%d", c);
	printf("%d", d);
	printf("%d", e);

	int x;
	cin >> x;

	assert(x != 0 && "x is 0"); // false �� ��� ���α׷��� �Ͷ߸�, && �ڿ� �������� �ȳ����� ���� ����

	// static_assert(flase);  ������ Ÿ�ӿ��� ���������� ����

	const int x1 = 6;
	const int y1 = 7;
	static_assert(x1 < y1, "x1 isbigger than y1"); // x1�� y1 ���� Ŀ���� �ٷ� ��������

	return 0;
}