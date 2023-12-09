#include <iostream>
using namespace std;
#include <string>

int enemyPositions[5][5] = {
    {0,0,0,1,0},
    {0,1,0,0,0},
    {0,0,0,1,0},
    {0,0,1,0,1},
    {1,0,0,0,0},

};

int hits = 0;
int turns = 0;
int shipsLeft = 6;

int main() {

    //declare vars
    string response;

    cout<<"\nThis board consists of 5 rows and 5 columns, and your task is to:\n\nDestroy all "<<shipsLeft<<" enemy ships."<<endl<<endl;

    while (true) {
        
        int row, column;
        
        cout << "Selecting target row...\n"<<endl;
        cin >> row;
        cout << "Acknowledged.\n"<<endl;

        cout << "Selecting target column...\n"<<endl;
        cin >> column;
        cout << "Acknowledged.\n"<<endl;

        turns++;

        cout<<"\n\nRequesting confirmation: Launching rocket at position: row "<<row<<", column "<<column<<'?'<<endl<<endl;
        cin>>response;
        if (response=="yes"){
            if (enemyPositions[row][column] == 1){
                cout<<"Hit!"<<endl;
                hits++;
                enemyPositions[row][column] = 0;
                shipsLeft--;
                printf("\nThere are %i ships left on the board.", shipsLeft);
                if (shipsLeft==0) {
                    printf("GAME OVER. \n\nYou took %i turns to win.", turns);
                    break;
                }    
                        
            } else {
                cout<<"\nMiss!"<<endl;
            }
        
            
            
        }

    }    

    
    
    return 0;
}