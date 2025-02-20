#include<stdio.h>

//prototipos de funciones (no dice ni que hace, ni como lo hace)
void pasarValor(int);
void pasarReferencia(int *);


int main(){
  int nums[] = {55,44,33,22,11};
  int *ap, cont;
  ap = nums;
  
  printf("Pasar valor: %d\n", *ap);
  pasarValor(*ap);
  printf("Pasar referencia: %d\n", *ap);
  pasarReferencia(ap);
  printf("Valor final: %d\n", *ap); //se modifica el contenido porque se pasa con referencia y este es un apuntador
  return 0;
}


void pasarValor(int equis){
  printf("%d\n", equis);
  equis = 128;
  printf("%d\n", equis);
}

void pasarReferencia(int *equis){
  printf("%d\n", *equis);
  *equis = 128;
  printf("%d\n", *equis);
}
