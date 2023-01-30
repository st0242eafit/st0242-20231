#include <stdio.h>

// función para convertir de dolar a pesos
float convertir_dolar_peso(float valor_dolar, float tasa_conversion){
  float valor_pesos;
  valor_pesos = valor_dolar * tasa_conversion;
  return valor_pesos;
}

// realice la función para convertir pesos a dolares:

int main(void) {
  float dolar_valor;
  float pesos_valor;
  float total_dolares;
  float total_pesos;
  float tasa_conversion_d2p;
  float tasa_conversion_p2d;

  printf("Ingrese la cantidad de dolares:");
  scanf("%f",&dolar_valor);
  printf("Ingrese la tasa de conversión de dolares a pesos:");
  scanf("%f",&tasa_conversion_d2p);
  total_pesos = convertir_dolar_peso(dolar_valor,tasa_conversion_d2p);
  printf("Total Pesos: %f \n", total_pesos);
  // termine este programa:
  // des-comentaree las lineas siguientes y codifique la función: convertir_peso_dolar()
  printf("Ingrese la cantidad de pesos:");
  scanf("%f",&pesos_valor);
  printf("Ingrese la tasa de conversión de pesos a dolares:");
  scanf("%f",&tasa_conversion_p2d);
  //total_dolares = convertir_peso_dolar(pesos_valor,tasa_conversion_p2d);
  printf("Total Dólares: %f \n", total_dolares);
  return 0;
}