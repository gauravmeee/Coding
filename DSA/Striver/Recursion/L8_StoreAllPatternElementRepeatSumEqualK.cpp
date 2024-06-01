#include <iostream>
#include <vector>
using namespace std;

void FindCombination(int i, int target, vector<int> &ds, vector<vector<int>> &ans, vector<int> arr) {

    if (i == arr.size()) { //gk note:- size() not apply on arr[]
    
        if (target == 0) { 
            ans.push_back(ds);
        }
        return; 
    }

    
    if (arr[i] <= target) {  
        ds.push_back(arr[i]);
        FindCombination(i, target - arr[i], ds, ans, arr); 
        ds.pop_back(); // Backtrack
    }

    // Exclude the current element
    FindCombination(i + 1, target, ds, ans,arr);
}

vector<vector<int>> CombinationSum(int target, vector<int> arr){
    vector<vector<int>> ans;
    vector<int> ds;
    FindCombination (0,target,ds, ans, arr);
    return ans;
}

int main() {
    vector<int> arr{ 2, 3, 6, 7 };
    int target =7;
    vector<vector<int>> ans = CombinationSum(target,arr);
    for(int i=0; i<ans.size();i++){
        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
