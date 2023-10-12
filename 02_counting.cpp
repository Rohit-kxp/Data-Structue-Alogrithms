/*print counting 5 to 1 from recursion 

#include <iostream>
using namespace std;
void print(int n){
    //base case
    if(n==1){
        cout<< 1 << " ";
        return ;
    }
    //processing 
    cout<< n <<" ";
    //recursion call
    print(n-1);
}
int main(){
    print(9);
    return 0 ;
}

*/

// print counting 1 to n from recursion 

#include<iostream>
using namespace std;
void print(int n){
    if(n==1){
        cout<<1;
        return;
    }
    print(n-1);
    cout<<n ;
    return ;
}
int main(){
    print(9);
    return 0 ;
}