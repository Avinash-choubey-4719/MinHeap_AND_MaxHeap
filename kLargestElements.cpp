#include<bits/stdc++.h>
using namespace std;

void kLargestElements(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>>minHeap;

    for(int i = 0;i<n;i++){
        minHeap.push(arr[i]);

        if(minHeap.size() > k){
            minHeap.pop();
        }
    }

    while(minHeap.size() != 0){
        cout<<minHeap.top()<<endl;
        minHeap.pop();
    }

    return;
}

int main(){
    int arr[] = {3, 2 , 9, 1};
    int k = 2;
    int n = 4;

    kLargestElements(arr, n, k);
    return 0;
}