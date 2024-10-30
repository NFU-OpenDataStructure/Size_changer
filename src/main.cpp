#include <iostream>

using namespace std;

extern void print_arr(int *arr, int size);
extern void change_size(int *&arr, int size, int new_size);

int main() {
    int size = 3;
    int *arr = new int[size];

    // Inserting elements.
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    };

    print_arr(arr, size);  // Print initial array.

    int new_size = 5;
    change_size(arr, size, new_size);
    print_arr(arr, new_size);  // Size has changed, print the new array.
}