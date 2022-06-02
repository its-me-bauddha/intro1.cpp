/*Fahrenheit to Celsius Table
Send Feedback
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.
Input Format :
3 integers - S, E and W respectively 
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value. The Fahrenheit value and its corresponding Celsius value should be separate by single space.
Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 
Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37*/

#include <iostream> 
using namespace std;
void printTable(int S, int E, int W) {
    while (S<=E) {
        int c=(5 *( S - 32))/9;
        cout << S<< " " << c << endl;
        S+=W;
        
    } 
    
}

int main () {
     int S,E,W;
    cin >> S >> E >>W ;
    printTable(S,E,W);
}


