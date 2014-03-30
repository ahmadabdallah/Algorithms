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

bool BinarySearch(int arr[],int size,int val)
{
	if(size<=1&& arr[0]!=val)
		return false;
	else
	{
		int lw=0,high=size-1;
		while (lw<=  high)
		{
			int middle=(lw+high)/2;
			if(arr[middle]==val)
				return true;
			else if(arr[middle]>val)
				high=middle-1;
			else
				lw=middle+1;

		}
		return false;

	}
	return false;
}