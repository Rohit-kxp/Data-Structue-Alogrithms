/*
climbing staircase, it takes n steps to reach the top each time you  can either climb 1 or 2 steps in how many distinct ways can you climb to the top
*/
#include<iostream>
using namespace std;
int climbStairs(int n){
    if(n==0){
        return 1;
    }
    if (n==1){
        return 1;
    }
    int ans = climbStairs(n-1)+climbStairs(n-2);
    return ans;
}
int main(){
    cout<<climbStairs(10)<<endl;
    return 0;
}

