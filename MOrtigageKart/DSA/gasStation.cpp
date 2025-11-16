#include<bits/stdc++.h>
using namespace std;

class gas{
   public:
   int gasStation(vector<int>&gas,vector<int>&cost){

    int start = 0 ;
    int currentgas = 0 ;
    int totalgas = 0;

    for(int i =0;i<gas.size();i++){
        int diff = gas[i] - cost[i];
        currentgas  += diff;
        totalgas += diff;

        if(currentgas <0){
            start = i+1;
            currentgas = 0;

        }


    }
    if(totalgas < 0 )return -1;
    return start;
   }


};