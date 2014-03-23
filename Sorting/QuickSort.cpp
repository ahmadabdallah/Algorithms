#include <string>
#include <bitset>
#include <limits>
#include<math.h>
#include<cmath>
#include<fstream>
#include<bitset>
#include<vector>
#include <sstream>
#include<algorithm>
#include<time.h>
#include<set>
#include<map>
#include<iostream>
#include <numeric>

using namespace std;

void partitioning(int arr[] ,int start,int end)
{

	int pivot=arr[(start+end)/2];
	while (start<end)
	{
		while (arr[start]<pivot)
		{
			++start;
		}
		while (arr[end]>pivot)
		{
			--end;
		}

		int tmp=arr[start];
		arr[start]=arr[end];
		arr[end]=tmp;

	}

}
void QuickSort(int arr[],int start,int end)
{


	if(start<end)
	{
		int pivot=(start+end)/2;
		partitioning(arr,start,end);
		QuickSort(arr,start,pivot);
		QuickSort(arr,pivot+1,end);
	}

}