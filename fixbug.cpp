#include<bits/stdc++.h>
using namespace std;
int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
int i=0,j=n-1;
int res=0;
while(i<=j){
	if(a[i]+a[j]==k){
		int m=j;
		int cnt=0;
		while(a[j]==a[m]&&m!=i){
			cnt++;
			m--;
		}
		res+=cnt;
	
		i++;
	
	}
	else if(a[i]+a[j]>k){
		j--;
	}
	else if(a[i]+a[j]<k){
		i++;
	}
}
cout<<res;

	
}
