#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name,int age){
      this->name=name;
      this->age=age;
    }


};

int main()
{
    person jahid("jahid Hasan",24);
    cout<<jahid.age<<endl;
    return 0;
}