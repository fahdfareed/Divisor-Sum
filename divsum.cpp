// Copyright 2021 Muhammad Fahad Farid fahadf@bu.edu
// Copyright 2021 Samir Farhat Dominguez safarhat@bu.edu

#include "ec602.hpp"
using namespace ec602;

int main(int argc,char** argv) {
    int input = 1;
    int sum = 0;
    cin >> input;

    while(input != 0)
    {
        cout << input << ": 1";
        sum = 1;
        for(int i = 2; i < input; i++)
        {
            if(input % i == 0)
            {
                cout << "+" << i;
                sum += i;
            }
        }
        cout << " = " <<  sum << "\n";
        cin >> input;

    }


    return 0;
}