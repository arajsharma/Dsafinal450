#include<bits/stdc++.h>
using namespace std;
void debugMode(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
int main(){
	debugMode();
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}	
	int zerocnt=0,ocnt=0,tcnt=0;
	for(int i=0;i<n;i++){
		if(a[i]==0)zerocnt++;
		if(a[i]==1)ocnt++;
		if(a[i]==2)tcnt++;
	}
	while(zerocnt>0){
		cout<<0<<" ";
		zerocnt--;
	}
	while(ocnt>0){
		cout<<1<<" ";
		ocnt--;
	}
	while(tcnt>0){
		cout<<2<<" ";
		tcnt--;
	}
	return 0;
}