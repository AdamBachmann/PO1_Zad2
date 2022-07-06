#include <iostream>

using namespace std;

void funkcja_kwadratowa(float a, float b, float c, float& x1, float& x2)
{
	if (a == 0)
	{
		cout << "Prosze podac parametr a" << endl;
	}
	else
	{
		if (b * b - 4 * a * c >= 0)
		{
			x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		}
		else
		{
			cout << "Zespolone, to nie teraz :)" << endl;
		}
	}
}

int main()
{
	float a1 = 1, b1 = 1, c1 = -2, x11, x21;

	funkcja_kwadratowa(a1, b1, c1, x11, x21);
	cout << x11 << endl << x21 << endl;
	return 0;
}