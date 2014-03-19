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

void SelectionSort(int arr[],int size)
{
	int currentIndex=0;
	int min=numeric_limits<int>::max();
	int minIndex=0;
	for (int i = 0; i < size; i++)
	{
		for (int j = currentIndex; j < size ; j++)
		{
			if(arr[j]<min)
			{
				min=arr[j];
				minIndex=j;
			}
		}
		//swap elements
		int tmp=arr[minIndex];
		arr[minIndex]=arr[currentIndex];
		arr[currentIndex]=tmp;
		currentIndex++;

	}
	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<" ";
	}

}