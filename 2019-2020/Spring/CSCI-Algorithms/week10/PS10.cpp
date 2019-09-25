#include<stdlib.h>
#include<stdio.h>
#include <iostream>
#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <thread>


using namespace std;
// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void mergeSort(int arr[], int l, int m, int r)
{
     int i, j, k;
     int n1 = m - l + 1;
     int n2 =  r - m;

     /* create temp arrays */
     int L[n1], R[n2];

     /* Copy data to temp arrays L[] and R[] */
     for (i = 0; i < n1; i++)
     L[i] = arr[l + i];
     for (j = 0; j < n2; j++)
     R[j] = arr[m + 1+ j];

     /* Merge the temp arrays back into arr[l..r]*/
     i = 0; // Initial index of first subarray
     j = 0; // Initial index of second subarray
     k = l; // Initial index of merged subarray
     while (i < n1 && j < n2)
     {
          if (L[i] <= R[j])
          {
               arr[k] = L[i];
               i++;
          }
          else
          {
               arr[k] = R[j];
               j++;
          }
          k++;
     }

     /* Copy the remaining elements of L[], if there
     are any */
     while (i < n1)
     {
          arr[k] = L[i];
          i++;
          k++;
     }

     /* Copy the remaining elements of R[], if there
     are any */
     while (j < n2)
     {
          arr[k] = R[j];
          j++;
          k++;
     }
}
int randomArray(int n)
{
     A = []
     for i in range(n)
     {
          A.append(randRange(i,n+1))
     }
     return A
}
/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
     if (l < r)
     {
          // Same as (l+r)/2, but avoids overflow for
          // large l and h
          int x = l+(r-l)/2;
          int m = randomArray(x)

          // Sort first and second halves
          mergeSort(arr, l, m);
          mergeSort(arr, m+1, r);

          mergeSort(arr, l, m, r);
     }
}
int
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size)
{
     int i;
     for (i=0; i < size; i++)
     cout << A[i] << " ";
     cout << endl;
}

/* Driver program to test above functions */
int main()
{
     int arr[] = {12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7, 12, 11, 13, 5, 6, 7};
     int arr_size = sizeof(arr)/sizeof(arr[0]);

     cout << "Given array is " << endl;
     printArray(arr, arr_size);

     clock_t c_start = clock();
     auto t_start = std::chrono::high_resolution_clock::now();

     mergeSort(arr, 0, arr_size - 1);

     clock_t c_end = clock();
     auto t_end = std::chrono::high_resolution_clock::now();
     cout << endl;
     cout << "Sorted array is" << endl;
     printArray(arr, arr_size);
     std::cout << std::fixed << std::setprecision(2) << "CPU time used: "
     << 1000.0 * (c_end-c_start) / CLOCKS_PER_SEC << " ms\n"
     << "Wall clock time passed: "
     << std::chrono::duration<double, std::milli>(t_end-t_start).count()
     << " ms\n";


     return 0;

}
