// C program for finding whether a book with a specific book ID is present in the shelf or not using binary search
#include <stdio.h>
int main()
{
    int n,i,key,low,high,mid,found = 0;
    int arr[100];
    printf("enter the no of books");
    scanf("%d", &n);
    printf("enter the book ID in ascending order:");
    for ( i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the Book ID to search: ");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            found=1;
            break;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if(found)
        printf("Book is available.\n");
    else
        printf("Book is not available.\n");
    return 0;
}

    

