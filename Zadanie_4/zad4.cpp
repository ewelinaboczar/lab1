#include <iostream>

using namespace std;

int main()
{
	int a, b, sumaA = 0, sumaB=0;
	cout << "Zadanie 4\nSprawdzimy czy podane przez Ciebie liczby sa liczbami skojarzonymi." << endl;
	cout << "Podaj pierwsza liczbe:\t";
	cin >> a;
	cout << "\nPodaj druga liczbe:\t";
	cin >> b;
	cout << endl;

	for (int i = 1; i <= a/2; i++)
	{
		if ((a%i) == 0)
		{
			sumaA += i;
		}
	}

	for (int i = 1; i <= b/2; i++)
	{
		if ((b%i) == 0)
		{
			sumaB += i;
		}
	}

	if (sumaA == (b + 1) && sumaB == (a+1))
	{
		cout << "Podane liczby " << a << " i " << b << " sa liczbami skojarzonymi" << endl;
	}
	else
	{
		cout << "Podane liczby " << a << " i " << b << " nie sa liczbami skojarzonymi" << endl;
	}

	return 0;
}
