#include "tipo.h"
#include <stdio.h>
#include <stdlib.h>


/** \brief Busca un tipo por su ID y devuelve su posicion en el array
 *
 * \param list[] eTipo
 * \param len int
 * \param id int
 * \return int
 *
 */
int encontrarTipo(eTipo list[], int len, int id)
{
    int bandera=-1;
    for(int i = 0; i<len; i++)
    {
        if(list[i].id==id)
        {
            bandera=i;
            break;
        }
    }
    return bandera;
}



void mostraTipo(eTipo tipo)
{
    printf("%d     %10s    \n", tipo.id, tipo.descripcion);
}


int mostrarTipo(eTipo tipos[], int tam)
{
    int todoOk=0;
    printf("ID     Descripcion    \n");
    printf("------------------\n");
    for(int i=0; i<tam; i++)
    {
        mostraTipo(tipos[i]);
        todoOk=1;
    }
    return todoOk;
}
