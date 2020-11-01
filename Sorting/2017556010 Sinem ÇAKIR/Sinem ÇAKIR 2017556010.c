#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#include <string.h>



void insertionsort(int arr[], int n) {
	int i, j;
	int element;

	for (i = 1; i < n; ++i) {
		element = arr[i];

		for (j = i - 1; arr[j] > element && j >= 0; --j) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = element;
	}

}
void insertionsortname(char arr[], int n) {
	int i, j;
	int c;

	for (i = 1; i < n; ++i) {
		c = arr[i];

		for (j = i - 1; arr[j] > c && j >= 0; --j) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = c;
	}

}

void merge(int arr[], int l, int m, int r)
{
	int lside = m - l+1;
	int rside = r - m;
	int Left[lside];
	int Right[rside];
	int i, j, k;
	for (i = 0; i < lside; i++)
		Left[i] = arr[l + i];
	for (j = 0; j < rside; j++)
		Right[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;

	while (i < lside && j < rside) {
		if (Left[i] <= Right[j]) {
			arr[k] = Left[i];
			i++;
		}
		else {
			arr[k] = Right[j];
			j++;
		}
		k++;
	}

	while (i < lside) {
		arr[k] = Left[i];
		i++;
		k++;
	}

	while (j < rside) {
		arr[k] = Right[j];
		j++;
		k++;
	}
}

void mergesort(int arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;

		mergesort(arr, l, m);
		mergesort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void mergename(char arr[], int l, int m, int r)
{
	int i, j, k, n1, n2;
	n1 = m - l + 1;
	n2 = r - m;

	int L[n1], R[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	i = 0;
	j = 0;
	k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergesortname(char arr[], int l, int r)
{
	if (l < r) {
		int m = l + (r - l) / 2;

		mergesortname(arr, l, m);
		mergesortname(arr, m + 1, r);

		mergename(arr, l, m, r);
	}
}

  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

void swapname(char *xp, char *yp) 
{ 
    char temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 


//Selection Sort
  
void selectionsort(int arr[], int n) 
{ 
    int i, j, min; 
  
    for (i = 0; i < n-1; ++i) 
    { 
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min]) 
            min = j; 
  
        swap(&arr[min], &arr[i]); 
    } 
} 


void selectionsortname(char arr[], int n) 
{ 
    int i, j, min; 
  
    for (i = 0; i < n-1; ++i) 
    { 
        min = i; 
        for (j = i+1; j < n; ++j) 
          if (arr[j] < arr[min]) 
            min = j; 
  
        swapname(&arr[min], &arr[i]); 
    } 
} 



void bubblesort(int arr[], int n) {

   int i, j; 
   for (i = 0; i < n-1; i++)       
      for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]);
}


void bubblesortname(char arr[], int n) {
	
	int i, j; 
   for (i = 0; i < n-1; i++)       
      for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swapname(&arr[j], &arr[j+1]);
              
}
void printarrayname(char arr[], int size) {
	int i;
	for (i = 0; i < size; ++i) {

		printf("%c", arr[i]);
		}

}
void printarrayint(int arr[], int size) {
	int i;
	for (i = 0; i < size; ++i) {

		printf("%d", arr[i]);

	}

}

//Quick Sort
void quicksort(int array[],int first,int last){
    int i; 
    int j; 
    int pivot; 
    char temp; 
    pivot=first; 
   
    
    if(last>first){
        pivot=first;
        i=first;
        j=last;
        while (i<j){
            while (array[i]<=array[pivot] && i<last && j>i){ 
                i++;
            }
            while (array[j]>=array[pivot] && j>=first && j>=i){
                j--;
            }
            if (j>i){ 
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
       
        temp=array[j];
        array[j]=array[pivot];
        array[pivot]=temp;
        quicksort(array,first,j-1);
        quicksort(array,j+1,last);
    }
}
void quicksortname(char array[],char first,char last){
    int i; 
    int j; 
    char pivot; 
    int temp; 
    pivot=first; 
   
    
    if(last>first){
        pivot=first;
        i=first;
        j=last;
        while (i<j){
            while (array[i]<=array[pivot] && i<last && j>i){ 
                i++;
            }
            while (array[j]>=array[pivot] && j>=first && j>=i){
                j--;
            }
            if (j>i){ 
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
       
        temp=array[j];
        array[j]=array[pivot];
        array[pivot]=temp;
        quicksortname(array,first,j-1);
        quicksortname(array,j+1,last);
    }
}

// HEAP SORT
void heapify(int arr[], int n, int i)
{
    int largest = i;  
    int l = 2*i + 1; 
    int r = 2*i + 2;  

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]); 
        heapify(arr, n, largest); 
    }
}

void heapsort(int arr[], int n)
{
    int i;
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (i=n-1; i>=0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
      
      void heapifyname(char arr[], int n, int i)
{
    int largest = i;  
    int l = 2*i + 1; 
    int r = 2*i + 2;  

    if (l < n && arr[l] > arr[largest])
        largest = l;

    if (r < n && arr[r] > arr[largest])
        largest = r;

    if (largest != i)
    {
        swapname(&arr[i], &arr[largest]); 
        heapifyname(arr, n, largest); 
    }
}

void heapsortname(char arr[], int n)
{
	int i;
    for (i = n / 2 - 1; i >= 0; i--)
        heapifyname(arr, n, i);

    for (i=n-1; i>=0; i--)
    {
        swapname(&arr[0], &arr[i]);
        heapifyname(arr, i, 0);
    }
}




int main() {

	clock_t c;
	c = clock();

	char name[] = "Sinem CAKIR";
	int number[] = { 2,0,1,7,5,5,6,0,1,0 };
	int numbersize = sizeof(number) / sizeof(number[1]);
	int namesize = strlen(name);
	printf("\nMy name is Sinem CAKIR My number is 2017556010\n");
    c = clock() - c;
	selectionsort(number, numbersize);
	printf("\n\n Selection Sort for Number:");
	printarrayint(number, numbersize);
    printf("\n Selection Sorting Time for Number: %f", ((double)c) / CLOCKS_PER_SEC);

	c = clock() - c;
	selectionsortname(name, namesize);
	printf("\n Selection Sort for Name:");
	printarrayname(name, namesize);
	printf("\n Selection Sorting Time for Name: %f ", ((double)c) / CLOCKS_PER_SEC);
 
 
 
	c = clock() - c;
	insertionsort(number, numbersize);
	printf("\n\n Insertion Sort for Number:");
	printarrayint(number, numbersize);
	printf("\n Insertion Sorting Time for Number  %f\n", ((double)c) / CLOCKS_PER_SEC);
	
    c = clock() - c;
	insertionsortname(name, namesize);
	printf(" Insertion Sort for Name:");
	printarrayname(name, namesize);
	printf("\n Insertion Sorting Time for Name: %f\n", ((double)c) / CLOCKS_PER_SEC);



    c = clock() - c;
	bubblesort(number, numbersize);
	printf("\n\n Bubble Sort for Number:");
	printarrayint(number, numbersize);
	printf("\n Bubble Sorting Time for Number : %f ", ((double)c) / CLOCKS_PER_SEC);
	
	c = clock() - c;
	bubblesortname(name, namesize);
	printf("\n Bubble Sort for Name:");	
	printarrayname(name, namesize);
	printf("\n Bubble Sorting Time for Name: %f \n ", ((double)c) / CLOCKS_PER_SEC);
	
	
	mergesort(number, 0, numbersize - 1);
	c = clock() - c;
	printf("\n Merge Sort for Number :");	
	printarrayint(number, numbersize);
	printf("\n Merge Sorting Time for Number : %f", ((double)c) / CLOCKS_PER_SEC);
	
	mergesortname(name, 0, namesize - 1);
	c = clock() - c;
	printf("\n Merge Sort for Name  :");	
	printarrayname(name,namesize );
	printf("\n Merge Sorting Time for Name: %f\n", ((double)c) / CLOCKS_PER_SEC);
	

		
	quicksort(number, 0, numbersize - 1);
	c = clock() - c;
	printf("\n Quick Sort for Number :");	
	printarrayint(number, numbersize);
	printf("\n Quick Sorting Time for Number : %f", ((double)c) / CLOCKS_PER_SEC);
	
	quicksortname(name, 0, namesize - 1);
	c = clock() - c;
	printf("\n Quick Sort for Name  :");	
	printarrayname(name,namesize );
	printf("\n Quick Sorting Time for Name: %f\n", ((double)c) / CLOCKS_PER_SEC);
	
	heapsort(number, numbersize);
	c = clock() - c;
	printf("\n Heap Sort for Number :");	
	printarrayint(number, numbersize);
	printf("\n Heap Sorting Time for Number : %f", ((double)c) / CLOCKS_PER_SEC);
	
	heapsortname(name, namesize);
	c = clock() - c;
	printf("\n Heap Sort for Name  :");	
	printarrayname(name, namesize );
	printf("\n Heap Sorting Time for Name: %f\n", ((double)c) / CLOCKS_PER_SEC);
	
	

	
	return 0;
}

