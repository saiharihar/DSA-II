#include<bits/stdc++.h>
using namespace std;
class heap{
	public:
	vector<int>v;
	void heapify(int i){
		int l=2*i;
		int r=2*i+1;
		int minidx=i;
		if(l<v.size() and v[l]<v[i]){
			minidx=l;
		}
		if(r<v.size() and v[r]<v[minidx]){
			minidx=r;
		}
		if(minidx!=i){
			swap(v[i],v[minidx]);
			heapify(minidx);
		}
	}
		heap(int size=10){
			v.reserve(size+1);
			v.push_back(-1);
		}
void push(int data){
	v.push_back(data);
	int idx=v.size()-1;
	int parent=idx/2;
	while(idx>1 and v[idx]<v[parent]){
		swap(v[idx],v[parent]);
		idx=parent;
		parent=parent/2;
	}
}
int top(){
	return v[1];
}
void pop(){
	int idx=v.size()-1;
	swap(v[1],v[idx]);
	v.pop_back();
	heapify(1);
}
bool empty(){
	return v.size()==1;
}
void print(){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
};
int  main(){
	heap h;
	int n;
	cout<<"enter no of elements in the heap"<<endl;
	cin>>n;
	cout<<" enter the elements"<<endl;
	for(int i=0;i<n;i++){
		int k;
		cin>>k;
		h.push(k);
	}
	cout<<" heap is"<<endl;
	h.print();
	h.pop();
	cout<<endl;
	h.print();
	
}

