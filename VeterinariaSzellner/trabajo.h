#include "fecha.h"
#include "mascota.h"
#include "servicio.h"
#ifndef TRABAJO_H_INCLUDED
#define TRABAJO_H_INCLUDED

typedef struct
{
    int id;
    int idMascota;
    int idServicio;
    eFecha fecha;
    int isEmpty;
}eTrabajo;

#endif // TRABAJO_H_INCLUDED


int altaTrabajo(eTrabajo trabajos[], int tam, eMascota mascotas[], int TamMas, eServicio servicios[], int TamS, int* trabajoId);
int buscarTrabajoLibre(eTrabajo lista[], int tama);
void inicializarTrabajo(eTrabajo lista[], int tam);
int mostrarTrabajos(eTrabajo lista[], int tama, eMascota mascotas[], int TamM,eServicio servicios[], int TamS);
