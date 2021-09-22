/*You are given N balls numbered in a horizontal line from 1 to N. For each I 
(1<=N), the color of the i-th ball is given Si.
Adjacent balls with the same color will merge into one larger ball without changing the color. 
If there were a ball adjacent to this group of balls before fusion, that ball is now adjacent to the new larger ball.
Your task is to find the final number of balls present after all the mergings is completed.
Input Format
The first line contains an integer N.
Next contains the string 5.
• 1<=N<=100000 • S consists of lowercase English letters.
Output Format
Print the final number of balls.
sample input:
8
abbbaaca
sample output:
5
abaca
*/
#include <bits/stdc++.h>
using namespace std;
int main() 
{
int n;
cin>>n;
string s;
cin>>s;
int i=0;
std::queue<char>q ;
while(i<n)
{
  while(s[i]==s[i+1])
  {
    i++;
  }
q.push(s[i]);
i++;
}
cout<<q.size()<<endl;
while(!q.empty())
{
  char u =q.front();
  cout<<u;
  q.pop();
}
}
