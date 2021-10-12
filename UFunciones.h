//
// Created by MARIA HILDA BERMEJO RIOS on 10/12/21.
//

#ifndef EJEMPLO2_UFUNCIONES_H
#define EJEMPLO2_UFUNCIONES_H

#include <iostream>
#include <iomanip>
using namespace std;

using TEntero = unsigned long int;

TEntero  *  dimensionarArreglo(TEntero num);
void  llenarArreglo(TEntero *pA , TEntero num, int *mul5, int *mul7);
void imprimir(TEntero *pA, TEntero  num);
void llenarMultiplos(TEntero  *pA, TEntero num, TEntero* pM5, int multiplo);
void liberarMemoria(TEntero* & pA);
#endif //EJEMPLO2_UFUNCIONES_H
