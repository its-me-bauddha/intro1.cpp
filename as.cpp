include <iostream> 
using namespace std;
void printTable(int S, int E, int W) {
    while (S<=E) {
        int c=(5 *( S - 32))/9;
        cout << S<< " " << c << "/n";
        S+=W;
        
    } 
    
}

int main () {
     int S,E,W;
    cin >> S >> E >> W ;
    printTable(S,E,W);
}

