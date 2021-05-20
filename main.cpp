#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   string x ;

    cout << "                                 Welcome to the classic game of Rock-paper-scissors. " << endl <<"Please enter your name."<<endl;
    cin  >> x;
    cout << endl <<endl << "Welcome " <<x<<"."<< " Here you will play against your computer."<<endl<<endl;
    cout << "       INSTRUCTIONS"<<endl;
    cout << "1.Just type your move (Rock, Paper or Scissor)."<<endl;
    cout << "2.First to reach 5 points wins."<<endl;
    cout << "3.You can write your move like Rock , rock or ROCK."<<endl;
    cout << "4.Please don't write your move like ROck, roCK, roCk etc etc. " <<endl<<endl<<endl;
    cout << "                                                     Enjoy the game"<<endl<<endl ;
    int a = 0;
    int b = 0;
    while(a < 5 && b < 5 ){
        string c;
        string e;
        int d = rand() % 3;

        cout <<endl << "Your move:- ";
        cin >> c ;
        //cout << endl;

        if((c=="Rock" || c=="rock" || c=="ROCK") && d==1){
            cout <<"Computer's move:- Rock" <<endl;
            cout <<"Draw. None gets a point." <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }

        if((c=="Rock" || c=="rock" || c=="ROCK") && d==2){
            b++;
            cout <<"Computer's move:- Paper" <<endl;
            cout <<"Computer Scores!!" <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }

        if((c=="Rock" || c=="rock" || c=="ROCK") && d==3){
            a++;
            cout <<"Computer's move:- Scissor" <<endl;
            cout <<"You score!!" <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }

        if((c=="Paper" || c=="paper" || c=="PAPER") && d==1){
            a++;
            cout <<"Computer's move:- Rock" <<endl;
            cout <<"You score!!" <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }
        if((c=="Paper" || c=="paper" || c=="PAPER") && d==2){
            cout <<"Computer's move:- paper" <<endl;
            cout <<"Draw. None gets a point." <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;

        }
        if((c=="Paper" || c=="paper" || c=="PAPER") && d==3){
            b++;
            cout <<"Computer's move:- Scissor" <<endl;
            cout <<"Computer scores!!" <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }
        if((c=="Scissor" || c=="scissor" || c=="SCISSOR") && d==1){
            b++;
            cout <<"Computer's move:- Rock" <<endl;
            cout <<"Computer scores!!" <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }
        if((c=="Scissor" || c=="scissor" || c=="SCISSOR") && d==2){
            a++;
            cout <<"Computer's move:- Paper" <<endl;
            cout <<"You score!!" <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }
        if((c=="Scissor" || c=="scissor" || c=="SCISSOR") && d==3){
            cout <<"Computer's move:- Scissor" <<endl;
            cout <<"Draw. None gets a point." <<endl;
            cout <<"Score:- "<< x << " = " << a << "  Computer = " << b <<endl ;
        }

    }
    if(a==5){
        cout << endl <<"Congrates!!You won!!" <<endl;

    }
    if(b==5){
        cout << endl <<"Oops!!You lost to the Computer. Try again." << endl << endl ;
    }

    int y ;
    cout << "Thank you for using the program"<<endl ;
    cin >> y ;






    return 0;
}
