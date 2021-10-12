
#include "UFunciones.h"

using namespace  std;

int main()
{
  TEntero num;
  TEntero  *pA= nullptr;
  int mul5, mul7;
  TEntero *pM5=nullptr;
  TEntero *pM7= nullptr;

  srand(time(nullptr));
  cout << "Numero de elementos de arreglo : ";
  cin >> num;

  pA = dimensionarArreglo(num);
  llenarArreglo(pA,num, &mul5, & mul7 );
  imprimir(pA,num);
  pM5 = dimensionarArreglo(mul5);
  pM7 = dimensionarArreglo(mul7);
  llenarMultiplos(pA,num, pM5,5);
  llenarMultiplos(pA,num,pM7,7);
  cout << "\nMultiplos de 5\n";
  imprimir(pM5,mul5);
  cout << "\nMultiplos de 7\n";
  imprimir(pM7,mul7);
  //-----  liberar el espacio de memoria!!!

  liberarMemoria(pA);
  liberarMemoria(pM5);
  liberarMemoria(pM7);
  return 0;
}


