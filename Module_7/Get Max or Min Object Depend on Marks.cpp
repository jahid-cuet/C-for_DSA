#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
     string name;
     int marks;
};

int main()
{
    Student arr[3];
    for(int i=0;i<3;i++){
        getline(cin,arr[i].name);
        cin>>arr[i].marks; //click enter after assign every value to take input 
        cin.ignore();
    
    }
     Student mx;
     mx.marks=INT_MIN;
    for(int i=0;i<3;i++){
        if(arr[i].marks>mx.marks){
        mx=arr[i];}
    }
    cout<<mx.name;
    
    return 0;
}