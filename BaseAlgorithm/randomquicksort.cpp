#include "pch.h"
#include <iostream>

void swap(int *arr, int i, int j) {
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}
int partition(int *arr, int left, int right) {
	int pivot = left;
	int i = left + 1;
	for (int j = i; j <= right; j++) {
		if (arr[pivot] > arr[j])
		{
			swap(arr, i, j);
			i++;
		}
	}
	swap(arr, pivot, i - 1);
	return i - 1;

}
int findKLarge(int *a ,int p,int q,int K) {
	if (p == q)
		return a[p];
	int r = partition(a, p, q);
	int i = q-r + 1;
	if (i==K)
	{
		return a[r];
	}
	else if (K<i)
	{
		return findKLarge(a, r+1, q,K);
	}
	else
	{
		return findKLarge(a, p, r-1, K-i);
	}
}

int main()
{
	int a[] = { 5, 9, 7, 6, 4, 3, 8, 1,11,5 ,10 };
	int x=findKLarge(a, 0, (sizeof(a) / sizeof(a[0]))-1, 8);
	std::cout << x  ;
	return 0;
}