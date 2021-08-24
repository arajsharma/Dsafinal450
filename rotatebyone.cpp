#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void rotatebyOne(int a[],int n){
	int tmp = a[n-1];
	for(int i=n-2;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0]=tmp;
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	debugMode();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	rotatebyOne(a,n);
	print(a,n);
	return 0;
}