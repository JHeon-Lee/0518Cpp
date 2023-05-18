#include <iostream>
#include <functional> // 좀더 편하게 쓸수 있는 라이브러리

using namespace std;

bool func(const int& x)
{
	return x > 0;
}

// 좀더 편하게 가능
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