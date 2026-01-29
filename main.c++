#include <iostream>

using namespace std;

string reverse(string i);
void genNum();

int main(){
    genNum();
    return 0;
}

string reverse(string i){
    string reversedNum;
    for(int j = i.length() -1; j >= 0; j--){
         char temp = i[j];
         reversedNum += temp;
    }
    return reversedNum;
}

void genNum(){
    for(int i = 1000; i <= 9999; i++){
        int j = stoi(reverse(to_string(i)));
        if(i == j/4){
            cout << i << " - " << j << endl;
        }
    }
}
