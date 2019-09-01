#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int a[3], c[3];
        for(int i=0; i<3; i++)
            cin>>a[i];
        for(int i=0; i<3; i++) {
            cin>>c[i];
        }

        int notfair=0;
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                if(a[i]<a[j] && c[i]>=c[j])  {
                    notfair=1;
                    cout<<"NOT FAIR\n";
                    break;
                } else if(a[i]==a[j] && c[i]!=c[j] ) {
                    notfair=1;
                    cout<<"NOT FAIR\n";
                    break;
                } else if(a[i]>a[j] && c[i]<=c[j]) {
                    notfair=1;
                    cout<<"NOT FAIR\n";
                    break;
                }
            }
            if(notfair) {
                break;
            }
        }
        if(!notfair)
            cout<<"FAIR\n";
    }
}