#include <iostream>

using namespace std;

struct Data
{
	int a;
	int b;
	int c;
};

class Person
{
public: // ���� --> struct�� �⺻ ����������
	void Work()
	{

	}

	void Food()
	{
		weight++;
	}

	void Sleep()
	{
		height++;
	}

private: // Ŭ���� ���ο����� ��� --> class�� �⺻ ����������
	string name;
	int age;
	float height;
	float weight;
	bool favorite;

protected: // �θ�, �ڽĸ� ���

};

int main()
{
	Person p; // object, instance --> �ʱ�ȭ �Ұ���
	// p. --> �ƹ��͵� ������ --> ���������� ����ؾ���
	
	p.Food();

	Data d;
	d.a;

	return 0;
}