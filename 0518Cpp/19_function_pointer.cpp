#include <iostream>
#include <functional> // ���� ���ϰ� ���� �ִ� ���̺귯��

using namespace std;

bool func(const int& x)
{
	return x > 0;
}

// ���� ���ϰ� ����
typedef bool(*funcPtr)(const int&);

using funcType = bool(*)(const int&);

int main()
{
	bool (*pf)(const int&) = func;

	funcPtr f = func;
	funcType f2 = func;

	std::function<bool(const int&)> f3 = func;

	return 0;
}