#include<bits/stdc++.h>
using namespace std;

void balpar(string output,int n,int open,int close,int i){
	if(i==2*n){
		cout<<output<<endl;
		return;
	}
	if(open<n){
		balpar(output+'(',n,open+1,close,i+1);
	}
	if(close<open){
		balpar(output+')',n,open,close+1,i+1);
	}
}
int main(){
	string output;
	int n;
	
	cin>>n;
	balpar(output,n,0,0,0);
}
