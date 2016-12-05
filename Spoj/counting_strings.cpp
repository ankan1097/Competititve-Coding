#include<iostream>
#include<cmath>
using namespace std;

int find_prev(string s,int i){
	int k;
	for(int j=i;j>=0;j--){
		if(s[j]=='a'||s[j]=='z'){
			k=j;
			break;
		}
	}
	return k+1;
}


int main(){
	int t;
	cin>>t;
	string s;
	for(int k=0;k<t;k++){
		cin>>s;
		int c=0,p=0;
		for(unsigned int i=0;i<s.length();i++){
			if(s[i]=='a'||s[i]=='z'){
				c=c-i+s.length();
				cout<<c<<endl;
				if(i!=0){
					p=find_prev(s,i);
					//cout<<p<<endl;
					p=p-i;
					cout<<p<<"s"<<endl;
					c=c+p*(s.length()-i);
					cout<<c<<"a"<<endl;
					p=0;
				}
			}
		}
		cout << c << endl;
	}
}