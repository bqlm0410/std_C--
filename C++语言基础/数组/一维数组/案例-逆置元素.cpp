#include <iostream>
using namespace std;
int main() {
    int num,temp,begin=0;
    cin>>num;
    int a[num],end=num-1;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;begin<end;i++){
        if(begin<end){
        temp=a[begin];
        a[begin]=a[end];
        a[end]=temp;
        begin++;
        end--;
        }
    }
    for(int i=0;i<num;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}