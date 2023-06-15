#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char s;
        int math_marks;
        int eng_marks;
};
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    Student a[N];
    for(int i=0;i<N;i++)
    {
    
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
    for(int i=N-1;i>=0;i--)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}