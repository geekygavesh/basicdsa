#include<iostream>
using namespace std;
int main(){
    int arr[]={1,3,45,2,1};
    int* ptr = arr; // giving address
    for(int i=0;i<=4;i++){
        cout<<i[arr]<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing first element
    // cout<<ptr<<endl;
    // // cout<<&arr[0];
    // cout<<ptr[0];
    *ptr  = 8; // ptr[0] = 8;
    ptr++; // ptr pointing second element
    *ptr = 9;
    ptr--; // ptr is pointing first element 
    cout<<endl;
     for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr = arr; // ptr is pointing first element

}
gavesh toemr