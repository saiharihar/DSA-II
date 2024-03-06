#include<bits/stdc++.h>
using namespace std;

void tower_of_hanoi(int n,char from,char to,char helper){
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,from,helper,to);
    cout<<from<<"->"<<to<<endl;
    tower_of_hanoi(n-1,helper,to,from);
}
int main(){
    int n;
    cin>>n;
    tower_of_hanoi(n,'A','C','B');
    
}
