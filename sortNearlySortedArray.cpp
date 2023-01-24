#include<bits/stdc++.h>
using namespace std;

vector<int> sortNearlySortedArray(int arr[], int n, int k){
    priority_queue<int, vector<int>, greater<int>>minHeap;
    vector<int> result;

    for(int i = 0;i<n;i++){
        minHeap.push(arr[i]);

        if(minHeap.size() > k){
            result.push_back(minHeap.top());
            minHeap.pop();
        }
    }

    while(minHeap.size() != 0){
        result.push_back(minHeap.top());
        minHeap.pop();
    }

    return result;
}

int main(){
    int arr[] = {6, 5, 3, 2, 8, 10, 9};
    int n = 7;
    int k = 3;

    vector<int> result = sortNearlySortedArray(arr, n, k);
    for(int i : result){
        cout<<i<<endl;
    }

    return 0;
}