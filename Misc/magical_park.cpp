#include <iostream>
#include <cstring>
using namespace std;
#define R 4
#define C 4
void magical_park(char a[R][C], int strength, int thresh_strength){
    bool success= true;
    for(int i= 0; i< R; i++){
        for(int j= 0; j< C; j++){
        char ch= a[i][j];
            if(strength< thresh_strength){
                success= false;
                break;
            }
            if(ch== '*'){
                strength+= 5;
            }   
            else if(ch== '.'){
                strength-=2;
            }
            else if(ch== '#'){
                break;
            }

            if(j!= C- 1){
            strength--;
            }
        }
    }
    if(success){
        cout<<"Yes the magical park can be traversed"<<endl;
    }
    else{
        cout<<"No, the magical park cannot be traversed"<<endl;
    }

}


int main(){
    cout<<"Park Dimensions are"<<R<<"x"<<C<<endl;
    int thresh_strength, curr_strength;
    cout<<"Enter threshold strength"<<endl;
    cin>>thresh_strength;
    cout<<"Enter current strength"<<endl;
    cin>>curr_strength;
    cout<<"Enter Park elements"<<endl;
    char a[R][C];
    for(int i= 0; i< R; i++){
        for(int j= 0; j<C; j++){
            cout<<"Park Element"<<i<<j<<endl;
            cin>>a[i][j];
        }
    }
    magical_park(a, curr_strength, thresh_strength);
    return 0;
}