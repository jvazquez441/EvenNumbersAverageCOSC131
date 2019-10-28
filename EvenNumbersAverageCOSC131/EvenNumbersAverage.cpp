#include <iostream>
using namespace std;

// Jonathan Vazquez Rivera

int main()
{
	//Calcular el promedio de la suma de los numeros pares entre 500 y 1200
	int i = 500;
	double promedio, pares, sum;
	promedio = pares = sum = 0;

	while (i <= 1200)
	{
		if (i % 2 == 0)
		{
			sum = sum + i;
			pares++;
			cout << "Par # " << i << " - Suma: " << sum << endl;
		}
		i++;
	}

	promedio = sum / pares;

	cout << "El promedio de la suma de numeros pares entre 500 y 1200 es: " << promedio << endl;
	cout << "La cantidad de numeros pares encontrados es: " << pares;

	return 0;
}