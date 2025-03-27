#ifndef ALGORITMOS_HPP
#define ALGORITMOS_HPP

void Intercambiar(int* a, int* b);

void InsercionOrden(int* arr, int tamano);

void OrdBurbuja(int* arr, int tamano);

void OrdBOptimizado(int* arr, int tamano);

void OrdSeleccion(int* arr, int tamano);

void Merge(int arr[], int inicio, int medio, int fin);

void MergeSort(int arr[], int inicio, int fin);

void OrdMezcla(int* arr, int tamano);

int Partition(int arr[], int inicio, int fin);

void QuickSort(int arr[], int inicio, int fin);

void OrdRapido(int* arr, int tamano);

void MaxHeapify(int arr[], int tamano, int i);

void BuildMaxHeap(int arr[], int tamano);

void HeapSort(int arr[], int tamano);

void Shell(int* arr, int tamano);

int aleatorio(int inicio, int fin);

#endif
