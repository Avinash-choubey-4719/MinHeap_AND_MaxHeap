#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int k, int n){
    priority_queue<int>maxHeap;

    for(int i = 0;i<n;i++){
        maxHeap.push(arr[i]);

        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }

    return maxHeap.top();
}

int main(){
    int arr[] = {3, 2 , 9, 1};
    int k = 2;
    int n = 4;

    int result = kthSmallest(arr, k, n);
    cout<<result<<endl;
    return 0;
}