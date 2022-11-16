#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// #define end "\n"

bool comper(vector<float> a,vector<float> b)
{
    return a[1] > b[1];
}
 

float maximumUnits(vector<vector<float>>& boxTypes, int truckSize) {
    int n1 = boxTypes.size();
        for(auto i: boxTypes){
        for(auto j : i)cout<<j<<" ";
        cout<<endl;
    }
    cout<<"-----------"<<endl;
    sort(boxTypes.begin(),boxTypes.end(),comper);
    
    for(auto i: boxTypes){
        for(auto j : i)cout<<j<<" ";
        cout<<endl;
    }
    
    float sum = 0;
    int i = 0;
    while(truckSize){
        

        if(truckSize-boxTypes[i][0]>=0){
            truckSize-=boxTypes[i][0];
            sum+=boxTypes[i][0]*boxTypes[i][1];
        }
        else{
            sum = sum+ truckSize*boxTypes[i][1];
            truckSize-=boxTypes[i][1];
        }
        cout<< "$$"<< boxTypes[i][0]<<boxTypes[i][1]<<endl;
        cout<< i <<" "<< truckSize << " " << sum<< endl;
        i++;
    }
        

    return sum;
    // cout<<n1<<n2<<endl;
}

int main(){
    vector<vector<float>> boxTypes;
    boxTypes.resize(10);
    for (int i = 0; i < 10; ++i)
    boxTypes[i].resize(2);
    int m = 10;
    // =  {{1,5},{3,3.3},{5,3},{4,1.75},{1,8},{3,3},{2,2}};//{{5,10},{2,5},{4,7},{3,9}};
    for(int i = 0;i<m;i++){
        for(int j = 0;j<2;j++){
            cin>>boxTypes[i][j];
        }
    }
    // for(auto i: boxTypes){
    //     for(auto j : i)cout<<j<<" ";
    //     cout<<endl;
    // }
    int n = 35;
    
    cout<< maximumUnits(boxTypes,n);
    
}
