#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
    }
    cout<<sum;
}