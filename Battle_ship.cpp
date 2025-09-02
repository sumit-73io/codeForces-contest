#include <iostream>
using namespace std;

int main() {
    int n;cin >> n;
    const int size = 10;
    int board[11][11] = {0};

    bool valid = true;

    for (int i = 0; i < n; i++){
        int D, L, R, C;
        cin >> D >> L >> R >> C;

        if (D == 0){
            if (C + L - 1 > size){
                valid = false;
            } else{
                for (int k = 0; k < L; k++){
                    if (board[R][C + k] == 1){
                        valid = false;
                        break;
                    }
                    board[R][C + k] = 1;
                }
            }
        } else{
            if (R + L - 1 > size){
                valid = false;
            } else{
                for (int k = 0; k < L; k++){
                    if (board[R + k][C] == 1){
                        valid = false;
                        break;
                    }
                    board[R + k][C] = 1;
                }
            }
        }
    }

    if(valid){
        cout<<"Y"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    
    return 0;

}