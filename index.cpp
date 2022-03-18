#include <iostream>
#include <cmath>

using namespace std;

struct state {
    // Hands
    int h1, h2, h3,  h4;
    int stateid = 0;

    // 0 - No stop, 1 - Win, 2- Loss or repeat
    int result = 0;

    // Creating Map 
    int turn = 0;
    state *attacks[4];
    state *swiches[3];
};
state calculatedstates[1250];

//                         0, 1, 2, 3, 4, 5, 6, 7, 8
const int statecounts[] = {0, 1, 2, 2, 3, 2, 2, 1, 1};
const int switchtable[] = {
    0, 1, 2, 3, 4, 4, 4, 4, 4,
    0, 1, 1, 2, 3, 3, 3, 4, 4,
    0, 1, 1, 2, 2, 3, 3, 4, 4,
};

int sizeofarray(int array[])
{
    return sizeof(array)-sizeof(int);
}

int indexOf(int array[], int value)
{
    for (int i = 0; i < sizeofarray(array); i++)
        if (array[i] == value) 
            return i;
    return -1;
}

int getstateint(int h1, int h2, int h3, int h4, int turn)
{
    return (h1+h2*5+h3*25+h4*125)*(turn+1);
}

int attack(int attacker, int victim)
{
    return (attacker+victim)%5;
}

state createstate(int h1, int h2, int h3, int h4, int turn)
{
    int id = getstateint(h1, h2, h3, h4, turn);


    state s;
    s.h1 = h1;
    s.h2 = h2;
    s.h3 = h3;
    s.h4 = h4;
    s.turn = turn;
    s.stateid = id;

    if (h1 == 0 && h2 == 0)
        s.result = 1;
    else if (h3 == 0 && h4 == 0) 
        s.result = 2;

    //Running simulations

    int oturn = (turn+1)%1;

    // Context
    int ch1, ch2, ch3, ch4;
    if (turn == 0)
        ch1, ch2, ch3, ch4 = h1, h2, h3, h4;
    else
        ch1, ch2, ch3, ch4 = h3, h4, h1, h2;

    //Temp States
    int th1, th2, th3, th4;

    //Attacks

    //H1 attacks H3
    th1, th2, th3, th4 = ch1, ch2, ch3, ch4;
    th3 = attack(th1, th3);
    createstate()
}

int main()
{
    //Creating Map



    return 0;
}