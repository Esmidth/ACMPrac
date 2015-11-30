#include "stdafx.h"
#include <iostream>

using namespace std;

int display(int * in)
{
	if (in == NULL)
	{
		cout << "Fucking Nullptr\n";
		return 1;
	}
	for (int i = 0; *(in + i) != '\0'; i++)
	{
		cout << *(in + i) << " ";
	}
	cout << std::endl;
	return 0;
}

int* merge(int* seq1,int len1,int* seq2,int len2)
{
	int temp[1000] = { '\0' };
	int i = 0, j = 0, k = 0;
	int len3 = len1 + len2;
	while(i < len1 && j < len2)
	{
		if(*(seq1+i) >= *(seq2+j))
		{
			temp[k] = *(seq2 + j);
			j++;
		}
		else
		{
			temp[k] = *(seq1 + i);
			i++;
		}
		k++;
	}
	if(i == len1 && j < len2)
	{
		while(j < len2)
		{
			temp[k] = *(seq2 + j);
			j++;
			k++;
		}
	}
	else if(j == len2 && i < len1)
	{
		while(i < len1)
		{
			temp[k] = *(seq1 + i);
			i++;
			k++;
		}
	}
	return temp;
}
int* mergeSort(int *seq,int len)
{
	if(len == 1)
	{
		int temp[10000] = { '\0' };
		*temp = *(seq);
		return temp;
	}
	else if(len == 2)
	{
		int temp1[10000] = { '\0' };
		if(seq[0] >= seq[1])
		{
			temp1[0] = seq[1];
			temp1[1] = seq[0];
			return temp1;
		}
		else
		{
			temp1[0] = seq[0];
			temp1[1] = seq[1];
			return temp1;
		}
	}
	else {
		int mid = len / 2;
		int* t1 = mergeSort(seq, mid);
		cout << "t1\n" << *t1 << endl;
		int* t2 = mergeSort(seq + mid, len - mid);
		int* t3 = merge(t1, mid, t2, len - mid);
		return t3;
	}
}

int* qsort(int* seq,int len)
{
	
}
int test()
{
	int inpo[10000] = { 1,8,4,3,2,9,
						5,6,12,14,43,11,50};
	int inpo2[10000] = { 1,8,4,3,2,9 };
	int seq1[5] = { 1,3,5,7,9 };
	int seq2[6] = { 2,4,6,8,10,11};
	int* result;
	//display(inpo);
	//	display(merge(inpo + 2, 1, inpo + 1, 1));
	//	display(merge2(inpo,13));
	//display(merge(seq1, 5, seq2, 11-5));
	auto a3 = mergeSort(inpo2, 6);
	cout << a3[0];

}
int main()
{
	test();
	system("pause");
}
