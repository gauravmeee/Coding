#include <iostream> 
#include <vector>
using namespace std;

int CountSum(int i, int k, vector<int> &ds, int n, int arr[], int sum){ //ds no more needed
    if(i==n){
        if(k==sum){
            return 1;
        }
        return 0;
    }
    ds.push_back(arr[i]);
    int l1= CountSum(i+1,k+arr[i],ds,n,arr,sum); //Count of All Possible Pattern (including curr element)

    ds.pop_back();
    int l2= CountSum(i+1,k,ds,n,arr,sum); //Count of All Possible Pattern (excluding current element)

    //count of All possible Pattern equal to sum
    return l1 + l2;
}

int main(){
    int arr[]={1,2,1};
    int n=3; //size
    int sum = 2;  //sum equal to sum
    vector<int> ds; //vector which
    cout<<CountSum(0,0,ds,n,arr,sum)<<endl;

}