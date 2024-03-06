#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    char c;
    cout<<"Enter character : ";
    cin>>c;
    if(c >= 'a' && c <= 'z'){
        cout<<"Letter is in small case."<<endl;
    }else if(c >= 'A' && c <= 'Z'){
        cout<<"Letter is in big case."<<endl;
    }else{
        cout<<"Letter is number";
    }

    int num;
    cout<<"Enter number :  ";
    cin>>num;
    int i=1;
    int sum=0;
    while (i<=num){
        sum+=i;
        i++;
    }
    cout<<"sum of number  : "<<sum;
    

    int evenumber;
    int sumEven=0,sumOdd=0;
    int i1=0;
    cout<<"Enter number : ";
    cin>>evenumber;
    while (i1<=evenumber)
    {
        if(i1%2==0){
            sumEven+=i;
        }else{
            sumOdd+=i;
        }
        i1++;
    }
    cout<<sumEven<<" "<<sumOdd<<endl;

    int primeNumber;
    cout<<"Enter number : ";
    cin>>primeNumber;
    int primeI=2;
    while (primeI<primeNumber)
    {
        if(primeI%2==0){
            cout<<"not a prime number"<<primeI<<endl;
            
        }else{
            cout<<"prime number"<<primeI<<endl;
        }
        primeI++;
    }
    
    return 0;
    
}