#include "pch.h"
#include <iostream>
#include "..\head\heapsort.h"
int main()
{
	int a[] = { 5, 9, 7, 6, 4, 3, 8, 1,11,5 ,10 };
	//quicksort(a, 0, (sizeof(a) / sizeof(a[0])) - 1);
	heapsort(a);
	for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
		std::cout << a[i] << " ";
}