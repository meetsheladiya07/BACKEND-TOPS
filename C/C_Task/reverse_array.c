#include<stdio.h>
#include<conio.h>

void reverseArray(int arr[], int n) {
    int i,temp[n];

    for(i=0;i<n;i++)
        temp[i] = arr[n-i-1];

    for(i=0;i<n;i++)
        arr[i] = temp[i];
}

void main() {
    int arr[] = {1,4,3,2,6,5};
    int n = sizeof(arr) / sizeof(arr[0]);
	int i;
	
    reverseArray(arr, n);
  
    for(i=0;i<n;i++) 
        printf("%d ", arr[i]);
    
    getch();
}
