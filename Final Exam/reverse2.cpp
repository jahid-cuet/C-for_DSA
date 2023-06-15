#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
        int math_marks;
        int eng_marks;
        
};
bool cmp(Student a,Student b)
{     int m1=a.math_marks+a.eng_marks;
       int m2=b.math_marks+b.eng_marks;
    if(m1==m2){
        return a.id<b.id;
    } 
    return m1>m2;                    
                                          
    
                                             
     } 
int main()
{
    int N;
    cin>>N;
    Student a[N];
    for(int i=0;i<N;i++)
    {
        
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id>>a[i].math_marks>>a[i].eng_marks;
        cin.ignore();
    }
    
    // sort function
    sort(a,a+N,cmp);
    for(int i=0;i<N;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].math_marks<<" "<<a[i].eng_marks<<endl;
    }
    return 0;
}