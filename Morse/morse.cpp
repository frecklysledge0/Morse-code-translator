#include <string>
#include "letterDefinition.h"

using namespace std;

bool checkPoint(string s){return (s == ".");}

bool checkDash(string s){return (s == "-");}

bool checkSpace(string s){return (s == " ");}


string morseAutomata(){

    string morseCode;
    string code("");
    int state = 0;
    morseCode = getchar();

    while (morseCode != "\n"){
        
        //Implementation of transition function
        switch (state){

        case START:
            if (checkPoint(morseCode))
                state = E;
            else if (checkDash(morseCode))
                state = T;
            else
              state = ERROR;
            break;

        case A:
            if (checkPoint(morseCode))
                state = R;
            else if (checkDash(morseCode))
                state = W;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;
            break;

        case B:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){ 
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;
            break;

        case C:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case D:
            if (checkPoint(morseCode))
                state = B;
            else if (checkDash(morseCode))
                state = X;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;          
            break;

        case E:
            if (checkPoint(morseCode))
                state = I;
            else if (checkDash(morseCode))
                state = A;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;
          break;

        case F:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }     
            else
              state = ERROR;         
            break;

        case G:
            if (checkPoint(morseCode))
                state = Z;
            else if (checkDash(morseCode))
                state = Q;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }  
            else
              state = ERROR;          
            break;

        case H:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }      
            else
              state = ERROR;          
            break;

        case I:
            if (checkPoint(morseCode))
                state = S;
            else if (checkDash(morseCode))
                state = U;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case J:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;         
            break;

        case K:
            if (checkPoint(morseCode))
                state = C;
            else if (checkDash(morseCode))
                state = Y;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case L:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }  
            else
              state = ERROR;         
            break;

        case M:
            if (checkPoint(morseCode))
                state = G;
            else if (checkDash(morseCode))
                state = O;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            } 
            else
              state = ERROR;          
            break;

        case N:
            if (checkPoint(morseCode))
                state = D;
            else if (checkDash(morseCode))
                state = K;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            } 
            else
              state = ERROR;          
            break;

        case O:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            } 
            else
              state = ERROR;          
            break;

        case P:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }    
            else
              state = ERROR;          
            break;

        case Q:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }     
            else
              state = ERROR;          
            break;

        case R:
            if (checkPoint(morseCode))
                state = L;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case S:
            if (checkPoint(morseCode))
                state = H;
            else if (checkDash(morseCode))
                state = V;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case T:
            if (checkPoint(morseCode))
                state = N;
            else if (checkDash(morseCode))
                state = M;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case U:
            if (checkPoint(morseCode))
                state = F;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }    
            else
              state = ERROR;
            break;

        case V:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case W:
            if (checkPoint(morseCode))
                state = P;
            else if (checkDash(morseCode))
                state = J;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }  
            else
              state = ERROR;          
            break;

        case X:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }
            else
              state = ERROR;          
            break;

        case Y:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            else if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }   
            else
              state = ERROR;          
            break;

        case Z:
            if (checkPoint(morseCode))
                state = ERROR;
            else if (checkDash(morseCode))
                state = ERROR;
            if(checkSpace(morseCode)){
                code.append(1, char(state));
                state = SPACE;
            }    
            else
              state = ERROR;          
            break;

        case ERROR:
            code = "Syntax error";
            break;

        case SPACE:
            if (checkPoint(morseCode))
                state = E;
            else if (checkDash(morseCode))
                state = T;
            else if(morseCode == "/"){
              code.append(1, char(state));
              state = WORD_SPACE;           
              }
            else
              state = ERROR;          
            break;

        case WORD_SPACE:
            if (checkPoint(morseCode))
                state = E;
            else if (checkDash(morseCode))
                state = T;          
            break;
        
        }
        morseCode = getchar();
    }

    return code.append(1, char(state));
}
