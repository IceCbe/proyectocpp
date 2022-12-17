#include "funciones.h"

int menu()
{
	int opcion_menu_principal;
	cout << "Bienvenido." << endl;
	cout << "1. Fibonacci" << endl << "2. Otros" << endl << "3. Otros" << endl << "4. Salir" << endl;
	cout << "Selecciona opcion: ";
	cin >> opcion_menu_principal;
	while (opcion_menu_principal > 4 || opcion_menu_principal < 1)
	{
		cout << endl << "Error. Opcion incorrecta." << endl << "Selecciona opcion: ";
		cin >> opcion_menu_principal;
	}
	return opcion_menu_principal;
}

int main()
{
	int opcion = menu();
	switch (opcion)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	default:
		cout << opcion;
	};

	return 0;
}