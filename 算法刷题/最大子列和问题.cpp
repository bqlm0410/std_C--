#include <iostream>
using namespace std;
int main() {
    int thissum=0,maxsum=0,num,i;
    cin>>num;
    int a[num];
    for(i=0;i<num;i++){
        cin>>a[i];
    }
    for(i=0;i<num;i++){
        thissum+=a[i];
        if(thissum>maxsum){
            maxsum=thissum;
        }
        else if(thissum<0){
            thissum=0;
        }
    }
    cout<<maxsum<<endl;
    return 0;
}