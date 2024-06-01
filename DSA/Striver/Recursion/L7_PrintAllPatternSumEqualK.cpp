#include <iostream> 
#include <vector>
using namespace std;

void PrintSum(int i, int k, vector<int> &ds, int n, int arr[], int sum){
    if(i==n){
        if(k==sum){
            for(int it:ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    //include arr[i]
    ds.push_back(arr[i]);
    PrintSum(i+1,k+arr[i],ds,n,arr,sum); //k+arr[i]✅  k+=arr[i]❌  we need not to update value of k 

    //exclude arr[i]
    ds.pop_back();
    PrintSum(i+1,k,ds,n,arr,sum);  //i+1✅  i+=1❌  we need not to update value of i

}

int main(){
    int arr[]={1,2,1};
    int n=3; //size
    int sum = 2;  //sum equal to sum
    vector<int> ds; //vector which
    PrintSum(0,0,ds,n,arr,sum);

}