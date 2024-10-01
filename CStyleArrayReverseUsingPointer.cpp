#include <iostream>

using namespace std;

void ReverseArray(int ar[], int n){
    int *ptr=ar;
    int i=0, j=n-1;
    while(i<j){
        int temp=*(ptr+i);
        *(ptr+i)=*(ptr+j);
        *(ptr+j)=temp;
        i++; j--;
    }
    
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>>ar[i];
    }
    ReverseArray(ar,n);
    int *ptr=ar;
    for(int i=0; i<n; i++){
        cout<<*(ptr+i)<<" ";
    }
}
