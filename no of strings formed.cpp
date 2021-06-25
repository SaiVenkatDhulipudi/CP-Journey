/*Given two input strings say S1 and S2 ...the first string S1 is a word and
it is made sure that it must not contain repeated letters for example: "hotel" ..
and the second input S2 is a sequence of letters only from the given input word for example: "hheollttteeooe" 
your task is find how many times the input word can be formed from the second input sequence of letters....
and print the value of n , here n is the no. Of times the word can be formed
In the above example the word hotel can be formed 2 times from the sequence..so output will be 2
If it is not possible then print 0
SOLUTION:*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1;
	cin>>s1;
	string s2;
	cin>>s2;
	int n=s1.length(),i,j;
vector<int>v(n);
	for(i=0;i<n;i++){
 v[i]=count(s2.begin(),s2.end(),s1[i]);
	  }
cout<<*min_element(v.begin(),v.end());
}
