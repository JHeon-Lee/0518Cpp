#include <iostream>
#include <cstdarg> // �ʿ�

// �����Լ�

using namespace std;

double findAverage(int count, ...) // ���ڰ��� ���� �� ������ ǥ��
{
	double sum = 0;

	va_list lists; // ... �� ��ϵ�

	va_start(lists, count); // ...�� ũ�� ����

	for (int arg = 0; arg < count; arg++)
		sum += va_arg(lists, int); // ������ �ڷ��� ũ�⸸ŭ �����̸鼭 lists�� üũ

	va_end(lists); // �����Ҵ� ������ �����

	return sum / count;
}

int main()
{
	cout << findAverage(3, 1, 2, 3) << endl;
	cout << findAverage(5, 1, 2, 3, 4, 5) << endl;
	cout << findAverage(3, 1, 2, 3, 4, 5) << endl; // �� ���� ����

	return 0;
}