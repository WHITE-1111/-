#include<iostream>
using namespace std;
int main(){
    int a[]={8,3,6,2,7,1};
    int n=6;
    for(int x=0;x<n-1;x=x+1){
        for(int y=0;y<n-x-1;y=y+1){
            if(a[y]>a[y+1]){
                int z=a[y];
                a[y]=a[y+1];
                a[y+1]=z;
            }
        }
    }
    cout<<"从大到小排序：";
    for(int x=0;x<n;x=x+1){
        cout<<a[x]<<" ";
    }
    cout<<endl;
    return 0;
}