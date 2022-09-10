#include<iostream>    
using namespace std;
void fibo(int num){
  static int x, y=1,z=0;
  for(int i=0;i<=num;i++)
    {
      cout<<x<<" ";
      z = x + y;
      x = y;
      y = z;
    }
}
int main(){    
    int n,num;    
    cout<<"ingresa catidad fibonacci: ";    
    //cin>>n; 
    cin>>num;
    cout<<"serie Fibonacci : ";    
   // cout<<"0 "<<"1 ";  
    //printFibonacci(n-2);  
    fibo(num);
     return 0; 
  }