#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"enter rows of first matrix: ";
    cin>>m;
    int n;
    cout<<"enter columns of first matrix: ";
    cin>>n;
    int p;
    cout<<"enter rows of second matrix: ";
    cin>>p;
    int q;
    cout<<"enter columns of second matrix: ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"enter elements of first matrix: ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        int b[p][q];
        cout<<"enter elements of second matrix: ";
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        // resultant
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j] = 0;
                // res[i][j]= a[i][0]*b[0][j] + a[i][1]*b[1][j]
                for(int k=0;k<p;k++){
                    res[i][j] += a[i][k]*b[k][j];
                }
            }
        } 
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<" the matrix can't be multiplied";
    }
}