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

//Pointer Array of states
//Seven Possible new states
void simulate(state s)
{
    //Attacks
    if (s.turn == 0)
    {
        
    } else {

    }

    

}

int getstateint(state s)
{
    return (max(s.h1, s.h2) + min(s.h1, s.h2)*5+max(s.h3, s.h4)*25 + min(s.h3, s.h4)*125)*s.turn;
}

state createstate(int h1, int h2, int h3, int h4, int turn)
{
    state s;
    s.h1 = h1;
    s.h2 = h2;
    s.h3 = h3;
    s.h4 = h4;
    s.turn = turn;
    s.stateid = getstateint(s);

    if (h1 == 0 && h2 == 0)
    {
        s.result = 1;
    } else if (h3 == 0 && h4 == 0) {
        s.result = 2;
    }
}

int main()
{
    //Creating Map



    return 0;
}