#include "funciones.h"

void menu()
{
	int opcion_menu_principal;
	cout << "Bienvenido." << endl;
	cout << "1. Jugar" << endl << "2. Instrucciones" << endl << "3. Creditos" << endl << "4. Salir" << endl;
	cout << "Selecciona opcion: ";
	cin >> opcion_menu_principal;
	while (opcion_menu_principal > 4 || opcion_menu_principal < 1)
	{
		cout << endl << "Error. Opcion incorrecta." << endl << "Selecciona opcion: ";
		cin >> opcion_menu_principal;
	}
}