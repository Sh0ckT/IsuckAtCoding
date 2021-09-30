#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int const psg = 0;
    int const om = 1;
    int const ol = 2;
    int const r = 3;
    string resultats[4][4];
    resultats[0][1] = "3-2";
    string score[4];
    score[0]="2-1,1-3,0-1";
    score[1]="3-2,2-2,0-1";
    score[2]="1-3,1-1,3-2";
    score[3]="2-1,3-1,2-2";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j)
            {
                resultats[i][j] = score[i];
            }
            else
            {

            }
        }
    }
    printf("%s",resultats[0][1]);
}
