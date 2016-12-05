#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int gcd(int a,int b){
	int k;
	if(a>b){
		k=a;
		a=b;
		b=k;	
	}
	if(b%a==0){
		return a;
	}
	else return gcd(b%a,a);
}



int lcm(int a, int b){
	return (a*b)/gcd(a,b);

}


int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	for(int i=0;i<T;i++){
		int N;
		cin >> N;
		vector<long int> A;
		for(int k=0;k<N;k++){
			long int a;
			cin >> a;
			A.push_back(a);
		}
		int l;
		vector<long int>cp;
		sort(A.begin(),A.end());
		l = lcm(A[0],A[1]);
		for(int j=0;j<N;j++){
			for(int k=0;k<N;k++){
				if(A[k]>l) break;
				if(j!=k){
					l = min(l,lcm(A[j],A[k]));
				}
			}
			if(A[j]>l) break;
		}
		cout << l << endl;
	}	
	return 0;
}
