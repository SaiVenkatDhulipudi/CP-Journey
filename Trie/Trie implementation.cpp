/*INPUT:
7
I hello
I shaw
I ben
I screw
S ben
R shaw
S shaw
OUTPUT:
YES
NO
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
struct trienode{
  trienode *child[26];
  bool isend;
  trienode(){
    isend=false;
    for(int i=0;i<26;i++){
      child[i]=NULL;
    }
  }
};
struct trienode *root=new trienode;
void insertstring(string &key){
  trienode *curr=root;
  for(int i=0;i<key.length();i++){
    int index=key[i]-'a';
    if(curr->child[index]==NULL){
      curr->child[index]=new trienode();
    }
    curr=curr->child[index];
  }
  curr->isend=true;
}
bool searchstring(string &key){
  trienode *curr=root;
  for(int i=0;i<key.length();i++){
    int index=key[i]-'a';
    if(curr->child[index]==NULL){
      return false;
    }
    curr=curr->child[index];
  }
  return curr->isend;
}
bool isEmpty(trienode* root) 
{ 
    for (int i = 0; i < 26; i++) 
        if (root->child[i]) 
            return false; 
    return true; 
    
} 
trienode* deletestring(trienode* root,string &key,int i){
    if (!root) 
        return NULL;
    
    if (i == key.size()) { 
  
        
        if (root->isend) 
            root->isend = false; 
  
        
        if (isEmpty(root)) { 
            delete (root); 
            root = NULL; 
        } 
  
        return root;
    } 
  
    
    int index = key[i] - 'a'; 
    root->child[index] =  
          deletestring(root->child[index], key, i + 1); 
  
    
    if (isEmpty(root) && root->isend == false) { 
        delete (root); 
        root = NULL; 
    } 
  
    return root; 
} 

int main() {
int n;
cin>>n;

while(n--){
  char c;
  cin>>c;
  string s;
  if(c=='I'){
    cin>>s;
    insertstring(s);
  }
  else if(c=='S'){
    cin>>s;
    if(searchstring(s)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  else if(c=='R'){
    cin>>s;
    root=deletestring(root,s,0);
  }
}
}
