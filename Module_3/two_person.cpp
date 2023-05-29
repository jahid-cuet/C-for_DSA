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
    //Person Number-1 (object-1)is Jahid Hasan//
    char name1[100]="jahid Hasan";
    float height1=5.11;
    int age1=23;
    Person *jahid=new Person(name1,height1,age1);


    //Person Number-1 (object-1)is Jahid Hasan//
    char name2[100]="Tajul Islam";
    float height2=5.6;
    int age2=25;
    Person *tajul=new Person(name2,height2,age2);
    int mx=max((jahid->age),(tajul->age));
    if(mx==jahid->age){
        cout<<"jahid age is Greater"<<endl<<"The age is="<<jahid->age;
    } 
    else{
         cout<<"Tajul age is Greater"<<endl<<"The age is="<<tajul->age;
    }

    return 0;
}