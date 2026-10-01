#include <iostream>
using namespace std;

int main(){

    int array[5] = {1,2,6,4,5};
    int size = 5;

    array[2] = 3;
    
    for(int i=0; i<size; i++){
        cout <<array[i] << " ";
    }
    
    return 0;
}