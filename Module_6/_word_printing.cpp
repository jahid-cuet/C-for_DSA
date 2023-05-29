#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  getline(cin,s); //Take input this way for space
  stringstream ss(s);
  string word;
  while(ss>>word){
    cout<<word<<endl;
  }
    return 0;
}