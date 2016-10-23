#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void seive(int n ,int p[]){
	int prime[n+1];
	prime[0]=prime[1]=0;
	int i,j;
	for(i=0;i<n;i++){
		prime[i]=1;
		p[i]=0;
	}
	for(i=2;i*i<=n;i++){
		if(prime[i]){
			for(j=2*i;j<=n;j=j+i){
				prime[j]=0;
			}
		}
	}
	int count = 0;
	//int p;
	for (int q=2; q<=n; q++){
		if(prime[q]){
		count++;
			p[q]=count;
		}else{
			p[q]=count;
		}
	}
}
//Recursive Solution
/*int c(int n){
    if (n<=3)
        return 1;
    else return c(n-1)+c(n-4);
}*/

int main() {
    int np[220000];
	seive(217300,np);
    int t,n,ans;
    int F[41];
    cin>>t;
    F[0]=F[1]=F[2]=F[3]=1;
    for(int i=4;i<=40;i++)
        F[i] = F[i-1]+F[i-4];
    while(t--){
        cin>>n;
        ans =F[n];
        //cout<<ans<<" "<<F[40]<<"\n";
        cout<<np[ans]<<"\n";
    }
    return 0;
}
