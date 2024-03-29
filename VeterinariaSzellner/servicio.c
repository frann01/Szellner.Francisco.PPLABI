#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "servicio.h"


/** \brief Prersenta el menu y devuelve la respuesta del usuario
 *
 * \return int respuesta del usuario
 *
 */
int menu()
{
    int respuesta;
    printf("***Veterinaria*** \n\n");
    printf("1) Alta mascota\n");
    printf("2) Modificar mascota \n");
    printf("3) Baja mascota\n");
    printf("4) Listar mascotas \n");
    printf("5) lista Tipos  \n");
    printf("6) listar colores \n");
    printf("7) listar Servicios \n");
    printf("8) Alta trabajo\n");
    printf("9) listar trabajos\n");
    printf("10) Salir\n");
    printf("Ingrese opcion: \n");
    fflush(stdin);
    scanf("%d", &respuesta);
    fflush(stdin);
    return respuesta;
}


void mostrarServicio(eServicio servicio)
{
    printf("%d   %10s     %5.2f \n", servicio.id, servicio.descripcion, servicio.precio);
}


int mostrarServicios(eServicio servicios[], int tam)
{
    int todoOk=0;
    printf("ID     Descripcion     precio \n");
    printf("-----------------------------\n");
    for(int i=0; i<tam; i++)
    {
        mostrarServicio(servicios[i]);
        todoOk=1;
    }
    return todoOk;
}

/** \brief Busca la descripcion de un servicio y la carga en una variable
 *
 * \param id int
 * \param servicios[] eServicio
 * \param tam int
 * \param desc[] char
 * \return int
 *
 */
int cargarDescServicio(int id, eServicio servicios[],int tam, char desc[])
{
    int todoOk =1;
    if(id>=2000 && id<=2002 && servicios != NULL && tam > 0)
    {
        for(int i=0; i<tam; i++)
        {
            if(servicios[i].id==id)
            {
                strcpy(desc, servicios[i].descripcion);
                todoOk=0;
                break;
            }
        }
    }
    return todoOk;
}
