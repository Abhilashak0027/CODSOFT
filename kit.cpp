#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char Symbol = 'x'; 
bool tie=false;
string Player1=" "; 
string Player2=" ";

void function1() { 
    cout << "       |       |       " << endl;
    cout<<"   "<<board[0][0]<<"   |   "<<board[0][1]<<"   |   "<<board[0][2]<<" \n";
    cout << "       |       |       " << endl;
    cout << "_______|_______|_______" << endl;
    cout << "       |       |       " << endl;
    cout << "       |       |       " << endl;
    cout<<"   "<<board[1][0]<<"   |   "<<board[1][1]<<"   |   "<<board[1][2]<<" \n";
    cout << "       |       |       " << endl;
    cout << "_______|_______|_______" << endl;
    cout << "       |       |       " << endl;
    cout<<"   "<<board[2][0]<<"   |   "<<board[2][1]<<"   |   "<<board[2][2]<<" \n";
    cout << "       |       |       " << endl;
    cout << "       |       |       " << endl;
    
   

}

void function2() { 
    int Number;

    if (Symbol == 'x') {
        cout << Player1 << " please Enter Number:";
        cin >> Number;
    }
    if (Symbol == '0') {
        cout << Player2 << " please Enter Number:";
        cin >> Number;
    }
if(Number==1){
    row=0;
    column=0;
}
if(Number==2){
    row=0;
    column=1;
}
    if(Number==3){
    row=0;
    column=2;
}
    if(Number==4){
    row=1;
    column=0;
}
if(Number==5){
    row=1;
    column=1;
}
if(Number==6){
    row=1;
    column=2;
}
if(Number==7){
    row=2;
    column=0;
}
    if(Number==8){
    row=2;
    column=1;
}
if(Number==9){
    row=2;
    column=2;
}
else if(Number<1 || Number>9){
    cout<<"Invalid!!!!!!!!!!"<<endl;
    
}
if(Symbol=='x' && board[row][column] !='x' && board[row][column]!='0'){
board[row][column]='x';
Symbol='0';
}
else if(Symbol=='0' && board[row][column] !='x' && board[row][column] !='0') {
    board[row][column]='0';
    Symbol='x';
}
else{
    cout<<"There is no space in board "<<endl;
    function2();
}
    function1();
    
}

bool function3() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
            return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] || board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        return true;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'x' && board[i][j] != '0') {
                return false;
            }
        }
    }
    tie = true;
    return false; 
}
int main(){
    
    cout<<"Enter the name of player1 :"<<endl;
     getline(cin, Player1);
     
     cout<<"Enter the name of player2 :"<<endl;
        getline(cin, Player2);
        
    cout << Player1 << " is the first player so he/she will play first :"<<endl;
    cout << Player2 << " is the second player so he/she will play second :" << endl;
 
    
    while(!function3()){
        function1();
        function2();
        function3();
    }
    if(Symbol=='x' && tie==false){
        cout<<Player1<<"win!!!!"<<endl;

    }
    else if(Symbol=='0' && tie==false){
    cout<<Player2<<"win!!!!!!"<<endl;
    }else{
        cout<<"Withdraw!!!"<<endl;
    }

return 0;
}