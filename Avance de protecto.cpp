#include <iostream>
using namespace std;

int main()
{
	char nombre[100];
	int hora;
	char nombret[100];
	char desc[1000];
	int preut;
	int ctr;
	int cu, total=0;
	int opc;

	do {
		cout << "**********************" << endl;
		cout << "Seleccione una opcion" << endl;
		cout << "1. Agendar una cita" << endl;
		cout << "2. Modificar una cita." << endl;
		cout << "3. Eliminar cita." << endl;
		cout << "4. Lista de citas vigentes" << endl;
		cout << "5. Limpiar pantalla" << endl;
		cout << "6. Salir" << endl;
		cout << "**********************" << endl;
		cin >> opc;

		switch (opc)
		{
		case 1:
			do {
				cout << "Bienvenido al apartado de agendacion de citas" << endl;
				cout << "Ingresa tu nombre" << endl;
				cin >> nombre;
				do {
					cout << "Ingresa la hora del tratamiento (en formato 24hrs)" << endl;
					cin >> hora;
					if (hora >= 26)
					{
						cout << "La hora no es valida." << endl;
					}
				} while (hora >= 26);
				cout << "Ingrese el nombre del tratamiento." << endl;
				cin >> nombret;
				cout << "Ingrese la descripcion del tratamiento" << endl;
				cin >> desc;
				cout << "Introduce el precio del tratamiento" << endl;
				cin >> preut;
				cout << "Ingresa la cantidad del tratamiento" << endl;
				cin >> ctr;
				total = preut * ctr;
				cout << "El total a pagar es:" << endl << total << endl;
				cout << "Desea registrar otra cita?" << endl << "1. Si o 2. No" << endl;
				cin >> opc;
			} while (opc == 1);
			break;

		case 2:
			cout << "Opcion no disponible" << endl;
			break;

		case 3:
			cout << "Opcion no disponible" << endl;
			break;

		case 4:
			cout << "Opcion no disponible" << endl;
			break;

		case 5:
			cout << "Opcion no disponible" << endl;
			break;

		default:
			cout << "La opcion no es valida" << endl;
		}
		cout << "Quieres regresar al menu?" << endl << "Presiona 1 para regresar, 2 para salir" << endl;
		cin >> opc;
	} while (opc == 1);

}
