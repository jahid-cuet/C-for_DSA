#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
     string name;
     int roll;
};
bool cmp(Student a,Student b){
    if(a.roll<b.roll) return true;
    else return false;
}

int main()
{
    Student arr[3];
    for(int i=0;i<3;i++){
        getline(cin,arr[i].name);
        cin>>arr[i].roll; //click enter after assign every value to take input 
        cin.ignore();
    
    }
    sort(arr,arr+3,cmp);
    
      for(int i=0;i<3;i++){
    cout<<arr[i].name<<" "<<arr[i].roll<<endl;
      }
    return 0;
}