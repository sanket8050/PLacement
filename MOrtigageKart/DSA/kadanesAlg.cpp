#include<bits/stdc++.h>
using namespace std;

class solution{
    int kadane(vector<int>&arr){
        int currentsum = arr[0];
        int maxx = arr[0];

        for(int i = 1; i<arr.size();i++){
            currentsum = max(arr[i],arr[i]+currentsum);
            maxx = max(currentsum,maxx);
        }
        return maxx;
    }
};



// if all nums are negative
/*
int kadaneAllNegative(int arr[], int n)
{
    int maxSum = arr[0];
    int currentSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

*/
//