/*input:
a1b11c13
output:
abbbbbbbbbbbccccccccccccc
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
string s,num;
cin>>s;
int i;
for(i=0;i<s.length();i++)
{
  if(isdigit(s[i]))
  {
    num.push_back(s[i]);
    int j=i+1;
    while(isdigit(s[j])&&j<s.length())
    {
    num.push_back(s[j]);
    j++;
    }  
int k=stoi(num);
while(k>0)
{
  cout<<s[i-1];
  k--;
}
num.erase();
i=j-1;

  }
}

}
