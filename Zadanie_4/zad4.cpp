#include <iostream>

using namespace std;

int main()
{
	int a, b, suma = 0;
	cout << "Zadanie 4\nSprawdzimy czy podane przez Ciebie liczby sa liczbami skojarzonymi." << endl;
	cout << "Podaj pierwsza liczbe:\t";
	cin >> a;
	cout << "\nPodaj druga liczbe:\t";
	cin >> b;
	cout << endl;

	for (int i = 1; i < a; i++)
	{
		if ((a%i) == 0)
		{
			suma += i;
		}
	}

	if (suma == (b + 1))
	{
		cout << "Podane liczby " << a << " i " << b << " sa liczbami skojarzonymi" << endl;
	}
	else
	{
		cout << "Podane liczby " << a << " i " << b << " nie sa liczbami skojarzonymi" << endl;
	}

	return 0;
}
