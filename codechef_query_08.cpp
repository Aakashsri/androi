#include<iostream>
// #include<vector>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    unsigned long t;
    cin>>t;
    //Akash here
    for(unsigned long int i=0;i<t;i++){
        unsigned long int n,j;
        unsigned long int k,qel,val=0;
        vector<unsigned long int> Q;
        cin>>n>>k;
        unsigned long int pend=0;
        for( j=0;j<n;j++){
            cin>>qel;
            Q.push_back(qel);
        }
    
    
    //End
        for( j=0;j<n;j++){
            // cin>>qel;
            Q[j]+=pend;
            if(Q[j]>=k){
                pend=Q[j]-k;
            }
            else{
                cout<<j+1<<endl;
                val=1;
                break;
            }
        }
        if(val==0){
        if(pend>k){
            if(pend%k==0){
                cout<<j+(pend/k)+1<<endl;
            }
            else{
                cout<<j+(pend/k)+1<<endl;
            }
            
        }
        else
        if(pend==k){
             cout<<j+1<<endl;
        }
        else{
            cout<<j<<endl;
        }
        }
        else{

        }
    }
    return 0;
}
