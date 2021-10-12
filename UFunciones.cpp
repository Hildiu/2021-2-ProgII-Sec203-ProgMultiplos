//
// Created by MARIA HILDA BERMEJO RIOS on 10/12/21.
//

#include "UFunciones.h"

TEntero  *  dimensionarArreglo(TEntero num)
{
  return new TEntero[num];
}



void  llenarArreglo(TEntero *pA , TEntero num, int *mul5, int *mul7)
{
  *mul5 =0;
  *mul7=0;
  for( int i=0; i<num; i++)
  {
    pA[i] = rand() % 1000;
    if (pA[i] % 5 == 0)
      *mul5 = *mul5 + 1;
    if (pA[i] % 7 == 0)
      *mul7 = *mul7 + 1;
  }
}

void imprimir(TEntero *pA, TEntero  num)
{
  cout << "\n";
  for( int i=0; i<num; i++)
    cout << setw(5) << pA[i];
}

void llenarMultiplos(TEntero  *pA, TEntero num, TEntero* pM5, int multiplo)
{
  int c5=0;
  for(int i=0; i<num; i++)
    if(pA[i] % multiplo==0)
    {
      pM5[c5++]= pA[i];
    }
}


void liberarMemoria(TEntero* & pA)
{
  delete []pA;
  pA = nullptr;
}