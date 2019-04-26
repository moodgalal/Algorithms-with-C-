#include <iostream>
#define arrSize(x) sizeof(x)/sizeof(x[0])
using namespace std;

void increasingInserSort(int arr[] , int arrSize);
void decreasingOrder(int arr[] , int arrSize);
int main()
{
   int arr[]={3,1,4,6,5,8,7,9,2};
   increasingInserSort(arr,arrSize(arr));
   for(unsigned int i=0; i<arrSize(arr); i++)
   {
       cout<<arr[i]<<"  ";
   }
   cout<<endl;
   decreasingOrder(arr,arrSize(arr));
   for(unsigned int i=0; i<arrSize(arr); i++)
   {
       cout<<arr[i]<<"  ";
   }
    return 0;
}
void increasingInserSort(int arr[] , int arrSize)
{
  for(int j=1; j<arrSize; j++)
  {
    int key = arr[j];
    int i = j-1;

    while(i>=0 && arr[i]>key)
    {
      arr[i+1] = arr[i];
      i--;
    }
    arr[i+1] = key;
  }


}

void decreasingOrder(int arr[] , int arrSize)
{
    for(int i=1; i<arrSize; i++)
    {
      int key = arr[i];
      int j = i-1;
      while(j>=0 && arr[j]<key)
      {
          arr[j+1] = arr[j];
          j--;
      }
      arr[j+1] = key;
    }
}






