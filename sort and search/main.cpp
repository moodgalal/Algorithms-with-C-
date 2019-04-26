#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

int binarySearch(int arr[] , int size, int number)
{
    int start(0) , end(size-1); // We must specify a starting , ending and middle pointers
    while(start <= end)
    {
        int middle = (start+end)/2; // Computing the new middle every time
        if(number == arr[middle])
            return middle;
        else if(number< middle)
            end = middle -1;
        else
            start = middle+1;
    }
    return -1;
}

void selectionSort(int arr[] , int size)
{
    for(int i=0; i<size-1; i++)
    {
        int imin = i;
        for(int j=i+1; j<size; j++)
        {
            if(arr[j] < arr[imin])
            {
                imin = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[imin];
        arr[imin] = temp;
    }
}

void insertionSort(int arr[] , int size)
{
    for(int i=1; i<size; i++)
    {
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void bubbleSort(int arr[] , int size)
{
    for(int k=0; i<size-2; i++)
       {
            bool flag = false;
            for(int i=0; i<size-k-1; i++)
            {
                if(arr[i] > arr[i+1])
                {
                    swap(arr[i] , arr[i+1]);
                    flag = true;
                }
            }
            if(flag == false)
                break;
       }
}




