#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int i=1;
    int num;
    cout<<"Enter number : ";
    cin>>num;

    while (i<=num)
    {
        int j=1;
        while (j<=num)
        {
            cout<<" * ";
            j++;
        }
        cout<<"\n";
        i++;  
    }
    int i1=1;
    while (i1<=num)
    {
        int j1=1;
        while (j1<=num)
        {
            cout<<j1<<" ";
            i1++;
        }
        cout<<"\n";
        i1++;
        
    }
    
    


    return 0;
}
