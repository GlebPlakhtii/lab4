#include <iostream>
#include <cmath>

using namespace std;


void mix(int *arr1,int *arr2);
const int arr_size=5;



int arr1[arr_size];
int arr2[arr_size];
int arr3[arr_size*2];



int main()
{
	for (int i=0;i<5;i++)
	{
		arr1[i]=i;        //заполнение массива
		arr2[i]=i*i;
	}




	for (int i=0;i<arr_size*2;i+=2)
		{
			arr3[i]=arr1[i/2];					// смешивание массива
			arr3[i+1]=arr2[i/2];

		}


	for (int i=0;i<arr_size*2;i++)
	{
		cout<<arr3[i]<<endl;				// вывод массива 
	}







	return 0;
}


