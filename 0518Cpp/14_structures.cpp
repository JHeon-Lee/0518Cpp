#include <iostream>

using namespace std;

struct person // typedef 없이 바로 사용 가능 - main에서 만들어졌을 때 생성
{
	int age;
	float weght = 50.0f;
	std::string name = "AA";

	void __thiscall Print(/* person* */) // C++은 함수도 넣을 수 있음 - 예외로 함수는 코드영역에 들어감
	{
		cout << age << endl;
	}
};

int main()
{
	person p{ 10,50.2f,"BB" };

	person p2;

	p.Print();
	p2.Print();

	// person::Print(); --> 불가

	return 0;
}