#include<iostream>
using namespace std;
void hanota(int n,char a,char b,char c){
	if(n==1){
		cout<<a<<"->"<<c<<endl;
	}
	else{
		hanota(n-1,a,c,b);
		cout<<a<<"->"<<c<<endl;
		hanota(n-1,b,a,c);
	}
}
int main(){
	hanota(6,'A','B','C');
	return 0; 
} 



