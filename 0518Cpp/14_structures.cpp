#include <iostream>

using namespace std;

struct person // typedef ���� �ٷ� ��� ���� - main���� ��������� �� ����
{
	int age;
	float weght = 50.0f;
	std::string name = "AA";

	void __thiscall Print(/* person* */) // C++�� �Լ��� ���� �� ���� - ���ܷ� �Լ��� �ڵ念���� ��
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

	// person::Print(); --> �Ұ�

	return 0;
}