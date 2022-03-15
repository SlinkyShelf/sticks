#include <iostream>

using namespace std;

struct state {
    int ph1, ph2, oh1,  oh2;
    int result;
    int turn = 0;
    state *attacks[4];
    state *swiches[3];
};

//                         0, 1, 2, 3, 4, 5, 6, 7, 8
const int statecounts[] = {0, 1, 2, 2, 3, 2, 2, 1, 1};
const int switchtable[] = {
    0, 1, 2, 3, 4, 4, 4, 4, 4,
    0, 1, 1, 2, 3, 3, 3, 4, 4,
    0, 1, 1, 2, 2, 3, 3, 4, 4,
};

state *getmoves(int ph1, int ph2, int oh1, int oh2)
{

}



int main()
{
    //Creating Map



    return 0;
}