// print array [10,20,30,40,50] from recursion

#include<iostream>
using namespace std;
void printArray(int arr[], int size , int index){
    if(index >= size){
        return;
    }
    //recursive call 
    printArray(arr ,size , index+1);

    //processing
    cout<< arr[index] <<"  ";
}
int main(){
   int arr[]= {10,20,30,40,50,60};
   int size =  6;
   int index = 0;
   printArray(arr , size , index);

}