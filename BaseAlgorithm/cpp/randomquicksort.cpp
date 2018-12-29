#include "pch.h"
#include "..\head\utils.h"
#include "..\head\quicksort.h"

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
