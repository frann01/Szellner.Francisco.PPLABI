#include "color.h"
#include "tipo.h"

#ifndef MASCOTA_H_INCLUDED
#define MASCOTA_H_INCLUDED

typedef struct
{
    int id;
    char nombre[51];
    int idTipo;
    int idColor;
    int edad;
    int isEmpty;
} eMascota;

#endif // MASCOTA_H_INCLUDED


void inicializarMascotas(eMascota lista[], int tam);
int hayLugar(eMascota lista[], int tam);
int altaMascota(eMascota lista[], int tam, int* pLegajo, eTipo Tipos[], int tamTip, eColor colores[], int tamC);
int listaVacia(eMascota lista[], int tam);
void modificarMascota(eMascota lista[], int tam, eTipo Tipos[], int tamTip);
int findMascotaByID(eMascota list[], int len, int id);
int listMascotas(eMascota list[], int len);
void mostraMascota(eMascota mascota);
int bajaMascota(eMascota lista[], int tam);
int cargarNombreMascota(int id, eMascota mascotas[],int tam, char desc[]);
int ordenarMascotas(eMascota lista[], int tam);

