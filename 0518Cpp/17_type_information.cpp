#include <iostream>

using namespace std;

/*
	Template
*/

// int add(int a, int b) { return a + b; }
// float add(float a, float b) { return a + b; }
// double add(double a, double b) { return a + b; } ±ÍÂúÀ½ --> template »ç¿ë

template <typename T>
T add(T a, T b)
{
	return a + b;
}

int main()
{
	add(10, 20);
	add(10.0f, 20.1f);
	add(10.0, 20.5);

	return 0;
}