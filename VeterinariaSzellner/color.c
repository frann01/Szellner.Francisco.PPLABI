#include "color.h"
#include <stdio.h>
#include <stdlib.h>

/** \brief Busca un color por ID
 *
 * \param list[] eColor array de colores
 * \param len int tamaño del array
 * \param id int Id a buscar
 * \return int -1 en caso de error
 *
 */
int encontrarColor(eColor list[], int len, int id)
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

/** \brief Mustra los datos de un color solo
 *
 * \param color eColor color a mostrar
 * \return void
 *
 */
void mostraColor(eColor color)
{
    printf("%d     %10s    \n", color.id, color.descripcion);
}


/** \brief muestra todos los colores
 *
 * \param colores[] eColor array de colores
 * \param tam int tamañod del array
 * \return int 0 en casdo de error 1 en caso de TodoOk
 *
 */
int mostrarColores(eColor colores[], int tam)
{
    int todoOk=0;
    printf("ID     Descripcion    \n");
    printf("------------------\n");
    for(int i=0; i<tam; i++)
    {
        mostraColor(colores[i]);
        todoOk=1;
    }
    return todoOk;
}
