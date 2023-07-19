#include<iostream>
#include<string>
using namespace std;


class Player
{
    private:
        int player_no;
        string name;
        int match;
        int *goals;
    public:
        Player(){  }
        Player(int x,string y,int z):player_no(x),name(y),match(z)
        {
            goals=new int[match];
            for(int i=0;i<match;i++)
            {
                goals[i]=0;
            }
        }
        void setGoals(int i,int goal)
        {
            if(i<match && 1>=0)
                goals[i]=goal;
        }
        void inputPlayer()
        {
            cout<<"Enter Player No      : ";
            cin>>player_no;
            cout<<"Enter Player Name    : ";
            fflush(stdin);
            getline(cin,name);
            cout<<"Enter no of matches  : ";
            cin>>match;
            goals=new int[match];
            for(int i=0;i<match;i++)
            {
                cout<<"Enter goal in match "<<i+1<<" : ";
                cin>>goals[i];
            }
        }
        void displayPlayer()
        {
            cout<<"----------------------------------------------\n"<<endl;
            cout<<"Player No            : "<<player_no<<endl;
            cout<<"Player Name          : "<<name<<endl;
            cout<<"No. of Matches played: "<<match<<endl;
            for(int i=0;i<match;i++)
            {
                cout<<"\nGoal in match "<<i+1<<" : "<<goals[i];
            }
            cout<<"\n----------------------------------------------\n"<<endl;
        }
        ~Player(){ delete []goals; }

};

int main()
{
   Player player(1, "John Doe", 5);

    player.setGoals(0, 2);
    player.setGoals(1, 1);
    player.setGoals(2, 0);
    player.setGoals(3, 3);
    player.setGoals(4, 1);

    player.displayPlayer();
    Player p;
    p.inputPlayer();
    p.displayPlayer();

    return 0;
}