#include <stdio.h>
#include <stdlib.h>
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "mascota.h"
#include "trabajo.h"

#define TAM 1000
#define TAMT 100
#define TAMTIP 5
#define TAMS 3
#define TAMC 5
int main()
{
    int respuesta;
    char salir;
    int IdMascotas=3000;
    int trabajoId=6000;
    eMascota mascotas[TAM];
    eTrabajo trabajos[TAMT];
    eTipo tipos[TAMTIP]={{1000, "Ave"}, {1001, "Perro"},{1002, "Gato"},{1003, "Roedor"},{1004, "Pez"}};
    eServicio servicios[TAMS]={{2000, "Corte", 250}, {2001, "Desparacitado", 300}, {2002, "Castrado", 400}};
    eColor colores[TAMC]={{5000, "Negro"}, {5001, "Blanco"},{5002, "Gris"},{5003, "Rojo"},{5004, "Azul"}};
    inicializarMascotas(mascotas,TAM);
    inicializarTrabajo(trabajos,TAMT);

    do
    {
        respuesta=menu();
        switch(respuesta)
        {
        case 1:

            system("cls");
            altaMascota(mascotas, TAM, &IdMascotas, tipos, TAMTIP, colores, TAMC);
            break;

        case 2:
            if(listaVacia(mascotas, TAM)==-1)
            {
                printf("No hay ninguna mascota ingresado\n");
                printf("Primero ingrese una mascota\n");
            }
            else
            {
                modificarMascota(mascotas,TAM, tipos, TAMTIP);
            }

            break;

        case 3:
            if(listaVacia(mascotas, TAM)==-1)
            {
                printf("No hay ninguna mascota ingresada\n");
                printf("Primero ingrese una mascota\n");
            }
            else
            {
                bajaMascota(mascotas, TAM);
            }

            break;

        case 4:
            listMascotas(mascotas, TAM);
            break;

        case 5:
            mostrarTipo(tipos, TAMTIP);
            break;

        case 6:
            mostrarColores(colores, TAMC);
            break;

        case 7:
            mostrarServicios(servicios, TAMS);
            break;

        case 8:
            altaTrabajo(trabajos, TAMT, mascotas,TAM, servicios, TAMS, &trabajoId);
            break;

        case 9:
            mostrarTrabajos(trabajos, TAMT, mascotas, TAM, servicios, TAMS);
            break;


        case 10:
            printf("Seguro desea salir?\n");
            fflush(stdin);
            salir = getchar();
            break;

        default:
            printf("Opcion incorrecta!\n");
        }
        system("pause");
        fflush(stdin);
        system("cls");

    }
    while(salir != 's');
    return 0;
}
