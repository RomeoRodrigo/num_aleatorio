#include <iostream>
#include <random>
#include <limits>

using namespace std;

// Funcion para generar un numero aleatorio en un rango dado
int generarNumeroAleatorio(int minimo, int maximo) {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> distribucion(minimo, maximo);
	
	return distribucion(gen);
}

int main() {
	cout << "Numeros aleatorios (mayor y menor):" << endl;
	for (int i = 0; i < 2; ++i) {
		int numero1 = generarNumeroAleatorio(1, 100);
		int numero2 = generarNumeroAleatorio(1, 100);
		
		// Determinar cual es el mayor y cual es el menor
		int mayor = max(numero1, numero2);
		int menor = min(numero1, numero2);
		
		cout << "Mayor: " << mayor << ", Menor: " << menor << endl;
	}
	
	return 0;
}

