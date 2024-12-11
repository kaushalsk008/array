//find the smallest/largest in array
#include <iostream>
using namespace std;

int main(){
    int nums[]={21,34,-8,45,12};
    int size=5;

    int smallest=INT_MAX;
    int largest=INT_MIN;

    for (int i = 0; i < size; i++){
    smallest = min(nums[i],smallest);
    largest=max(nums[i],largest);
    }

    cout<<"smallest = "<<smallest<<endl;
    cout<<"largest = "<<largest<<endl;
    return 0;
    



}