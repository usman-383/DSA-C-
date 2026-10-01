/*
    Insertion in an Array
    Insertion is the process of adding a new element to an array at a specific position.
    To insert an element, we need to shift the existing elements to the right to make space
*/

#include <iostream>
using namespace std;

int main(){
    int array[10] = {1,2,3,4,5};
    int size = 5;
    
    int position = 2; // Position where the new element will be inserted
    int value = 10; // Value to be inserted

    for(int i = size; i > position; i--){
        array[i] = array[i - 1]; // Shift elements to the right
    }
    array[position] = value; // Insert the new element
    size++; // Increase the size of the array

    // Print the updated array
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}