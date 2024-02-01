#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        for(int k=i+1;k<n;k++)
        {
            if(arr[j]>arr[k])
            {
                j=k;
            }
            swap(arr[i],arr[j]);
        }
    }
}



void createGraph()
{
    for(int i=10000;i<100000;i=i+10000)
    {
       int arr[i];
    for(int j=0;j<i;j++)
    {
        arr[j] = rand()%i;
    }

    clock_t start = clock();

    for(int k=0;k<10;k++)
    {
        selectionSort(arr,i);
    }

    clock_t end = clock();

    int avgTime = (end - start)/10;

    cout<<avgTime<<" "<<i<<endl;
    }
}



int main()
{   
    createGraph();

    return 0;
}