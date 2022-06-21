#include "sort.h"


int main()
{
	int ar[] = { 5,1,4,2,3 };
	//Sorter::Bubble(ar, 5);
	//Sorter::selectionSort(ar, 5);
	//Sorter::insertionSort(ar, 5);
	//Sorter::mergeSort(ar, 5);
	Sorter::quickSort(ar, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << ar[i] << ",";
	}
	
}
