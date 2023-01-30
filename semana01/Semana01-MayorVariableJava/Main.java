// debe agregar esta librería para leer de teclado
// Wow: que es una librería?????

import java.util.Scanner;

class Main {
  public static void main(String[] args) {
    int a;
    int b;
    // crear un objeto Scanner:
    Scanner input = new Scanner(System.in);
    System.out.println("Ingrese valor de a:");
    a = input.nextInt();
    System.out.println("Ingrese valor de b:");
    b = input.nextInt();
    if (a > b) {
      System.out.println("La variable a es mayor que la variable b");
    } else {
      System.out.println("La variable b es mayor que la variable a");
    }
    // este programa tiene un error o bug de lógica, cual es?
    // en realidad hay 2 errores, cuales?
  }
}