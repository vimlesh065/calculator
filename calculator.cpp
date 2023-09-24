#include<iostream>
using namespace std;
auto calculator(auto a,auto b){
    char op;
    cout<<" enter the operator among +,-,*,/"<<endl;
    cin>> op;
    switch(op){
        case '+':
         cout<<(a+b)<<endl;
         break;
        case '-':
         cout<<(a-b)<<endl;
         break;
        case '*':
         cout<<(a*b)<<endl;
         break;
        case '/':
         if(b != 0){
            cout<<a/b<<endl; 
         }
         else{
            cout<< "division is not possible, second number can not be zero for division"<<endl;

         }
         break;
        default:
         cout<<"please enter operator from +,-,*,/7"<<endl;
         break;
    }
}
int main(){
    float a,b;
    cout<<"enter first number"<< endl;
    cin>>a;
    cout<<"enter second number"<<endl;
    cin>> b;
    
    calculator(a,b);

  

    return 0;
}