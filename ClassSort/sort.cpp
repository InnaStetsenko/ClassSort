#include "sort.h"

	 void Sorter::Bubble(int* ar, unsigned int size)
	{
		int key = 0;
		int i = 0;
		for (int j = 1;j < size;j++)
		{
			key = ar[j];
			i = j - 1;
			while (i >= 0 && ar[i] > key)
			{
				ar[i + 1] = ar[i];
				i = i - 1;
				ar[i + 1] = key;
			}
		}
	}
	 void Sorter::selectionSort(int* ar, unsigned int size)
	{
		int j = 0;
		int tmp = 0;
		for (int i = 0; i < size; i++) {
			j = i;
			for (int k = i; k < size; k++) {
				if (ar[j] > ar[k]) {
					j = k;
				}
			}
			tmp = ar[i];
			ar[i] = ar[j];
			ar[j] = tmp;
		}
	}
	 void Sorter::insertionSort(int* ar, unsigned int size)// вставками
	{
		int key = 0;
		int i = 0;
		for (int j = 1;j < size;j++) {
			key = ar[j];
			i = j - 1;
			while (i >= 0 && ar[i] > key) {
				ar[i + 1] = ar[i];
				i = i - 1;
				ar[i + 1] = key;
			}
		}
	}
	void Sorter::mergeSort(int ar[], int lenD)// вставками  продолжение
	{
		if (lenD > 1) {
			int middle = lenD / 2;
			int rem = lenD - middle;
			int* L = new int[middle];
			int* R = new int[rem];
			for (int i = 0;i < lenD;i++) {
				if (i < middle) {
					L[i] = ar[i];
				}
				else {
					R[i - middle] = ar[i];
				}
			}
			mergeSort(L, middle);
			mergeSort(R, rem);
			merge(ar, lenD, L, middle, R, rem);
		}
	}

	 void Sorter::merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR) {
		int i = 0;
		int j = 0;
		while (i < lenL || j < lenR) {
			if (i < lenL & j < lenR) {
				if (L[i] <= R[j]) {
					merged[i + j] = L[i];
					i++;
				}
				else {
					merged[i + j] = R[j];
					j++;
				}
			}
			else if (i < lenL) {
				merged[i + j] = L[i];
				i++;
			}
			else if (j < lenR) {
				merged[i + j] = R[j];
				j++;
			}
		}
	}

	 void Sorter::quickSort(int* ar, unsigned int size)// быстрая
	{
		int const lenD = size;
		int pivot = 0;
		int ind = lenD / 2;
		int i, j = 0, k = 0;
		if (lenD > 1) {
			int* L = new int[lenD];
			int* R = new int[lenD];
			pivot = ar[ind];
			for (i = 0;i < lenD;i++) {
				if (i != ind) {
					if (ar[i] < pivot) {
						L[j] = ar[i];
						j++;
					}
					else {
						R[k] = ar[i];
						k++;
					}
				}
			}
			quickSort(L, j);
			quickSort(R, k);
			for (int cnt = 0;cnt < lenD;cnt++) {
				if (cnt < j) {
					ar[cnt] = L[cnt];;
				}
				else if (cnt == j) {
					ar[cnt] = pivot;
				}
				else {
					ar[cnt] = R[cnt - (j + 1)];
				}
			}
		}
	}

