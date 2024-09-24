#include<iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main(){
    char playagain;
    do{
        srand(time(0));
    int secretnum = rand()%100+1;
    int guess;
    int attempts = 0;
    int maxattepts = 5;
    cout<<"Guess the number between 1 to 100. You have "<<maxattepts<<" to try!"<<endl;

    while(attempts < maxattepts){
        cout<<"Enter your guess: ";
        cin>>guess;
        attempts++;

        if(guess==secretnum){
            cout<<"Congratulations! You guessed the number in "<<attempts<<" attempts"<<endl;
            break;
        }
        else if(guess < secretnum){
            cout<<"Too low! Try again"<<endl;
        }
        else{
            cout<<"Too High! Try again"<<endl;
        }
    }
    if(attempts==maxattepts){
        cout<<"Sorry! You have used all your attempts. The number was "<<secretnum<<endl;
    }
    cout<<"Do you want to play again? (y/n): ";
    cin>>playagain;
    }while(playagain=='Y' || playagain=='y');
    
    return 0;
}