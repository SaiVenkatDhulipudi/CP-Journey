#include<bits/stdc++.h>
using namespace std;
int main() {
long long int n;
  cin>>n;
bitset<32>b1(n);
int count_of_1=b1.count();
cout<<"no of setbits are "<<count_of_1<<endl;
}
