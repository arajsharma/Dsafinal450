#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
int maxsubarray(int a[],int n){
	int maxsum=INT_MIN;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
			maxsum = max(maxsum,sum);
		}
	}
	return maxsum;
}
int main(){
	debugMode();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	cout<<maxsubarray(a,n);	
	return 0;
}