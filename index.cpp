#include <iostream>
#include <cmath>

using namespace std;

struct state {
    int ph1, ph2, oh1,  oh2;
    int result;
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

//Pointer Array of states
//Seven Possible new states
state *getmoves(int ph1, int ph2, int oh1, int oh2)
{

}

int getstateint(state sat)
{
    return (max(sat.ph1, sat.ph2) + min(sat.ph1, sat.ph2)*5+max(sat.oh1, sat.oh2)*25 + min(sat.oh1, sat.oh2)*125)*sat.turn;
}

int main()
{
    //Creating Map



    return 0;
}