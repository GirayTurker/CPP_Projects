#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

int x = 0;
int fnd = 1;

//2 Dimension Array
bool puzzle[10][10] ={
    {x,x,x,x,x,x,x,x,x,fnd},
    {x,x,x,x,x,fnd,x,x,x,x},
    {x,x,x,x,x,x,x,fnd,x,x},
    {x,x,x,x,fnd,x,x,x,x,x},
    {fnd,x,x,x,x,x,x,x,x,x},
    {x,x,x,x,x,x,x,fnd,x,x},
    {x,x,x,x,x,x,fnd,x,x,x},
    {x,x,x,x,x,x,x,x,x,x},
    {x,x,x,x,fnd,x,x,x,x,x},
    {fnd,x,x,x,x,x,x,x,x,x}
};

//Total hits counter
int hits=0;
//Total number of user turns
int totalNumOfTurns = 0;
//Defied for user turns left
int numOfTurnsLeft=25;

//loop for find 9 puzzle parts with 25 turns
while (hits<9)
{
    int row;
    int column;
    

    cout<<"\nSelect a row between 0 to 9: ";
    cin>>row;

    cout<<"\nSelect a column between 0 to 9: ";
    cin>>column;

    

    if (puzzle[row][column]){
        puzzle[row][column] = x;
        hits++;
        cout<<"Good job! Now "<< (9-hits) << " parts left\n"; 
        
    }

    else{
        cout<<"I am sorry, You could not find any puzzle piece\n";   
    }
    numOfTurnsLeft--;
    totalNumOfTurns++;    
    cout<<"\n";
    cout<<numOfTurnsLeft<<" turns left\n";
}

cout<<"\nGratz! You found all puzzle pieces!";
cout<<"You found all puzzle pieces "<< totalNumOfTurns <<" turns\n";


}