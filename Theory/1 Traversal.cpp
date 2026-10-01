/*Array Traversal
Accessing each element of the array one by one. 
This can be done using a loop, such as a for loop or a while loop. 
The traversal allows us to perform operations on each element, such as printing them, 
modifying them, or performing calculations.
*/

//Example:
#include <iostream>
using namespace std;

int main(){

    int array[5] = {1,2,3,4,5};

    for(int i=0; i<5; i++){
        cout << array[i] << " ";
    }
    return 0;
}