#include<iostream>
#include<vector>

using namespace std;

int getbit(int n,int idx){

    return (n & (1<<idx))? 1: 0;
}

signed main(){
  
  int n;
  cin>>n;
  vector<int>  arr(n);

  for(int i=0;i<n;i++) cin>>arr[i];

  
  for(int i=0;i< (1<<n) ;i++){
       cout<<"{";
      for(int j=0;j<n;j++){
         
        if( (getbit(i,j)) ){
        cout<<arr[j]<<" ";
        }
      }
      cout<<"} ";
  }

}