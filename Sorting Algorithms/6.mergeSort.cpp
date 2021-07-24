/******************************************************************************

Recursive Merge Sort 


Recursive Merge Sort    Best -> Ω(n log(n))	 Average -> θ(n log(n))	Worst -> O(n log(n))

*******************************************************************************/

#include <iostream>

using namespace std;

void merge(int arr[], int l, int mid, int r){
    int arr2[r+1-l];
    int start = l;
    int i = 0;
    int middel = mid+1;
    while(l<=mid && middel<=r){
        if(arr[l]>arr[middel]){
            arr2[i] = arr[middel];
            i++;
            middel++;
        }
        else{
            arr2[i] = arr[l];
            i++;
            l++;
        }
    }
    
    if(l<=mid){
        while(l<=mid){
            arr2[i] = arr[l];
            i++;
            l++;
        }
    }
    if(middel<=r){
        while(middel<=r){
            arr2[i] = arr[middel];
            i++;
            middel++;
        }
    }
    l = start;
    i = 0;
    for(;l<=r;l++){
        arr[l] = arr2[i];
        i++;
    }
    return;
}

void mergeSort(int arr[],int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
    
    return;
}

int main()
{
   int arr[] = {23,56,23,45,23,54,7,34,2,1,34,6,657,34,23,2,345,546,56,34};
   int size = sizeof(arr)/sizeof(arr[0]);
   
   mergeSort(arr,0,size-1);
   
   
   for(int i = 0; i<size; i++){
       cout<< arr[i] << " ";
   }
}
