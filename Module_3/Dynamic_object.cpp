#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    char name[100];
   
    float height;
    int age;

    Person(char* n,float h,int a){
        strcpy(name,n);
    height=h;
    age=a;
        
       
    }
};
int main()
{
    char name[100]="jahid";
    Person *jahid=new Person(name,5.11,23);
   cout<<jahid->height<<endl;
   delete jahid;
 
    
    return 0;
}
    
   