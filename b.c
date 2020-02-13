#include<stdio.h>
#include<time.h>
void swap(int *xp, int *yp) 

{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]);
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", arr[i]); 
    	printf("\n"); 
} 

int main() 
{ 
    
    clock_t  start_t, end_t;
    double diff_t;
    int arr[100000],i,num;
    printf("enter the number of ele");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {	
    	
	}
	start_t=clock();
    	bubbleSort(arr, num);
    	end_t=clock();
  	diff_t = difftime(end_t, start_t);
    	printf("Sorted array: \n"); 
      	printf("Execution time = %f\n", diff_t/CLOCKS_PER_SEC ); 
    	printArray(arr, num); 
    return 0; 
} 
