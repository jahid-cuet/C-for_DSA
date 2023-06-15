#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char s;
        int id;
};
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    Student a[N];
    for(int i=0;i<N;i++)
    {
        
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id;
        cin.ignore();
    }

    for (int i = 0, j = N - 1; i < j; i++, j--) {
        swap(a[i].id, a[j].id);
    }
    for(int i=0;i<N;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<endl;
    }
    return 0;
}