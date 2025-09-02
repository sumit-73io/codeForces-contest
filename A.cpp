#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int box[N];
    int money=100;
    int max_money=100;
    int sum=0;
    for(int i=0;i<N;i++){
        cin>>box[i];
        sum+=box[i];
        money=100+sum;
        max_money=max(max_money,money);
    }
    cout<<max_money;
    return 0;
}