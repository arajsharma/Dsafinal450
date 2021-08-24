#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void minmax(int a[],int n){
	int l=0,r=n-1;
	int mx = INT_MIN;
	if(a[l]>a[r]){
		mx = a[l];
	}
	else{
		mx = a[r];
	}
	l++,r--;
	while(l<=r){
		if(a[l]>a[r]&&mx<a[l]){
			mx = a[l];
		}
		else if(a[r]>a[l] && mx<a[r]){
			mx = a[r];
		}
		else{
			l++,r--;
		}
	}
	cout<<mx<<" is maxm.";
}
// void minmax(int a[],int n){
// 	int mx = a[0];
// 	int mn = a[0];
// 	for(int i=0;i<n;i++){
// 		if(mx<a[i]){
// 			mx = a[i];
// 		}
// 		if(mn>a[i]){
// 			mn = a[i];
// 		}
// 	}
// 	cout<<mx<<" "<<mn;
// }
int main(){
	debugMode();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	minmax(a,n);


	return 0;
}