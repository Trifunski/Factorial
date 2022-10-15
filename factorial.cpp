#include <conio.h>
#include <stdio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(65001); // agregar caracteres para que muestre las tildes 
    system("cls"); // Limpiar consola
    system("color a"); // Cambiar color a la consola

    // Declarar variables
    int num;
    long factorial;

    // Pedir el número que vamos a calcular su factorial
    printf("Introduce un número: \n");
    scanf("%d", &num);

    factorial = 1;

    // Ejecutar un bucle para calcular el factorial del número introducido
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    // Mostrar el resultado por la consola
    printf("El factorial de %d es: %d \n", num, factorial);
    system("pause");

}