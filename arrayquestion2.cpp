#include <iostream>
using namespace std;

int main() {
    int nums[] = {21, 34, -8, 45, 12};
    int size = 5;

    int smallest = nums[0];
    int largest = nums[0];
    int smallest_index = 0;
    int largest_index = 0;

    for (int i = 1; i < size; i++) {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallest_index = i;
        } else if (nums[i] > largest) {
            largest = nums[i];
            largest_index = i;
        }
    }

    cout << "Smallest = " << smallest << " at index " << smallest_index << endl;
    cout << "Largest = " << largest << " at index " << largest_index << endl;

    return 0;
}