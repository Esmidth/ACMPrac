#include "stdafx.h"
#include <iostream>

using namespace std;

int display(int * in)
{
	if(in == NULL)
	{
		cout << "Fucking Nullptr\n";
		return 1;
	}
	for (int i = 0;*(in + i) != '\0';i++)
	{
		cout << *(in + i) << " ";
	}
	cout << std::endl;
	return 0;
}

int* qsort2(int* is)
{
	int len = 0;
	for (; *(is + len) != '\0'; len++);

}
int* merge(int *in1,int len1,int *in2,int len2)
{
	int temp[1000] = { '\0' };
	if(len1 == 1 && len2 == 1)
	{
		if(*(in1) > *(in2))
		{
			temp[0] = *(in2);
			temp[1] = *(in1);
			return temp;
		}
		else
		{
			temp[0] = *in1;
			temp[1] = *in2;
			return temp;
		}
	}
	else if (len1 == 1)
	{
		int tempi =0;
		for (int i = 1; i < len2; i++)
		{
			if (*(in2 + i - 1) <= *(in1) && *(in2 + i) >= *(in1))
			{
				temp[i] = *(in1);
			}
			else
			{
				temp[i] = *(in2 + i);
			}
		}
	}
}
int* mergex(int* in1,int len1,int *in2,int len2)
{
	int temp[10000] = { '\0' };
	int k = 0;
	int i = 0;
	int j = 0;
	while (i < len1 && j < len2)
	{
		if (*(in1 + i) > *(in2 + j))
		{
			temp[k] = *(in2 + j);
			j++;
		}
		else
		{
			temp[k] = *(in1 + i);
			i++;
		}
		k++;
	}
	if(i == len1)
	{
		while(j < len2)
		{
			temp[k] = *(in2 + j);
			k++;
			j++;
		}
	}
	else
	{
		while(i < len1)
		{
			temp[k] = *(in1 + i);
			k++;
			i++;
		}
	}
	return temp;
}
int* merge2(int * in, int len)
{
	if(len == 1)
	{
		return in;
	}
	else if(len == 2)
	{
		return mergex(in, 1, in + 1, 1);
	}
	else
	{
		int mid = len / 2;
		int* t1 = merge2(in, mid);
		int* t2 = merge2(in + mid, len - mid);
		return mergex(t1, mid, t2, len - mid);
	}

}

void merge_ref(int* iDatas, int* iBuffer, int iLow, int iMid, int iHigh)
{
	int i = iLow, j = iMid + 1, k = iLow;
	while (i <= iMid && j <= iHigh)
	{
		if (iDatas[i] <= iDatas[j])
			iBuffer[k++] = iDatas[i++];
		else
			iBuffer[k++] = iDatas[j++];
	}
	if (i <= iMid)
		for (int ii = i; ii <= iMid; ii++)
			iBuffer[k++] = iDatas[ii];
	else
		for (int jj = j; jj <= iHigh; jj++)
			iBuffer[k++] = iDatas[jj];
}
void mergeSort(int* iDatas, int* iBuffer, int iLow, int iHigh)	
{
	if (iHigh > iLow)
	{
		int iMid = (iLow + iHigh) / 2;
		mergeSort(iDatas, iBuffer, iLow, iMid);
		mergeSort(iDatas,iBuffer, iMid + 1, iHigh);
		merge_ref(iDatas, iBuffer, iLow, iMid, iHigh);
		for (int i = iLow; i <= iHigh;i++)
		{
			iDatas[i] = iBuffer[i];
		}
	}
}
int test2(int* iDatas,int iNum)
{
	int iBuffer[10000];
	int i = 0;
	while (iNum != -1)
	{
		mergeSort(iDatas, iBuffer, iNum - 1,0);
		for (i = 0; i < iNum;)
		{
			printf("%d", iDatas[i]);
		}
		printf("\n");
	}
	return 0;
}
int test()
{
	int inpo[10000] = {1,8,4,3,2,9,5,6,12,14,43,11,50};
	int* result;
//	display(merge(inpo + 2, 1, inpo + 1, 1));
//	display(merge2(inpo,13));
	test2(inpo, 13);
}
int main()
{
	test();
	system("pause");
}
