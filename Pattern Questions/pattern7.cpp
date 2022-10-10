#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;  // Enter No. of rows and columns
int i=1;
int val= i;
while (i<=n){
    int j=1;
       while(j<=i){
        cout<< val;
        val+=1;
        j+=1;
       }
    cout<< endl;   
   i+=1;    
}

}