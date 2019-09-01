#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;
        int k=0;
        while(k<n*m) {
            int count=0, k1=0;
            int a[n+1][m+1];
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=m; j++) {
                    a[i][j]=0;       
                }
            }
            for(int i=1; i<=n; i++) {
                for(int j=1; j<=m; j++) {
                    if(k1<=0) {
                        a[i][j]=1;
                        count++;
                        k1=k+1;
                    }
                    k1--;
                }
            }
            k1=0;
            for(int i=1; i<=m; i++) {
                for(int j=1; j<=n; j++) {
                    if(k1<=0) {
                        if(a[j][i]==0)
                            count++;
                        k1=k+1;
                    }
                    k1--;
                }
            }
            cout<<count<<" ";
            k++;
        }
        cout<<endl;
    }
}