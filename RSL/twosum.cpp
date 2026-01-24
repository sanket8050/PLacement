// finding the pair in the array that is addition of two nums is equal to target

#include<bits/stdc++.h>
using namespace std;

vector<int> find(vector<int>&arr,int target){

    unordered_map<int,int>mp;
    for(int i = 0 ; i < arr.size();i++){
        int comp = target - arr[i];
        if(mp.find(comp) != mp.end()){
            return {mp[comp],i};
        }

        mp[arr[i]] = i;
    }
    return {} ; // if noe pair found
}