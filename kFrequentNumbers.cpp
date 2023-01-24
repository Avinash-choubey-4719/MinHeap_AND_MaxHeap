#include<bits/stdc++.h>
using namespace std;

void kFrequentNumbers(int arr[], int n, int k){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>minHeap;

    unordered_map<int, int>frequencyMap;

    for(int i = 0;i<n;i++){
        frequencyMap[arr[i]]++;
    }

    for(auto x : frequencyMap){
        minHeap.push({x.second, x.first});

        if(minHeap.size() > k){
            minHeap.pop();
        }
    }

    while(minHeap.size() != 0){
        cout<<minHeap.top().second<<endl;
        minHeap.pop();
    }

    return;
}

int main(){
    int arr[] = {1, 1, 1, 2, 3, 3};
    int n = 6;
    int k = 2;
    kFrequentNumbers(arr, n, k);
    return 0;
}