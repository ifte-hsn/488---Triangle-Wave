#include <iostream>

using namespace std;

int main()
{
    int tc; // test case
    int i, j, k; // counter
    int a; // amplitude;
    int f; // frequency


    while(cin >> tc ) {
        while(tc>0) {
            cin >> a >> f;
            for(k=f; k>0; k--) {
                for(i=1; i <= a; i++) {
                    for(j = 1; j <= i; j++) {
                        cout << i;
                    }
                    cout << endl;
                }
                for(i = a-1; i> 0; i--) {
                    for(j=i; j>0; j--) {
                      cout << i;
                    }

                    cout << endl;
                }
                if(k != 1){
                  cout << endl;
                }
            }
            if(tc > 1)
            {
                cout << endl;
            }
            tc--;
        }
    }

    return 0;
}
