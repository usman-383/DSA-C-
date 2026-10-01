#include <iostream>
using namespace std;

int main(){

    int array[5] = {1,2,3,4,5};
    int size = 5;

    int value = 3; // Value to be searched
    bool found = false; // Flag to indicate if the value is found

    for(int i=0; i<size; i++){
        if(array[i] == value){
            cout <<"Element found at index " << i << endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Element not found" << endl;
    }
}