#include <bits/stdc++.h>
using namespace std;
bool comp(string &s1,string &s2)
{
    return s1.size() < s2.size();
}

int main() {
 vector<string>arr;
 string s;
 getline(cin,s);
 string s1;
 istringstream s2(s);
 while(s2>>s1){
   arr.push_back(s1);
 }
 // sorting sentence lexicographically
 sort(arr.begin(),arr.end(),comp);
 //largest string
 int n=arr.size();
 cout<<"\n"<<arr[n-1]<<endl;
 
}



