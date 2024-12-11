//in my dsa series today i am practicing array data type
//array syntax
//size of array=0 to size-1

#include <iostream>
using namespace std;
 int main(){
    int marks[5]={2,3,4,7,6};
    
    
    cout<<marks[0]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[4]<<endl;
    

//loops in array
int size=5;
int loop[size];

for(int i=0;i<size;i++){
    cin>>loop[i];
}

for(int i=0;i<size;i++){
    cout<<loop[i]<<endl;
}




return 0;
 }




