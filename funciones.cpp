#include "funciones.h"

void Fibonacci()
{
	int i, n, primer = 0, segon = 1, aux;
	cout << "Quantos terminos de Fibonacci quieres ver? ";
	cin >> n;
	while (n > 40)
	{
		cout << endl << "No se pueden visualizar mas de 40 terminos de Fibonacci" << endl;
		cout << "Quantos terminos de Fibonacci quieres ver? ";
		cin >> n;
	}
	for (i = 0;i < n; i++)
	{
		cout << primer << " ";
		aux = primer + segon;
		primer = segon;
		segon = aux;
	}
}