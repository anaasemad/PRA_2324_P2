#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>


int Partition(const std::vector<T>& v, int ini, int fin);
template <typename T>
int BusquedaBinaria(int X,const std::vector<T>& v, int ini, int fin){
	if (ini>fin){
		std::cout<<"Array no encontrado";
		return 0;
	}
	int medio=(ini+fin)/2;
	if(v[medio]==X){
		return medio;}
	else if(v[medio]>X){
		return BusquedaBinaria(X,v,ini,medio-1);}
	else{ 
		return BusquedaBinaria(X,v,medio+1,fin);}
}
template <typename T>
int BusquedaBinaria_INV(int X,const std::vector<T>& v,int ini, int fin){
	if(ini>fin){
		std::cout<<"Array no encontrado";
		return 0;
	}
	int medio=(ini+fin)/2;
	if(v[medio]==X){
		return medio;}
	else if(v[medio]>X){
		return BusquedaBinaria_INV(X, v, medio+1,fin);
	}else{ 
		return BusquedaBinaria_INV(X,v,ini,medio-1);}
}
template <typename T>
void QuickSort(const std::vector<T>& v, T ini, T fin){
	if(ini<fin){
		T pivot=Partition(v, ini, fin);
		QuickSort(v,ini,pivot-1);
		QuickSort(v,pivot+1,fin);}
}
template <typename T>
int Partition(const std::vector<T>& v, T ini,T fin){
	T  x=v[fin];
	T i=ini;
	for(T j=ini;j<fin-1;j++){
		if(v[j]<=x){
			std::swap(v[i],v[j]);
			i++;}}
	std::swap(v[i],v[fin]);
	return i;
}
