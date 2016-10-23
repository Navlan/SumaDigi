#include <iostream>
using namespace std;

int pedirNumPos();
int sumaDig(int num);

int pedirNumPos()
{
	int num;
	cout << "Introduce un numero positivo." << endl;
	cin >> num;
	while (num <= 0)
	{
		cout << "Introduce un numero positivo." << endl;
		cin >> num;
	}
	return num;
}

int sumaDig(int num)

	{
		suma = suma + (num % 10);
		num = num / 10;
	}
	return suma;
}

int main()
{
	int num = pedirNumPos();
	cout << "La suma de los digitos de " << num << " es " << sumaDig(num) << "." << endl;
	return 0;
}
