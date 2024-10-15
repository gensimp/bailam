#include<iostream>
#include<cmath>
using namespace std;
int socs(int k,int n){
	short dem=0;
	while (k>0){
		k/=10;
		dem++;
	}
	if (dem==n) return 1;
	return 0;
}
int snt(int k){
	for (int i=2;i<=sqrt(k);i++){
		if (k%i==0) return 0;
	}
	return 1;
}
int tongnt(int k){
	int sum=0;
	while (k>0){
		sum+=k%10;
		k/=10;
	}
	if (snt(sum)) return 1;
	return 0;
}
int cs(int k){
	while (k>0){
		int i=k%10;
		k/=10;
		if (snt(i)==0) return 0;
	}
	return 1;
}
int main(){
	int k,n;cin>>k>>n;
	if (socs(k,n)&&snt(k)&&tongnt(k)&&cs(k)) cout<<"k thoa man tat ca dieu kien"<<endl;
	else cout<<"k khong thoa man tat ca dieu kien"<<endl;
	cout<<socs(k,n)<<snt(k)<<tongnt(k)<<cs(k);
	return 0;
}
