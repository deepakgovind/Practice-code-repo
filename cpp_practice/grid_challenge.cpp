/*Given a square grid of characters in the range ascii[a-z], rearrange elements of each row alphabetically, ascending. Determine if the columns are also in ascending alphabetical order, top to bottom. Return YES if they are or NO if they are not.*/


#include <bits/stdc++.h>

using namespace std;

string gridChallenge(vector<string> grid) {
    int grid_n[grid.size()][grid.size()];
    for(int i=0;i<grid.size();i++){
        sort(grid[i].begin(), grid[i].end());
        for(int j=0;j<grid.size();j++){
               grid_n[i][j]=grid[i][j];
        }
    }
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid.size()-1;j++){
            if(grid_n[j][i]>grid_n[j+1][i]){
                return "NO";
            }
        }
    }
    return "YES";
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<string> grid(n);

        for (int i = 0; i < n; i++) {
            string grid_item;
            getline(cin, grid_item);

            grid[i] = grid_item;
        }

        string result = gridChallenge(grid);

        cout << result << "\n";
    }


    return 0;
}

