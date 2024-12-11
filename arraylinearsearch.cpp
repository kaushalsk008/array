//linearsearch
#include <iostream>
using namespace std;

int linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

//reverse an array
void reverseArray(int arr[],int size){
    int start =0, end =size-1;

    while(start<end)
    swap(arr[start],arr[end]);
    start++;
    end--;
}

int main(){
    int arr[]={4,2,7,8,1,5};
    int size=7;
    int target=7;

    reverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<"";
    }

    cout<<endl;
    

    cout<<linearsearch(arr,size,target)<<endl;
    return 0;
}