#include<iostream>    
using namespace std;  
void printFibonacci(int n){    
    static int n1=0, n2=1, n3;    
    if(n >0)
    {    
      n3 = n1 + n2;    
      n1 = n2;    
      n2 = n3;    
 cout<<n3<<" ";    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n,num;    
    cout<<"ingresa catidad fibonacci: ";    
    cin>>n; 
    //cin>>num;
    cout<<"serie Fibonacci : ";    
    cout<<"0 "<<"1 ";  
    printFibonacci(n-2);  
    //fibo(num);
     return 0; 
  }