#include<iostream>
#include<math.h>
using namespace std;

void prime(long a,long b){
    long i,n;
    bool flag=true;
    for(a;a<=b;a++){
        flag=true;
        n=sqrt(a);
        for(i=2;i<=n;i++){
            if(a%i==0){
                flag=false;
                break;
            }
        }
        if(flag && a!=1)
            cout<<a<<endl;
    }
    return;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long a,b;
        cin>>a>>b;
        if(a>b){
            long temp=a;
            a=b;
            b=temp;
        }
        prime(a,b);
    }
    return 0;
}
