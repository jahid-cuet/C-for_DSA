#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Jahid Hasan";
    Student j(18,'C',12,name);
    return j;
}
int main()
{
    Student jahid=fun();

    cout<<jahid.name<<endl;
    return 0;
}

