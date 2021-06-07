#include <iostream>
using namespace std;
void bubble_sort(int *arr,int n){
   int temp;
  for(int i=0;i<=n;i++){
    for(int j=0;j<n;j++){
      if(arr[j]>=arr[j+1]){
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }
  
}

int main() {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
  cin>>a[i];
}
bubble_sort(a,n);
for(int i=0;i<n;i++){
  cout<<a[i]<<" ";
}
}
