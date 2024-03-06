  #include<bits/stdc++.h>
  using namespace std;
  
  bool canplace(int a[][20],int n,int i,int j){
  	int x=i;
  	int y=j;
  	 for(int k=0;k<x;k++){
  	 	if(a[k][y]==1){
  	 		return false;
		   }
	   }
	   while(x>=0 && y>=0){
	   	if(a[x][y]==1){
	   		return false;
		   }
		   x--;y--;
	   }
	   x=i;
	   y=j;
	   while(x>=0 && y>=0){
	   	if(a[x][y]==1){
	   		return false;
		   }
		   x--;y++;
	   }
	   return true;
  }
  void printboard(int a[][20],int n){
  	for(int i=0;i<n;i++){
  		for(int j=0;j<n;j++){
  			cout<<a[i][j]<<" ";
		  }
		  cout<<endl;
	  }
  }
  bool solvenqueen(int a[][20],int i,int n){
  	if(i==n){
  		printboard(a,n);
  		return true;
	  }
	  for(int j=0;j<n;j++){
	  	if(canplace(a,n,i,j)){
	  		a[i][j]=1;
	  		bool success=solvenqueen(a,i+1,n);
	  		if(success){
	  			return true;
	        }
	        else{
	        	a[i][j]=0;
			}
	        
	  		
		  }
	  }
	  
	  return false;
  }
  int main(){
  	int n;
  	cin>>n;
  	int a[n][20]={0};
  	solvenqueen(a,0,n);
  	
  }
