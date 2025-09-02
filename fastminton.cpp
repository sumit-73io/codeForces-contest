#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;cin >> s;
    int gl = 0, gr = 0;
    int pl = 0, pr = 0; 
    char server = 'L';  
    bool hasMatchFinished = false;

    for(char c:s){
        if(c== 'S' || c== 'R'){
            if(hasMatchFinished)continue;
            if(c == 'S'){
                if (server == 'L') pl++;
                else pr++;
            }else{
                if (server == 'L') pr++;
                else pl++;

                if(server=='L'){
                    server = 'R';
                }else{
                    server = 'L';
                }
            }
            if((pl>=5 || pr>=5) && abs(pl-pr)>= 2 || pl==10 || pr==10){
                if(pl > pr){
                    gl++;
                    server= 'L';
                }else{
                    gr++;
                    server = 'R';
                }
                pl=0;
                pr=0;

                if(gl ==2 || gr== 2){
                    hasMatchFinished = true;
                }
            }
        }else if(c == 'Q'){
            if(hasMatchFinished){
                if(gl<gr) cout<< gl << " - " << gr << " (winner)" << endl;
                else cout<< gl << " (winner)"<< " - " << gr << endl;
            }else{
                cout<< gl << " (" << pl;
                if (server == 'L') cout << "*";
                cout<< ") - " << gr << " (" << pr;
                if (server == 'R') cout << "*";
                cout<< ")" << endl;
            }
        }
    }

    return 0;
}