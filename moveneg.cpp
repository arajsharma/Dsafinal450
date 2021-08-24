#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void print(int a[],int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
void sortnegative(int a[],int l,int r){
	while(l<=r){
		if(a[l]<0 && a[r]<0){
			l++;
		}
		else if(a[l]>0 && a[r]<0){
			swap(a[l],a[r]);
			l++,r--;
		}
		else if(a[l]>0 && a[r]>0){
			r--;
		}
		else{
			l++,r--;
		}
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
	sortnegative(a,0,n-1);
	print(a,n);
	return 0;
}