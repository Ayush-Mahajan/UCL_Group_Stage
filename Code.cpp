#include <iostream>
#include <string>

using namespace std;

struct C_team {
    char team[20];
    int gn;
}
    
struct Team {
    char team[20];
    int cn;
    int tn;
}

int main()
{
    randomize();
    
    struct C_team Cteam[8];
    struct Team team[24];
    strcpy( Cteam[0].title, "Bacelona");
    strcpy( Cteam[1].title, "Bayern");
    strcpy( Cteam[2].title, "Benfica");
    strcpy( Cteam[3].title, "Chelsea");
    strcpy( Cteam[4].title, "Juventus");
    strcpy( Cteam[5].title, "Paris");
    strcpy( Cteam[6].title, "PSV");
    strcpy( Cteam[7].title, "Zenit");
    
    
    strcpy( team[0].title, "Arsenal");
    team[0].tn=1;
    strcpy( team[1].title, "ManC");
    team[1].tn=2;
    strcpy( team[2].title, "ManU");
    team[2].tn=3;
    strcpy( team[3].title, "Astana");
    team[3].tn=1;
    strcpy( team[4].title, "Leverkusen");
    team[4].tn=1;
    strcpy( team[5].title, "Monchengladach");
    team[5].tn=2;
    strcpy( team[6].title, "Olympiacos");
    team[6].tn=3;
    strcpy( team[7].title, "Wolfsburg");
    team[7].tn=4;
    strcpy( team[8].title, "Real Madrid");
    team[8].tn=1;
    strcpy( team[9].title, "Atletico");
    team[9].tn=2;
    strcpy( team[10].title, "Sevilla");
    team[10].tn=3;
    strcpy( team[11].title, "Valencia");
    team[11].tn=4;
    strcpy( team[12].title, "Porto");
    team[12].tn=1;
    strcpy( team[13].title, "Roma");
    team[13].tn=1;
    strcpy( team[14].title, "Lyon");
    team[14].tn=1;
    strcpy( team[15].title, "CSKA Moskva");
    team[15].tn=1;
    strcpy( team[16].title, "BATE");
    team[16].tn=1;
    strcpy( team[17].title, "Dinamo Zegerb");
    team[17].tn=1;
    strcpy( team[18].title, "Dynamo Kyiv");
    team[18].tn=1;
    strcpy( team[19].title, "Shakhtar Donetsk");
    team[19].tn=2;
    strcpy( team[20].title, "Galatasaray");
    team[20].tn=1;
    strcpy( team[21].title, "Gent");
    team[21].tn=1;
    strcpy( team[22].title, "M.Tel-Aviv");
    team[22].tn=1;
    strcpy( team[23].title, "Malmo");
    team[23].tn=1;
    cout << "Hello world!" << endl;
    for(i=1 ; i<=8 ; i++)
    return 0;
}
