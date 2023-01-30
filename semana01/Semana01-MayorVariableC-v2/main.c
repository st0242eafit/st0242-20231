#include <stdio.h>

int main(void) {
  /* 
  declaración de variables:
  */
  int a,b;
  printf("Ingrese valor de a:");
  // que función hace ese &  ????? wow!!!!
  scanf("%d",&a);
  printf("Ingrese valor de b:");
  scanf("%d",&b);
  // convertir de string a entero:
  if (a > b) {
    printf("la variable a es mayor que la variable b\n");
  } else {
    printf("la variable b es mayor que la variable a\n");
  }
  return 0;
  // este programa tiene un bug o error de lógica, cual es?
}