#include<iostream>
using namespace std;

char TTT[3][3];
string T[3][3];
void boardCord()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            T[i][j] = i + ' ' +j;
        }
    }    
}
void makeTTT()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            TTT[i][j] = ' ';
        }
    }
}

void printTTT()
{
    for(int i=0;i<3;i++)
    {
        cout << " | " ;
        for(int j=0;j<3;j++)
        {
            cout << TTT[i][j] << " | ";
        }
        cout << endl;
    }    
}

bool checkHor(int r , int c , char ch)
{
    for(int i=0;i<3;i++)
    {
        if(TTT[r][i] != ch)
            return false;
    }
    return true;
}

bool checkVer(int r , int c , char ch)
{
    for(int i=0;i<3;i++)
    {
        if(TTT[i][c] != ch)
            return false;
    }
    return true;
}

bool checkMD(int r , int c , char ch)
{
    for(int i=0;i<3;i++)
    {
        if(TTT[i][i] != ch)
            return false;
    }
    return true;
}

bool checkSD(int r , int c , char ch)
{
    for(int i=0;i<3;i++)
    {
        if(TTT[i][2-i] != ch)
            return false;
    }
    return true;
}

void run()
{
    bool isP1=true;
    bool won = false;
    
        for(int i=0;i<3 && !won;i++)
        {
            for(int j=0;j<3 && !won;j++)
            {
                int r , c;
                if(isP1)
                {
                    cout << "P1 :- enter row and coln " << endl;
                    cin >> r >> c;
                    
                    if(r<3 && c<3)
                    {
                        if(TTT[r][c] == ' ')
                        {
                            TTT[r][c] = 'X';
                            printTTT();
                            
                            if(checkHor(r,c,'X'))
                            {
                                cout << "P1 won" << endl;
                                
                                won = true;
                            }
                            
                            else if(checkVer(r,c,'X'))
                            {
                                cout << "P1 won" << endl;
                                
                                 won = true;
                            }
                            
                            else if(checkMD(r,c,'X'))
                            {
                                cout << "P1 won" << endl;
                               
                                 won = true;
                            }
                            
                            else if(checkSD(r,c,'X'))
                            {
                                cout << "P1 won" << endl;
                                
                                 won = true;
                            }
                            else
                            {
                                isP1 = false;
                            }
                            
                        }
                        else//not blank
                        {
                            cout << " position is already filled " << endl << "enter again"<< endl;
                            j--;
                        }
                    }
                    else
                    {
                        cout << "row and column value must be between 0 and 2 " << endl <<"enter again"<< endl;
                        j--;
                    }
                }
                
                //p2
                
                else
                {
                    cout << "P2 :- enter row and coln " << endl;
                    cin >> r >> c;
                    
                    if(r<3 && c<3)
                    {
                        if(TTT[r][c] == ' ')
                        {
                            TTT[r][c] = 'O';
                            printTTT();
                            
                            if(checkHor(r,c,'O'))
                            {
                                cout << "P2 won" << endl;
                                
                                won = true;
                            }
                            
                            else if(checkVer(r,c,'O'))
                            {
                                cout << "P2 won" << endl;
                                
                                won = true;
                            }
                            
                            else if(checkMD(r,c,'O'))
                            {
                                cout << "P2 won" << endl;
                                
                                won = true;
                            }
                            
                            else if(checkSD(r,c,'O'))
                            {
                                cout << "P2 won" << endl;
                                
                                won = true;
                            }
                            else
                            {
                                isP1 = true;
                            }
                            
                        }
                        else//not blank
                        {
                            cout << " position is already filled " << endl << "enter again"<< endl;
                            j--;
                        }
                    }
                    else
                    {
                        cout << "row and column value must be between 0 and 2 " << endl <<"enter again"<< endl;
                        j--;
                    }
                    
                }
            }
        }
   
    
    if(!won)
    cout << "draw" << endl;
    
}