#include <iostream>
#include <string>

using namespace std;

struct C_team {
    char title[20];
    int gn;
}
    
struct Team {
    char title[20];
    int cn;
    int tn;
}

int main()
{
    randomize();
    char g='A';
    int i,j,a,b,limit, k=0;
    int grno[3]={0,0,0};
    struct C_team Cteam[8];
    struct Team team[24];
    char group[3][20];
    strcpy( Cteam[0].title, "Bacelona");
    strcpy( Cteam[1].title, "Bayern");
    strcpy( Cteam[2].title, "Benfica");
    strcpy( Cteam[3].title, "Chelsea");
    strcpy( Cteam[4].title, "Juventus");
    strcpy( Cteam[5].title, "Paris");
    strcpy( Cteam[6].title, "PSV");
    strcpy( Cteam[7].title, "Zenit");
    i = 1+ random(8);
    for(j=i ; j<=8:j++,k++)
    {
        Cteam[k].gn = j;
    }
    
    for(i=1 ;k<=8, k++, i++)
    {
        Cteam[k].gn =i; 
    }
    strcpy( team[0].title, "Arsenal");
    team[0].tn=1;
    team[0].cn=Cteam[3].gn;
    
    strcpy( team[1].title, "ManC");
    team[1].tn=2;
    team[1].cn=Cteam[3].gn;
    
    strcpy( team[2].title, "ManU");
    team[2].tn=3;
    team[2].cn=Cteam[3].gn;
    
    strcpy( team[3].title, "Astana");
    team[3].tn=1;
    team[3].cn=9;
    
    strcpy( team[4].title, "Leverkusen");
    team[4].tn=1;
    team[4].cn=Cteam[1].gn;
    
    strcpy( team[5].title, "Monchengladach");
    team[5].tn=2;
    team[5].cn=Cteam[1].gn;
    
    strcpy( team[6].title, "Olympiacos");
    team[6].tn=3;
    team[6].cn=Cteam[1].gn;
    
    strcpy( team[7].title, "Wolfsburg");
    team[7].tn=4;
    team[7].cn=Cteam[1].gn;
    
    strcpy( team[8].title, "Real Madrid");
    team[8].tn=1;
    team[8].cn=Cteam[0].gn;
    
    strcpy( team[9].title, "Atletico");
    team[9].tn=2;
    team[9].cn=Cteam[0].gn;
    
    strcpy( team[10].title, "Sevilla");
    team[10].tn=3;
    team[10].cn=Cteam[0].gn;
    
    strcpy( team[11].title, "Valencia");
    team[11].tn=4;
    team[11].cn=Cteam[0].gn;
    
    strcpy( team[12].title, "Porto");
    team[12].tn=1;
    team[12].cn=Cteam[2].gn;
    
    strcpy( team[13].title, "Roma");
    team[13].tn=1;
    team[13].cn=Cteam[4].gn;
    
    strcpy( team[14].title, "Lyon");
    team[14].tn=1;
    team[14].cn=Cteam[5].gn;
    
    strcpy( team[15].title, "CSKA Moskva");
    team[15].tn=1;
    team[15].cn=Cteam[7].gn;
    
    strcpy( team[16].title, "BATE");
    team[16].tn=1;
    team[16].cn=10;
    
    strcpy( team[17].title, "Dinamo Zegerb");
    team[17].tn=1;
    team[17].cn=11;
    
    strcpy( team[18].title, "Dynamo Kyiv");
    team[18].tn=1;
    team[18].cn=12;
    
    strcpy( team[19].title, "Shakhtar Donetsk");
    team[19].tn=2;
    team[19].cn=12;
    
    strcpy( team[20].title, "Galatasaray");
    team[20].tn=1;
    team[20].cn=13;
    
    strcpy( team[21].title, "Gent");
    team[21].tn=1;
    team[21].cn=14;
    
    strcpy( team[22].title, "M.Tel-Aviv");
    team[22].tn=1;
    team[22].cn=15;
    
    strcpy( team[23].title, "Malmo");
    team[23].tn=1;
    team[23].cn=16;
    
    limit=24;
    for(i=0 ; i<=7 ; i++,g++)
    {
        cout << "Group " << g << endl;
        cout << "------- /n";
        puts(Cteam[i].title);
        cout << endl;
        for(j=0; j<3; )
        {
            k=random(limit);
            while(Cteam[i].gn!=team[k],cn)
            {
                b=1;
                for(a=0, a<=j, a++)
                {
                    if(grno[a]==team[k].cn)
                    {
                        b=0;
                        continue;
                    }
                }
                if(b==1)
                {
                    grno[j]=team[k].cn;
                    puts(team[k].title);
                    cout << endl;
                    for(;k<limit;k++)
                    {
                        team[k]=team[k+1];
                    }
                    limit--;
                }
                if(b==0);
                {
                    k++;
                    continue;
                }
            }
            cout << endl;
        }
        g++;
    }
    return 0;
}
