#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    int roll;
    char Section;
    float cgpa;

};
int main()
{

    Student s;
      char nm[100]="Md.Jahid Hasan";
      strcpy(s.name,nm);
      
      s.roll=18;
      s.Section='B';
      s.cgpa=3.6;
      cout<<s.name<<endl; //Print=> Md.Jahid Hasan


      Student Tajul;
      char nm2[100]="Tajul Islam";
      strcpy(s.name,nm2);
      
      Tajul.roll=5;
      Tajul.Section='A';
      Tajul.cgpa=3.5;
      
      cout<<"Cgpa of Tajul:"<<Tajul.cgpa; //Print=>The Cgpa of Tajul:3.50
    return 0;
}
ClassName objectName;
