/*
 ============================================================================
 Name        : clase.c
 Author      : ianir
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 2
typedef struct
{
	int id;
	char nombre[20];
	char sexo;
	int edad;
	float altura;
	int isEmpty;
}ePersona;
int menu();
int inicializarPersonas(ePersona lista[], int tam);
int buscarLibre(ePersona lista[], int tam);
int altaPersona(ePersona lista[], int tam);
void mostrarPersona(ePersona p);
int mostrarPersonas(ePersona lista[], int tam);

int main(void) {
	char seguir ='s';
	ePersona lista[TAM];

	if(!inicializarPersonas(lista, TAM)){
		printf("Problema en inicializar personas");
	}
	do{
		switch(menu())
		{
		case 1: if(!altaPersona(lista, TAM)){
			printf("No se pudo realizar el alta");
		}
			break;
		case 2: //baja
			break;
		case 3:	//modificar
			break;
		case 4:// ordena
			break;
		case 5: //listar
			break;
		case 6: // sale mas  seguir = 'n';
			break;
		default: //poner nose opción invalida

		}


	}while(seguir=='s');

	return 0;
}
int menu()
{
int opcion;
printf("***      ABM PERSONAS       ***");
printf("1- Alta persona\n");
printf("2- Baja persona\n");
printf("3- Modificar persona\n");
printf("4- Ordenar personas\n");
printf("5- Listar personas\n");
printf("6- Salir.\n");
scanf("%d"&opcion);
return opcion;

}
int inicializarPersonas(ePersona lista[], int tam)
{
	int todoOk=0;
	if(lista != NULL && tam >0)
	{
		for (int i=0; i < tam; i++)
		{
			lista[i].imEmpty = 1;
		}
		todoOk = 1;
	}
	return todoOk;

}
int buscarLibre(ePErsona lista[], int tam)
{
	int posicionLibre=-1;
	for(int i=0;i<tam;i++)
	{
		if(lista[i].isEmpty)
		{
			posicionLibre=i;
			break;
		}



	}

	return posicionLibre;
}

int altaPersona(ePersona lista[], int tam)
{
	int todoOk=0;
	int indice;
	ePersona auxPersona;
	if(lista !=NULL && tam >0)
	{
		indice = buscarLibre(lista, tam);
		if(indice ==-1)
		{
			printf("No hay lugar\n");
		}
		else
		{
			printf("Ingrese id: ");
			scanf("%d", &auxPersona.id);
			printf("Ingrese nombre: ");
			fflush(stdin);
			gets(auxPersona.nombre);

			printf("Ingrese sexo: ");
			scanf("c", &auxPersona.sexo);

			printf("Ingrese edad: ");
			scanf("%d", &auxPersona.edad);

			printf("Ingrese altura: ");
			scanf("%.2f", &auxPersona.altura);
			auxPersona.isEmpty=0;
			todoOk=1;
		}
	}

	return todoOk;

}
void mostrarPersona(ePersona p)
{
	int todoOk=0;
	if(lista!=NULL&& tam >0)
	{


		todoOk=1;
	}
	return todoOk;
}
int mostrarPersonas(ePersona lista[], int tam)
{
	 int todoOk =0;
	 if(lista !=NULL && tam >0)
	 {
		 system("cls");
		  printf("  *** Lista de Personas ***\n");
		  printf("-----------------------------------------------------\n");
		  printf("ID  Nombre  Sexo  Edad  Altura\n");
		  printf("--------------------------------------\n");
		 for(int i=0;i<tam;i++)
		 {
			 mostrarPersona(lista[i]);

		 }
		 printf("--------------------------------------------------------\n");
		todoOk=1;
}
return todoOk;
}

