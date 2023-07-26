#include <bits/stdc++.h>
#include <string.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// To make Lines
void drawLine(int n,char symbol){

    for(int i=0; i<n; i++){
        cout<<symbol;
    cout<<" ";
    }
}

// Rules of Game 
void rules(){

    system("cls");
    cout<<"\n\n";

    drawLine(84,'_');
    cout<<"\n";
    cout<<"\n\t\t\t\t\t\t\t\t\tRULES OF THE GAME\t\t\t\t\t\t\t\t\t\n";
    cout<<"\n";
    drawLine(84,'_');
    cout<<"\n";
    cout<<"\n";

    cout<<"\t1. Choose any number between 1 to 10\n";
    cout<<"\t2. **If you win you will get 2x times of money you Bet\n";
    cout<<"\t3. If you bet on wrong number you will lose your Betting Amount\n\n";
    cout<<"\n";

    cout<<"** is that you agreed to pay 30% of winning amount to the Host\n";

    drawLine(84,'_');
}

int main(){

    string PlayerName;
    int amount;
    int bettingAmount;
    int guess;
    int dice;
    
    char choice;


    // Let's Play the Game
    srand(time(0));

    drawLine(84,'_');
    cout<<"\n\n\t\t\t\t\t\t\t\t\tBETTING GAME\t\t\t\t\t\t\t\t\n\n";
    drawLine(84,'_');

    cout<<"\n\nEnter Your Name: ";
    getline(cin,PlayerName);

    // Get Player's Betting Amount
    cout<<"\nDeposit amount to Play Game: Re ";
    cin>>amount;

    do{
        system("cls");
        rules();

        cout<<" \n\nYour Current Balance is Re "<<amount<<"\n";

    while(bettingAmount>amount){
        cout<<PlayerName<<" Enter Money to Bet : Re ";
        cin>>bettingAmount;

        if(bettingAmount>amount){
            cout<<"\n";
            cout<<PlayerName<<" your Betting amount is more than your Deposited Amount\n"
                <<"Re-enter It\n";
                
        }

    } 


    do{
        cout<<"Guess your number to bet between 1 to 10: ";
        cin>>guess;


        if(guess<1 || guess>10)
        cout<< " Please check the number should be between 1 to 10\n"
            << "Re-enter data\n";
    
    }while(guess<0 && guess<=10);

    dice = rand()%10 + 1;

    if(dice==guess){
        cout<<" \n\n Good Luck !! You Won Re "<<bettingAmount * 2;
        amount += (bettingAmount*0.7);
    }

    else{
        cout<< "Bad luck this time !! You Lost Re "<<bettingAmount<<"\n";
        amount -= bettingAmount;
    }

    cout<<"\n The winning Number was: "<<dice<<"\n";
    cout<<"\n"<<PlayerName<<", You Have Re "<<amount<< " left \n";

    if(amount==0){
        cout<<"You have no money to Play";
        break;
    }

    cout<<"\n\n--<Do you want to play again (y/n)?";
    cin>>choice;

    }while(choice=='Y'||choice=='y');

    cout<<"\n\n\n";
    drawLine(84,'=');

    cout<<"\n\n Thanks for Playing the Game. Your Balance amount is Re "<<amount<<"\n\n";
    drawLine(84,'=');

}

