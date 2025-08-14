#include <stdio.h>
#define FILAS 3
#define COLUMNAS 2
// void saludar(){
// 	printf("Hola Mundo!\n");
// 	return;
// }

// int sumar(int a, int b){
// 	printf("La suma es: %d\n", a + b);
// 	return a + b;
// }

// int mayor(int a, int b, int c){
// 	int mayor = a;
// 	if(b > mayor){
// 		mayor = b;
// 	}
// 	if(c > mayor){
// 		mayor = c;
// 	}
// 	printf("El mayor es: %d\n", mayor);
// 	return mayor;
// }

// int isMayorArreglo(int arr[], int n){
// 	int mayor = arr[0];
// 	for(int i = 1; i < n; i++){
// 		if(arr[i] > mayor){
// 			mayor = arr[i];
// 		}
// 	}
// 	printf("El mayor es: %d\n", mayor);
// 	return mayor;	
// }
// int whereIsValue(int arr[], int n, int value){
// 	for(int i = 0; i < n; i++){
// 		if(arr[i] == value){
// 			printf("El valor se encuentra en la posicion: %d\n", i);
// 			return i;
// 		} 
// 	}

// 	printf("El valor no se encuentra en el arreglo\n");
// 	return -1;	
// }


// int isPrime(int n){
// 	if(n < 2){
// 		return 0;
// 	}
// 	// Solo necesitamos comprobar divisores hasta la raíz cuadrada de n.
// 	for(int i = 2; i * i <= n; i++){
// 		if(n % i == 0){
// 			return 0;
// 		}
// 	}
// 	return 1;
// }

// void mostrarTranspuesta(int filas, int columnas, int matriz[filas][columnas]){
// 	for (int j = 0; j < filas; j++){
// 		for (int i = 0; i < columnas; i++){
// 			printf("%d ", matriz[i][j]);
// 		}
// 		printf("\n");
// 	}
	
	
// }

int sumaArrayElements(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += arr[i];
    }
    return suma;
}
int main()
{
	// saludar();
	


	// int numero;
	// printf("Ingresa un numero para saber si es primo: ");
	// scanf("%d", &numero);

	// if(isPrime(numero)){
	// 	printf("El numero %d es primo.\n", numero);
	// } else {
	// 	printf("El numero %d no es primo.\n", numero);
	// }
	// return 0;

	//   int matriz[FILAS][COLUMNAS] = {
    //     {1, 2},
    //     {3, 4},
    //     {5, 6}
    // };

    // printf("Transpuesta:\n");
    // mostrarTranspuesta(FILAS, COLUMNAS, matriz);
	 int numeros[] = {1, 2, 3, 4, 5};
    int total = sumaArrayElements(numeros, 5);
    printf("La suma de los elementos es: %d\n", total);
    return 0;
}

