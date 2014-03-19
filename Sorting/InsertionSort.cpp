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


void insertionSort(int arr[],int size)
{
	int bridge;
	int sortedIndex;
	int currentIndex;
	for (int i = 1; i < size; i++)
	{
		sortedIndex=i-1;
		currentIndex=i;
		if(arr[sortedIndex]>arr[currentIndex])
		{
			while(sortedIndex>=0&&arr[currentIndex]<arr[sortedIndex])
			{
				bridge=arr[currentIndex];
				arr[currentIndex]=arr[sortedIndex];
				arr[sortedIndex]=bridge;
				currentIndex=sortedIndex;
				sortedIndex--;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}
}