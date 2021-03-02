
// C++ program to convert binary to decimal by Kevin Shera
#include <iostream>

using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;
}

// Principal function
int main()
{
    system("color A");
    char option;
    do{
    int num;
    cout<<"\nEnter the binary value to convert: ";
    cin>>num;
    cout << binaryToDecimal(num) << endl;
    cout<<endl<<"Choose the most suitable option: "<<endl;
    cout<<"c - continue and repeat the program "<<endl;
    cout<<"e - finish and close the program "<<endl;
    cout<<"p - clean the console and repeat the program ";
    do{
        cout<<endl<<"Choice: ";
            cin>>option;
    }   while((option!='c')&&(option!='e')&&(option!='p'));
            if (option=='p')
                {
                option='c';
                system("cls");
                }
    } while (option=='c');
    return 0;
}

