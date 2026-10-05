#include <iostream>
using namespace std;


string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main (){
    int repeat = 1;
    while (repeat == 1)
    {
        cout << "[1] Decimal To Binary" << endl;
        cout << "[2] Binary To Decimal" << endl ;
        int option;
        cout << "Input Your Option : ";
        cin >> option;

        if (option ==1)
        {
            int decimal;
            cout << "Input Your Decimal : ";
            cin >> decimal;
            cout << "Your Binary is : " << decimalToBinary (decimal) << endl;
        }else if( option == 2){
            string binary;
            cout << "Input Your Binary : ";
            cin >> binary;
            cout << "Your Decimal is : " << binaryToDecimal (binary) << endl;
        }

        cout << "Repeat? [0:no/1:yes] : " ;
        cin >> repeat;
    
    }
    cout << "Program Ends";
}