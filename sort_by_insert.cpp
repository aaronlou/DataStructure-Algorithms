#include <iostream>

using namespace std;


int main(){
//    auto start = std::chrono::high_resolution_clock::now();
    int N;
    cin >> N;
//    if(N < 1 || N > 100) {return -1;}
//    vector<int> a;
    int a[N];

    for(int i = 0; i <= N-1; i++){
        cin >> a[i];
    }

//sort
    for(int i = 0; i <= N-1; i++){
        int key = a[i];
        for(int j = i -1 ; j >= 0; j--){
            if(a[j] > key){
                a[j+1] = a[j];
                a[j] = key;
            }else{
                break;
            }
        }
        for(int j:a) cout << j << " ";
        cout << endl;
        }
//    auto end = std::chrono::high_resolution_clock::now();
//    cout << "f() took "
//         << std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count()/1000
//         << " seconds\n";
    return 0;
}
