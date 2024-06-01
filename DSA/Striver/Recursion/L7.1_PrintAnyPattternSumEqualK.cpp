#include <iostream> 
#include <vector>
using namespace std;

bool PrintSum(int i, int k, vector<int> &ds, int n, int arr[], int sum){
    if(i==n){
        if(k==sum){
            for(int it:ds) cout<<it<<" ";
            cout<<endl;
            return true; 
        }
        return false;
    }

    //include
    ds.push_back(arr[i]);
    if(PrintSum(i+1,k+arr[i],ds,n,arr,sum)==true) return true;
    
    //exlcude
    ds.pop_back();
    if(PrintSum(i+1,k,ds,n,arr,sum)==true) return true;

    //return if control reaches end of non-void function
    return false;
}

int main(){
    int arr[]={1,2,1}; //given list
    int n=3; //size
    int sum = 2; //sum
    vector<int> ds; //ds for subsequence
    PrintSum(0,0,ds,n,arr,sum);

}