#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout<<"----------WELCOME TO THE NUMBER GUESSING GAME -------------"<<endl;
    cout<<"|| ---LETS START THE GAME---- ||"<<endl;
    cout<<"CHOOSE THE NUMBER BETWEEN 1 TO 50"<<endl;

    srand(time(0));
    int randomNumber =(rand() % 50 ) + 1;

  cout<<"YOU HAVE TOTAL ^ CHANCE TO GUESS THE CORRECT NUMBER :"<<endl;
  int chance =6;
    int player;

    for(int i=1;i<=6;i++){
        cout<<"Enter the Number:"<<endl;
        cin>>player;

        if(player == randomNumber){
            cout<<"WHOPPYY!!!!!!!! YOU GUESS THE CORRECT NUMBER "<<endl;
            break;
        }
        else{
            if(player < randomNumber){
                cout<<"Guess Bigger Number  Try again"<<endl;
            }else{
                cout<<"Guess Smaller Number Try again"<<endl;
            }
        }
        chance--;
     cout<<"chance Left to guess the correct Number: "<<chance<<endl;

        if(chance == 0){
            cout<<"Gameover!!!!"<<endl<<"Tata"<<endl;
        }
    }
    return 0;
}