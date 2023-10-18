#include <stdio.h>
#include <stdlib.h>
typedef struct footballTeam
{
    int establishedYear;
    char rankInLeague;
    char captainName[20];
} fTeam;

int main(void)
{
    fTeam ahly = {.captainName = "EL SHENAAWY",
                  .establishedYear = 1907,
                  .rankInLeague = 1};
    printf("Established Year:\t%d\nRank in Leauge\t:\t%d\nCaptain Name\t:\t%s\n", ahly.establishedYear, ahly.rankInLeague, ahly.captainName);

    return 0;
}