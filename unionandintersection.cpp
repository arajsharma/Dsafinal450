#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

int intersection(int a[],int b[],int n,int m){
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==b[j]){
				cnt++;
			}
		}
	}
	return cnt;
}
int uni(int a[],int b[],int n,int m){
	return n+m-intersection(a,b,n,m);
}
int main(){
	debugMode();
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	for(int i=0;i<m;i++){
		cin>>b[i];
	}	
	cout<<"intersection is "<<intersection(a,b,n,m)<<" "<<"\n";
	cout<<"union is "<<uni(a,b,n,m);
	return 0;
}