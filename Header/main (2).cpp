#include <iostream>
#include <array>
using namespace std;

int calc_output(int a[], int b[]);

int main(){
    int T;
    cin >>T;
    while(T!=0){
        int N;
        cin >> N;
        int a[N], b[N];
        for(int i=0;i<N;i++){
            cin >> a[i];
        }
        for(int i=0;i<N;i++){
            cin >> b[i];
        }
       int ans = calc_output(a,b);
       cout << ans << endl;
        T--;
    }
}

int calc_output(int a[], int b[]){
    int count =0;
    int size = sizeof(a)/sizeof(a[0]);
    
}