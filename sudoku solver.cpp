#include<bits/stdc++.h>
using namespace std;
void printboard(int a[][9],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool canplace(int a[][9],int i,int j,int no,int n){
	for(int k=0;k<n;k++){
		if(a[i][k]==no|| a[k][j]==no){
			return false;
		}
	}
	int sx=(i/3)*3;
	int sy=(j/3)*3;
	for(int x=sx;x<sx+3;x++){
		for(int y=sy;y<sy+3;y++){
			if(a[x][y]==no){
				return false;
			}
		}
	}
	return true;
	
}

bool sudokusolver(int a[][9],int i,int j,int n){
	if(i==n){
		printboard(a,n);
		return true;
	}
	if(j==n){
		return sudokusolver(a,i+1,0,n);
	}
	if(a[i][j]!=0){
		return sudokusolver(a,i,j+1,n);
	}
	
	for(int no=1;no<=n;no++){
		if(canplace(a,i,j,no,n)){
			a[i][j]=no;
			bool solvesubproblem= sudokusolver(a,i,j+1,n);
			if(solvesubproblem==true){
				return true;
			}
			
			
		}
	}
	a[i][j]=0;
	return false;
}
int main(){
	int n=9;
	int a[9][9]=
	{{5,3,0,0,7,0,0,0,0},
	{6,0,0,1,9,5,0,0,0},
	{0,9,8,0,0,0,0,6,0},
	{8,0,0,0,6,0,0,0,3},
	{4,0,0,8,0,3,0,0,1},
	{7,0,0,0,2,0,0,0,6},
	{0,6,0,0,0,0,2,8,0},
	{0,0,0,4,1,9,0,0,5},
	{0,0,0,0,8,0,0,7,9}};
	
	if(!sudokusolver(a,0,0,n)){
		cout<<"solution does'nt exist";
	}
	return 0;
}
