
#include <iostream>
using namespace std;

class Sorter
{
private:
	Sorter() {}
public:
	static void Bubble(int* ar, unsigned int size);//����������

	static void selectionSort(int* ar, unsigned int size);// �������

	static void insertionSort(int* ar, unsigned int size);// ���������

	static void mergeSort(int ar[], int lenD);// ��������  

	static void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR);//��������  �����������

	static void quickSort(int* ar, unsigned int size);// �������
};
