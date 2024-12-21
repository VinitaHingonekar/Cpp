#include <iostream>
#include <climits>
using namespace std;

int minJumps(int nums[], int n) {
    if (n <= 1) return 0;

    int jumps = 0;
    int current_end = 0;
    int farthest = 0;

    for (int i = 0; i < n - 1; ++i) 
    {
        farthest = max(farthest, i + nums[i]);
        if (i == current_end) {
            jumps++; 
            current_end = farthest;
            if (current_end >= n - 1) break;
        }
    }

    return jumps;
}

int main() {
    int n;
    cout << "Enter number of elements : ";
    cin >> n; 
    int nums[n];
    cout << "Enter " << n << " elements" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << minJumps(nums, n) << endl;

    return 0;
}
