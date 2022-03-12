#include <iostream>

using namespace std;

struct state {
    int ph1, ph2, oh1,  oh2;
    int result;
    int turn = 0;
    state *attacks[4];
    state *swiches[2];
};

const int switchtable1[] = {0, 1, 2, 3, 4, 4};
const int switchtable2[] = {0, 1, 1, 2, 3, 3};
const int switchtable2[] = {0, 1, 1, 2, 2, 3};

state *getmoves(int ph1, int ph2, int oh1, int oh2)
{

}



int main()
{
    //Creating Map



    return 0;
}