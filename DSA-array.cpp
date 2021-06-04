#include <bits/stdc++.h>
using namespace std;

void printk(int *arr,int m){
  int i;
  for(i=0;i<m;i++){
	  cout<<arr[i]<<" ";
	}
}

int main() {
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
	  cin>>a[i];
	}
	cout<<"after traversing"<<endl;//traversing
	printk(a,n);
		//inserting
	int pos,num;
	cin>>pos;
	if(pos>n+1||pos<0){
	  cout<<"overflow"<<endl;
	}
	else{
	  cin>>num;
	  for(i=n-1;i>=pos-1;i--){
	    a[i+1]=a[i];
	  }
	  a[pos-1]=num;
	  n++;
	}
	cout<<"\nafter inserting" <<num<<" at: "<<pos<<endl;
	printk(a,n);
	//deleting
	int pos1;
	cin>>pos1;
	if(pos<0||pos>n){
	  cout<<"overflow"<<endl;
	}
	else{
	  for(i=pos1-1;i<n;i++){
	    a[i]=a[i+1];
	  }
	  n--;
	}
	cout<<"\nafter DELETING " <<a[pos1-1]<<" at: "<<pos1<<endl;
	printk(a,n);
}
