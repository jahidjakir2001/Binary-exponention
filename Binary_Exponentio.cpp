#include<bits/stdc++.h>
using namespace std;
void Binary_exponention(int base,int power)
{
    long long res=1;
    int a=power;
    int b=base;
    while(power>0){
        if(power%2==1){
            res*=base;
            power--;
        }
        else{
            base*=base;
            power/=2;
        }
    }
    cout<<"The value of "<<b<<"^"<<a<<" = "<<res<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int base,power;
        cin>>base>>power;
        Binary_exponention(base,power);
    }
}
