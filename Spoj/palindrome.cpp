#include <iostream>
using namespace std;

 int main() {

	long int t,a,di=0,a1=0,a2=0,flag,flag1,flag2,flag3;
	cin>>t;
	for(long int k=0;k<t;k++){
		di=0;
		flag=0;
		flag1=0;
		flag2=0;
		flag3=0;
		cin>>a;
		a1=a;
		a2=a;
		while(a1>0){
			di++;
			a1=a1/10;
		}
		long int ar[di];
		for(long int i=0;i<di;i++){
			ar[di-i-1]=a2%10;
			a2=a2/10;
		}
		for(long int i=0;i<di;i++){
			if(ar[i]==9){
				flag++;
			}
		}
		for(long int i=0;i<di;i++){
			if(ar[i]==ar[di-i-1]){
				flag1++;
			}
		}
		for(long int i=1;i<di-1;i++){
			if(ar[i]==9){
				flag2++;
			}
		}
		for(long int i=0;i<di;i++){
			if(ar[i]==0){
				flag3++;
			}
		}
		if(flag==di){
			cout<<"1";
			for(long int i=0;i<di-1;i++){
				cout<<"0";
			}
			cout<<1;
			cout<<endl;
		}
		else if(flag1==di){
			if(di%2==1){
				ar[di/2]++;	
				if(ar[di/2]==10){
					ar[di/2]=0;
					ar[di/2-1]++;
					ar[di/2+1]++;
				}
			}
			else{
				ar[di/2-1]++;
				ar[di/2]++;
				if(ar[di/2]==10){
					ar[di/2-1]=0;
					ar[di/2]=0;
					ar[di/2-2]++;
					ar[di/2+1]++;
				}
			}
			for(long int i=0;i<di;i++){
				cout<<ar[i];
			}
			cout << endl;
		}
		else if(flag2==di-2 && flag!=di){
			if(ar[0]>ar[di-1]){
				ar[di-1]=ar[0];
			}
			else{
				ar[0]++;
				for(long int i=1;i<di-1;i++){
					ar[i]=0;
				}
				ar[di-1]=ar[0];
			}
			for(long int i=0;i<di;i++){
				cout<<ar[i];
			}
			cout<<endl;
		}
		else if(flag3==di){
			if(di%2==1){
				ar[di/2]=1;
			}
			else{
				ar[di/2-1]=1;
				ar[di/2]=1;
			}
			for(long int i=0;i<di;i++){
				cout<<ar[i];
			}
			cout<<endl;
		}
		else if(di==1) cout << "11" << endl;
		else if(di==2){
			if(ar[0]>ar[1]){
				ar[1]=ar[0];
			}
			else{
				ar[0]++;
				ar[1]=ar[0];
			}
			cout << ar[0] << ar[1] << endl;
		}
		else if(di==3 && flag1!=di){
			if(ar[0]>ar[2]){
				ar[2]=ar[0];
			}
			else{
				ar[1]++;
				ar[2]=ar[0];
			}
			cout << ar[0] << ar[1] << ar[2] << endl;
		}
		else{
			if(di%2==0){
				for(long int i=di/2-1,j=di/2;i>0,j<di-1;i--,j++){
					if(ar[i]>=ar[j]){
						ar[j]=ar[i];
					}
					else{
						ar[i]++;
						ar[j]=ar[i];
					}
				}
				if(ar[0]>ar[di-1]){
					ar[di-1]=ar[0];
				}
				else{
					ar[di-1]=ar[0];
					ar[di/2]++;
					ar[di/2-1]++;
				}
			}
			else{
				for(long int i=di/2-1,j=di/2+1;i>0,j<di-1;i--,j++){
					if(ar[i]>=ar[j]){
						ar[j]=ar[i];
					}
					else{
						ar[i]++;
						ar[j]=ar[i];
					}
				}
				if(ar[0]>ar[di-1]){
					ar[di-1]=ar[0];
				}
				else{
					ar[di-1]=ar[0];
					ar[di/2]++;
				}
			}
			for(long int i=0;i<di;i++){
				cout<<ar[i];
			}
			cout<<endl;
		}
	}
}