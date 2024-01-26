#include<bits/stdc++.h>
using namespace std;

vector<int>spiralPrint(vector<vector<int>>&arr){
     vector<int> ans;
    int row=arr.size();
    int coloumn=arr[0].size();

    int count=0;
    int total=row*coloumn;

    int startingRow=0;
    int startingCol=0;
    int endingRow=row-1;
    int endingCol=coloumn-1;

while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(arr[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(arr[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(arr[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(arr[index][startingCol]);
                count++;
            }
            startingCol++;
        } 
        return ans;
    }


int main()
{
    cout << "Enter row" << endl;
    int row;

    cin >> row;
    cout << "Enter coloumn" << endl;
    int coloumn;
    cin >> coloumn;
    vector<vector<int>> arr(row, vector<int>(coloumn));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    vector<int> result = spiralPrint(arr);

    cout << "Spiral Print:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}