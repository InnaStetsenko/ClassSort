
#include <iostream>
using namespace std;

class Sorter
{
private:
	Sorter() {}
public:
	static void Bubble(int* ar, unsigned int size);//пузырковая

	static void selectionSort(int* ar, unsigned int size);// выбором

	static void insertionSort(int* ar, unsigned int size);// вставками

	static void mergeSort(int ar[], int lenD);// слиянием  

	static void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR);//слиянием  продолжение

	static void quickSort(int* ar, unsigned int size);// быстрая
};
