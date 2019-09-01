#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++) {
            cin>>a[i];
        }

        int no=0, c1;
        for(int i=0; i<n; i++) {
            if(i==0 && a[i]!=-1) {
                c1 = a[i];
                break;
            }
            else if(i==n-1 && a[i]==-1) {
                c1=1;
            }
            else if(a[i]!=-1) {
                if((i+1)%2==0) {
                    c1 = ( (a[i]%2==0)?1:2);
                    break;
                } else {
                    c1 = a[i];
                    break;
                }
            }
        }
        for(int j=0; j<n; j++) {
            if(k==2) {
                if(a[j]==-1) {
                    a[j] = c1;
                } else {
                    if(a[j]!=c1) {
                        cout<<"NO\n";
                        no=1;
                        break;
                    }
                }
            }
            c1 = (c1==2?1:2);
        }
        if(!no) {
            cout<<"YES\n";
            for(int i=0; i<n; i++) {
                if(i==n-1)
                    cout<<a[i]<<" \n";
                else
                    cout<<a[i]<<" ";
            }
        }
    }
}