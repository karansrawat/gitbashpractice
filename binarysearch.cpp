#include<iostream>
using namespace std;
int performbinarysearch(int size, int arr[], int target)
{
    //not let's find the location of that particular element

    int l = 0;
    int r = size-1;
    
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(arr[mid]==target) {
            return mid;
        }

        if(arr[mid]>target) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout<<"Press enter to exit";


    return -1;
}
int main()
{
    int size,arr[size],target;
    cout<<"Enter the Size of Array: ";
    cin>>size;
    cout<<"Enter the elements of Array in sorted order: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the target element to find the location of it";
    cin>>target;
    // now printing the unsorted array
    cout<<"Unsorted Array: ";
    for(int s=0;s<size;s++)
    {
        cout<<arr[s]+" ";
    }
    // now sorting the array with binary search algorithm
    int location = performbinarysearch(size,arr,target);
    if(location>0) {
        cout<<"Location of "+target<<"is :"<<location;
    } else {
        cout<<"ELEMENT NOT PRESENT!!!";
    }
    return 0;
}


