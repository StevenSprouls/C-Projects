#include <stdio.h>

void bubbleSort(int *array , int n)
{ 
    int i=0 , j=0 , temp=0;

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n-1 ; j++)
        {
            if(array[j]>array[j+1])
            {
                temp        = array[j];
                array[j]    = array[j+1];
                array[j+1]  = temp;
            }
        }
    }

}

float findMedian(int array[] , int n)
{
    float median=0;
    
    if(n%2 == 0)
        median = (array[(n-1)/2] + array[n/2])/2.0;
    else
        median = array[n/2];
    
    return median;
}

int main()
{
    int array_1[] = {14,22,7,9,1,58,2};
    int array_2[] = {12,23,5,7,3,8,43,1,4,9};
    int i=0,n2=10,n1=7;
    float median1=0,median2=0;
    
    bubbleSort(array_1 , n1);
    bubbleSort(array_2 , n2);
    
    median1 = findMedian(array_1 , n1);
    median2 = findMedian(array_2, n2);

    printf("\n\nThe median of the first array is : %f\n",median1);
    printf("\n\nThe median of the second array is : %f\n",median2);
    return 0;
}