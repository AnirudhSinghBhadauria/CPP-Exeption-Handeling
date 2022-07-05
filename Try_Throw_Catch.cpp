#include <iostream>

using namespace std;

int main(){

    float a;
    float b;
    float c;

    cout<<"Enter the Value of A : ";
    cin>>a;
    cout<<"Enter the Value of B : ";
    cin>>b;


    try{
        if(b==0){
            throw 404;
        }

        c = a/b;
        cout<<"\n\t\t\t\t\t"<<a<<"/"<<b<<" = "<<a/b<<"\n";
    }
    catch(int e){
        cout<<"\nError Code : "<<e<<"\nDenomenator Cannot be Zero !!\nTry Entering a valid Input !!\n";
    }
    cout<<"Bye!\nThank You!";
    return 0;
}