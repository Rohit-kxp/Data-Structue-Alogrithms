// input n , then print the sum from n to 1 ......

#include<iostream>
using namespace std;
int sum(int n){
    if(n==1){
        return 1;
    }
    int ans = n + sum(n-1); 
    return ans; 

}
int main(){
    cout<<sum(8)<<endl;
    return 0 ;
}