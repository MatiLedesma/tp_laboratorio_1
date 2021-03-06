#include "Menu.h"

int Menu()
{
	sEmployee employee[TAM];
	int opc;
	int opcSalir;
	int id;
	id = 0;
	initEmployee(employee, TAM);
inicio:
	do
	{
		printf("1. ALTA\n");
		printf("2. MODIFICAR\n");
		printf("3. BAJA\n");
		printf("4. INFORMAR\n");
		printf("4. 1. Listado de los empleados ordenados alfabeticamente por apellido y sector\n");
		printf("4. 2. Total y promedio de los salarios, y cuantos empleados superan el salario promedio\n");
		printf("5. SALIR\n");
		GetInt(&opc, "> : ");

		switch(opc)
		{
		case 1:
			addEmployee(employee, TAM, &id);
			break;
		case 2:
			modifyEmployee(employee, TAM);
			break;
		case 3:
			removeEmployee(employee, TAM);
			break;
		case 4:
			printf("1.\n");
			showEmployee(employee, TAM);
			printf("2.\n");
			averageSalary(employee, TAM);
			break;
		case 5:
			GetInt(&opcSalir, "Desea salir? 1(si)/2(no)");
			if (opcSalir == 1)
			{
				break;
			}
			else
			{
				if (opcSalir == 2)
				{
					goto inicio;
				}
			}
			break;
		default:
			printf("No es una opcion...\n");
			break;
		}
	}while (opc != 5);

	return 0;
}
