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
public: // 공개 --> struct의 기본 접근지정자
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

private: // 클래스 내부에서만 사용 --> class의 기본 접근지정자
	string name;
	int age;
	float height;
	float weight;
	bool favorite;

protected: // 부모, 자식만 사용

};

int main()
{
	Person p; // object, instance --> 초기화 불가능
	// p. --> 아무것도 안잡힘 --> 접근지정자 사용해야함
	
	p.Food();

	Data d;
	d.a;

	return 0;
}