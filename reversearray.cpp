#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
// void reverse(int a[],int start,int end){
// 	while(start<end){
// 		int tmp = a[start];
// 		a[start] = a[end];
// 		a[end] = tmp;
// 		start++;end--; 
// 	}
// }
void reverse(int a[],int s,int e){
	if(s>=e)return;
	
	int tmp = a[s];
	a[s] = a[e];
	a[e] = tmp;
	
	
	reverse(a,s+1,e-1);
}
int main(){
	debugMode();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
				//using reverse print

	// for(int i=n-1;i>=0;i--){
	// 	cout<<a[i]<<" ";
	// }
					//using stack

	// stack<int>s;
	// for(int i=0;i<n;i++){
	// 	s.push(a[i]);
	// }
	// while(!s.empty()){
	// 	int top = s.top();
	// 	cout<<top<<" ";
	// 	s.pop();
	// }

	reverse(a,0,n-1);
	print(a,n);


	return 0;
}