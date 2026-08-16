#include <iostream>
using namespace std;
void bubblesort(int *arr1,int len);
int main() {
    int len{};
    cin>>len;
    int arr[len];
    for(int i=0;i<len;i++){
        cin>>arr[i];
    }
    bubblesort(arr,len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
void bubblesort(int* arr1,int length){
    for(int i=0;i<length-1;i++){
        for(int j=0;j<length-i-1;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
}