/**************************************************************************
* File           :  Experiment 1                                                    
* Description    :  C program to sort entered array by mearge sort method                                  
* Author         :  Alvin varghese                                              
* Version        :  1.0
* Date           :  25/06/2021                                                
****************************************************************************/
#include <stdio.h>

void merge(int array[], int start, int mid, int end) {

  int len1 = mid - start + 1;
  int len2 = end - mid;

  int leftArray[len1], rightArray[len2];

  for (int i = 0; i < len1; i++)
    leftArray[i] = array[start + i];
  for (int j = 0; j < len2; j++)
    rightArray[j] = array[mid + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = start;

  while (i < len1 && j <len2) {
    if (leftArray[i] <= rightArray[j]) {
      array[k] = leftArray[i];
      i++;
    } else {
      array[k] = rightArray[j];
      j++;
    }
    k++;
  }

  while (i < len1) {
    array[k] = leftArray[i];
    i++;
    k++;
  }

  while (j < len2) {
    array[k] = rightArray[j];
    j++;
    k++;
  }
}

void mergeSort(int arr[], int start, int end) {
  if (start < end) {

    int mid = start + (end - start) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

void display(int arr[], int size) {
  for (int i = 0; i <size; i++)
    printf("%d ", arr[i]);
  printf("\n");
}

int main() {
    int arr[5],i;
    printf("enter the array elements\n");
    for (i = 0; i <5; i++)
    {
      scanf("%d",&arr[i]);
    }
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("Original array\n");
  display(arr, size);
  
  mergeSort(arr, 0, size - 1);

  printf("Sorted array\n");
  display(arr, size);
}
