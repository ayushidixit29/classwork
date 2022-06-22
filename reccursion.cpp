#include<bits/stdc++.h>
using namespace std;
void reccursion(string X=""){
    cout<<X<<endl;
    if(X.size()>=3){
        return;
    }
    for(char y='a';y<'d';y++){
        reccursion (X+y);
    }
    
}
int main(){
   string a ="";
    reccursion(a);
}
