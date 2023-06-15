#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
     string name;
     int roll;
     float height;
};

int main()
{
    Student arr[3];
    for(int i=0;i<3;i++){
        getline(cin,arr[i].name);
        cin>>arr[i].roll>>arr[i].height; //click enter after assign every value to take input 
        cin.ignore();
    
    }
    for(int i=0;i<3;i++){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].height<<endl;
    }
    
    return 0;
}