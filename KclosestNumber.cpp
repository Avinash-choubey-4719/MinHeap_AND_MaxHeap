#include<bits/stdc++.h>
using namespace std;

void kclosestNumber(int arr[], int n, int k, int key){
    priority_queue<pair<int, int>>maxHeap;

    for(int i = 0;i<n;i++){
        maxHeap.push({abs(key - arr[i]), arr[i]});

        if(maxHeap.size() > k){
            maxHeap.pop();
        }
    }

    while(maxHeap.size() != 0){
        cout<<maxHeap.top().second<<endl;
        maxHeap.pop();
    }

    return;
}

int main(){
    int arr[] = {8, 4, 5, 6, 7, 3, 10};
    int n = 7;
    int k = 3;
    int key = 7;

    kclosestNumber(arr, n, k, key);
    return 0;
}