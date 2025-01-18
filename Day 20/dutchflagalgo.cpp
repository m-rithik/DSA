// The Dutch National Flag Algorithm is an efficient approach to sort an array containing three distinct values, often referred to as 0s, 1s, and 2s. The algorithm operates in ￼ time complexity with a single traversal of the array. Here’s the theory and corresponding C++ implementation:

// Theory:

// The Dutch National Flag Algorithm uses three pointers:
// 	1.	low: Marks the end of the region containing 0s.
// 	2.	mid: Traverses the array.
// 	3.	high: Marks the beginning of the region containing 2s.

// The algorithm involves:
// 	1.	If the current element is 0, swap it with the element at low, and increment both low and mid.
// 	2.	If the current element is 1, just move mid forward.
// 	3.	If the current element is 2, swap it with the element at high and decrement high (do not increment mid in this case, as the swapped element from high may need processing).

// C++ Implementation:

#include <iostream>
#include <vector>
using namespace std;

void dutchNationalFlag(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main() {
    vector<int> arr = {2, 0, 1, 2, 1, 0, 2, 1, 0};

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    dutchNationalFlag(arr);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Explanation:
// 	1.	Input: An array like {2, 0, 1, 2, 1, 0, 2, 1, 0}.
// 	2.	Output: The array sorted as {0, 0, 0, 1, 1, 1, 2, 2, 2}.
// 	3.	Steps:
// 	•	The algorithm iterates through the array using the mid pointer.
// 	•	At each step, depending on the value of arr[mid], a swap operation is performed to place the element in its correct region (0s, 1s, or 2s).
// 	•	The process continues until mid surpasses high.

// This algorithm is optimal for sorting arrays with three distinct values and can be adapted for other problems with similar constraints.