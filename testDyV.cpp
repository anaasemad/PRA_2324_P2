#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

int main(){
// Búqueda binaria normal con int
	std::vector<int> a{1,2,3,4,5,6};
	int X = 2;
	int ini = 0;
	int fin = 5;
	size_t b = a.size();
	if(BusquedaBinaria(X, a, ini, fin)){
		std::cout << "Sí que ha encontrado el valor" << std::endl;
	} else {
		std::cout << "No que ha encontrado el valor" << std::endl;
	}
	std::cout << "El vector es: {";
	for (int i = 0; i < b; i++){
		std::cout << a[i];
	}
	std::cout << "}" <<"\n";
// El inverso float
	std::vector<float> x{6,5,4,3,2,1};
	float A = 2;
	float Ini = 0;
	float Fin = 5;
	size_t y = x.size();
	if(BusquedaBinaria_INV(A, x, Ini, Fin)){
		std::cout << "Sí que ha encontrado el valor" << std::endl;
	} else {
		std::cout << "No que ha encontrado el valor" << std::endl;
	}
	std::cout << "El vector es: {";
	for (int i = 0; i < y; i++){
		std::cout << x[i];
	}
	std::cout << "}" <<"\n";

// QuickSort con los tiempos de ejecución
	std::vector<int> z{3,4,5,1,6,2,9};
	int inic = 0;
	size_t Z = z.size();
	int finn = Z-1;
	std::cout << "El vector antes de ordenar con QuickSort {";
	for (int i = 0; i < Z; i++){
		std::cout << z[i];
	}
	std::cout << "}" << std::endl;

	// Lo ordenamos con el método QuickSort
	auto start = std::chrono::system_clock::now();
	QuickSort(z, inic, finn);
	auto end = std::chrono::system_clock::now();

	std::cout << "El vector después de ordenar con QuickSort {";
	for (int i = 0; i < Z; i++){
		std::cout << z[i];
	}
	std::cout << "}" << std::endl;

	std::chrono::duration<float, std::milli> duration = end -start;
	std::cout << "Time: " << duration.count() << "ms" << std::endl;
	
	return 0;
}
