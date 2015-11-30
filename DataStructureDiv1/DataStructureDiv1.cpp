// DataStructureDiv1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <vector>
using namespace std;
int main() {
	vector<bool> rooms;
	int N, P;
	int i, M;
	int maxempty = 0;
	scanf("%d%d", &N, &P);
	for (int i1 = 0; i1 < N; i1++)
	{
		rooms.push_back(false);
	}
	for (int k = 0;k < P; k++)
	{
		int instruct;
		scanf("%d", &instruct);
		switch (instruct)
		{
		case 1:
			scanf("%d%d", &i, &M);
			for (int j = 0; j < M; j++)
			{
				rooms[j + i - 1] = true;
			}
			break;
		case 2:
			scanf("%d%d", &i, &M);
			for (int j = 0; j < M; j++)
			{
				rooms[j + i - 1] = false;
			}
			break;
		case 3:
			int  empty = 0;
			for (int t1 = 0; t1 < rooms.size(); ++t1)
			{
				if(rooms[t1] == true)
				{
					empty = 0;
				}
				else if(rooms[t1]== false)
				{
					empty++;
					if(empty > maxempty)
					{
						maxempty = empty;
					}
				}
				
			}
			printf("%d\n", maxempty);
			maxempty = 0;
			break;
		}
	}
	return 0;
}