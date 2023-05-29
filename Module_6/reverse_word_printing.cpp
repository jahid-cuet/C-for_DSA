#include<bits/stdc++.h>
using namespace std;
void fun(stringstream& ss){
string word;
if(ss>>word){
    
    fun(ss);       //If we want to print every word in serial wise then cout placedd before the fun(ss) in the user define function
    cout<<word<<endl;
}
}
int main()
{
    string s;
  getline(cin,s); //Take input this way for space
  stringstream ss(s);
 fun(ss);
    return 0;
}