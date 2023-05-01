#include<iostream>
using namespace std;

int fact (int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * 1;
    }
    return fact;
}



int main(){
int n;
cin>>n;
int ans = fact(n);

cout<<"Factoril of"<<n<<" is "<<ans<<endl;

}