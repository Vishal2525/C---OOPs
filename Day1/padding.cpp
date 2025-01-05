#include<iostream>
using namespace std;

// it is because of padding
// padding is done to make the size of the structure to be multiple of 4
// padding is done to make the access of the data faster
// padding is done to make the data to be stored in the contiguous memory location
// padding is done to make the data to be stored in the cache memory
// the size is 8 because of padding
class A{
    int a;
    char b;
};

int main(){
    cout<<sizeof(A)<<endl;
    return 0;
    
}