//Sieve of Eratosthenes - Used to print all prime numbers in given range

#include <iostream>
using namespace std;

void sieve(int n){
  int arr[n]={0};
  for(int i=2;i<=n;i++){
    if(arr[i]==0){
      for(int j=i*i;j<=n;j+=i){
        arr[j]=1;
      }
    }
  }
  printf("Prime Numbers till %d are : \n",n);
  for(int i=2;i<=n;i++){
    if(arr[i]==0) cout<<i<<" ";
  }
  cout<<endl;
}

//Finding prime factors using Sieve of Eratosthenes

void Primefactor(int n){
  int spf[100]={0};
  for(int i=2;i<=n;i++){
    spf[i]=i;
  }
  for(int i=2;i<=n;i++){
    if(spf[i]==i){
      for(int j=i*i;j<=n;j+=i){
        if(spf[j]==j) spf[j]=i;
      }
    }
  }
printf("Prime Factors of %d are : \n",n);
while(n!=1){
  cout<<spf[n]<<" ";
  n=n/spf[n];
}
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    sieve(n);
    Primefactor(m);
    return 0;
}
