#include <stdio.h>

void main(void) {
  /* 
  declaración de variables:
  */
  char a_str[10];
  char b_str[10];
  int a,b;
  printf("Ingrese valor de a:");
  scanf("%s",a_str);
  printf("Ingrese valor de b:");
  scanf("%s",b_str);
  // convertir de string a entero:
  a = atoi(a_str);
  b = atoi(b_str);
  if (a > b) {
    printf("la variable a es mayor que la variable b\n");
  } else {
    printf("la variable b es mayor que la variable a\n");
  }
  // este programa tiene un bug o error de lógica, cual es?
  // en realidad hay 2 errores.
}