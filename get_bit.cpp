#include<iostream>

using namespace std;
 
 int get(int idx,int n){
     
     return (n & (1<<idx))? 1 : 0;

 }

void set(int &n,int idx){
  n= (n | (1<<idx));
}

void clear(int idx,int &n){
    
    n= (n ^ (1<<idx));
    /*
    //or
    n= (n & ~(1<<idx));

    */
}
 
int main(){
    
    cout<<"enter number ";
    int n;
    cin>>n;
    cout<<"enter position ";
    int idx;
    cin>>idx;
    
    cout<<get(idx,n)<<endl;

    cout<<"set bit in position ";
    cin>>idx;
    //cout<<n<<endl;
    set(n,idx);
    cout<<n<<endl;
    cout<<"clear bit in position ";
    cin>>idx;
    clear(idx,n);
    cout<<n<<endl;

    

    
}