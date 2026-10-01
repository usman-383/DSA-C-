#include <iostream>
using namespace std;

int main(){

    int array[5] = {2,1,3,5,4};
    int size = 5;

    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i=0; i<size; i++){
        cout<<array[i] << " ";
    }
    return 0;
}