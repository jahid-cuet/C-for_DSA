#include<bits/stdc++.h>
using namespace std;

class Bike{
    public:
    char name[100];
   
    int length;

    Bike(char* n,int l){
        strcpy(name,n);
        
        length=l;
    }
};
int main()
{
    char name[100]="jahid";
    Bike Hero(name,12);
    cout<<Hero.length<<endl;
    
    return 0;
}