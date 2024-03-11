#include<bits/stdc++.h>
using namespace std;

class FootballGame{
public:
    int matchID;
    string homeTeamName;
    string awayTeamName;
    vector <string> homeTeamPlayers;
    vector <string> awayTeamPlayers;
    int homeTeamScore;
    int awayTeamScore;

    FootballGame(int rmatchID, string rhomeTeamName, string rawayTeamName){
        matchID = rmatchID;
        homeTeamName = rhomeTeamName;
        awayTeamName = rhomeTeamName;
    }

    void addPlayerToHomeTeam(string homePlayer){
        homeTeamPlayers.push_back(homePlayer);
    }

    void addPlayerToAwayTeam(string awayPlayer){
        awayTeamPlayers.push_back(awayPlayer);
    }

    void updateScore(int homescore, int awayscore){
        homeTeamScore = 0;
        awayTeamScore = 0;

        homeTeamScore += homescore;
        awayTeamScore += awayscore;
    }

    void displayMatchdetails(){
        cout << "Match ID : " << matchID << endl;
        cout << "Home Team : " << homeTeamName << endl;
        cout << "Players : ";
        for (int i = 0; i < homeTeamPlayers.size(); i++){
            cout << "-" << homeTeamPlayers[i] << " " << endl;
        }
        cout << "Home Team score : " << homeTeamScore << endl;
        cout << "Away team : " << awayTeamName << endl;
        cout << "Players : ";
        for (int i = 0; i < awayTeamPlayers.size(); i++){
            cout << "-" << awayTeamPlayers[i] << " "<< endl;
        }
        cout << "Away Team score " << awayTeamScore << endl;
    }
};

int main(){
FootballGame g1(101, "Barcelona", "Real Madrid");
g1.addPlayerToHomeTeam("Messi");
g1.addPlayerToHomeTeam("Ronaldo");
g1.addPlayerToAwayTeam("Neymar");
g1.updateScore(2, 1);
g1.displayMatchdetails();
return 0;
}
/*Match ID : 101
Home Team : Barcelona
Players : -Messi
-Ronaldo
Home Team score : 4
Away team : Barcelona
Players : -Neymar
Away Team score 1
*/
