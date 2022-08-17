#include<iostream>

 using namespace std;

 long long bigmod(long long a, long long b, long long M)
 {
     if(b==0) return 1%M;

     long long x = bigmod(a,b/2,M);
     x= (x*x)%M;

     if(b%2==1) x=(x*a)%M;
     return x;
 }

 int main()
 {
     long long B,P,M;
       while(cin>>B>>P>>M){
         cout<< bigmod(B,P,M)<<endl;
    }
     return 0;
 }
