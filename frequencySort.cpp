#include<bits/stdc++.h>
using namespace std;

void frequencySort(int arr[], int n){
    unordered_map<int, int>frequencyMap;

    for(int i = 0;i<n;i++){
        frequencyMap[arr[i]]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>minHeap;

    for(auto x : frequencyMap){
        minHeap.push({x.second, x.first});
    }

    while(minHeap.size() != 0){
        cout<<minHeap.top().second<<endl;
        minHeap.pop();
    }

    return;
}

int main(){
    int arr[] = {1, 1, 1, 1, 2, 2};
    int n = 6;
    frequencySort(arr, n);

    return 0;
}