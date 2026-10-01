/*
    Deletion:
    Deleting an element from an array involves removing the element at a specific index 
    and shifting the subsequent elements to fill the gap.
*/

//Example:
#include <iostream>
using namespace std;

int main(){
    int array[5] = {1,2,3,4,5};
    int size = 5;

    int position = 2; // Position of the element to be deleted

    for(int i = position; i < size - 1; i++){
        array[i] = array[i + 1]; // Shift elements to the left
    }
    size--; // Decrease the size of the array

    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}