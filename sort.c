#include <stdio.h>
void printarray(int A[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d  ",A[i]);
}
void bubblesort(int A[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
        for(j=0;j<n-i-1;j++)
            if(A[j]>A[j+1]){
                temp=A[j+1];
                A[j+1]=A[j];
                A[j]=temp;
            }
    printarray(A,n);
}
void selectionsort(int A[],int n){
    int i, j, min,temp;
    for (i = 0; i < n-1; i++)
    {
        min = i;
        for (j = i+1; j < n; j++)
          if (A[j] < A[min])
            min = j;
           if(min != i)
            {
                temp=A[min];
                A[min]=A[i];
                A[i]=temp;
            }
    }
    printarray(A,n);
}
void insertionsort(int A[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=A[i];
        j=i-1;
         while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
    printarray(A,n);
    
}
void main()
{
    int x,i,n,A[10];
    printf("no. of elements:-");
    scanf("%d",&n);
    printf("enter the elements:-");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    printf("choose 1 for selection sort \n2 for bubble sort\n3 for insertion sort");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
            selectionsort(A,n); 
        break;
        case 2:
            bubblesort(A,n);
        break;
        case 3:
           insertionsort(A,n);
        break;
        default:
            printf("invalid input");
        break;
    }

    
    
}

