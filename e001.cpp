#include <iostream>

using namespace std;

int main(void){
    int contador = 1;
    string palabra;

    while(cin >> palabra){
       cout << contador << ". " << palabra << endl;
       contador++;
    }

    return 0;
}

