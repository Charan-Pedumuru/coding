#include<bits/stdc++.h>

using namespace std;

int main()
{
    int opt;
    cout<< "Enter the option at which your age lies\n 1.Age from 1 to 12\n 2.Age from 13 to 19\n 3.Age from 20 to 35\n 4.Age from 36 to 60\n 5.Age beyond 60\n ";
    cin>> opt;
    switch(opt)
    {
        case 1: cout<< "Hello kiddie\nEnjoy your day";
        break;
        case 2: cout<< "Hey there\nDo the things which shape your future";
        break;
        case 3: cout<< "You are young \nGet yourself a job";
        break;
        case 4: cout<< "Time to plan your kid's future\n";
        break;
        case 5: cout<< "Wow! you are very old\nIt's time to retire";
        break;
        default : cout<< "Please choose the correct option ";
    }
}
