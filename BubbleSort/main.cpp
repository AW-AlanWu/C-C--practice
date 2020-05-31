#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int ary[k];

    for(int i = 0; i < k; i++) { //To get the elements  array
        cin >> ary[i];
    }
    
    int e = k;

    for(int i = 0; i < k; i++) { //Bubble Sort need to run (ary.length() - 1) times
        for(int j = 0; j < e; j++) {
            if(ary[j] > ary[j + 1]) {
                int element = ary[j];
                ary[j] = ary[j + 1];
                ary[j + 1] = element;
            }
        }
        e--;
    }

    for(int i = 0; i < k; i++) {
        cout << ary[i] << " ";
    }
    cout << endl;
    return 0;
}
