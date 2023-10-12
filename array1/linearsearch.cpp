#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the element to search: ";
    cin>>x;
    // search 
    // checkmark
    bool flag = false; //false -> not present
    for(int i=0;i<=n-1;i++){
        if (arr[i]==x) flag = true;

    }
    if(flag==true) cout<<"element found";
    else cout<<"404 not found";
}