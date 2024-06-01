#include <iostream>
#include <vector>
using namespace std;

// Function to print all sequences whose elements sum up to a given value.
void PrintS(int i, int k, vector<int> &ds, int sum, int n, int arr[]) {
    // Base case: If we have considered all elements
    if (i == n) {
        //If the current sum is equal to the target sum, print the sequence
        if (k == sum) { //gk Alternative:-if we take k=remain_target, then we would check if(k==0)
            for (auto it : ds) cout << it << " ";
            cout << "\n";
        }
        return; // Return to avoid further processing.
    }

    // Include the current element
    
    if (k + arr[i] <= sum) {  //gk Alternative:-if we take k=remain_target, then we would check if(arr[i]<k)
        ds.push_back(arr[i]);
        PrintS(i, k + arr[i], ds, sum, n, arr); //gk Alternative:-if we take k=remain_target,then we would pass k-arr[i]
        ds.pop_back(); // Backtrack
    }
    //gk Alternative:- if we use, "if(k+arr[i]>sum) return" then the Below line will be Ignored

    // Exclude the current element
    PrintS(i + 1, k, ds, sum, n, arr);
}

int main() {
    int arr[] = { 2, 3, 6, 7 };
    int n = 4;
    int sum = 7;
    vector<int> ds;
    PrintS(0, 0, ds, sum, n, arr);
    return 0;
}
