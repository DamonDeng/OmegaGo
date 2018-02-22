#ifndef OMEGAGO_GODATATYPE
#define OMEGAGO_GODATATYPE

const int GO_EMPTY = 0;
const int GO_BLACK = 1;
const int GO_WHITE = 2;
const int GO_BORDER = 3;


const int GO_UP = 1;
const int GO_DOWN = 2;
const int GO_LEFT = 3;
const int GO_RIGHT = 4;


const int BOARD_SIZE = 19;
const int PLAN_SIZE = BOARD_SIZE + 2;
const int TOTAL_SIZE = PLAN_SIZE * PLAN_SIZE;

//  using an point outside the plan to indentify PASS move. 100 is subjectively selected
const int GO_PASS = TOTAL_SIZE + 100; 
const int GO_RESIGN = GO_PASS + 1;

const int GO_NS = PLAN_SIZE;

typedef int GoColor;

typedef int GoPoint;

typedef int GoDirection;


namespace GoUtil{

}


namespace GoPointUtil{

    inline GoPoint Pt(int row, int col){
        return GO_NS * row + col;
    }

    inline bool InRange(int number){
        return number > 0 && number <= BOARD_SIZE;
    }
}

#endif