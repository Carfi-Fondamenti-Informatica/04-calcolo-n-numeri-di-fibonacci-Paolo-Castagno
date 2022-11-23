
#include <iostream>
using namespace std;

int main() {
   int a=1,b=1, c=0, n=0;
    cin>> n;
    if (n<2){
        cout<<"errore";
    } else {
    cout << a << endl << b << endl;
        for (int i=0; i<(n-2); i++){
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;           
        }
    }
    return 0;
}
