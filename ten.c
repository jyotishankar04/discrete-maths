// WAP using c for string matching using finite state machine

#include <stdio.h>
#include <string.h>
#define totalChars 256

int calculateNextState(char *pat, int M, int state, int x)
{
    if (state < M && pat[state] == x)
    {
        return state + 1;
    }
    int ns, i;
    for (ns = state; ns > 0; ns--)
    {
        if (pat[ns - 1] == x)
        {
            for (i = 0; i < ns - 1; i++)
            {
                if (pat[i] != pat[state - ns + 1 + i])
                {
                    break;
                }
            }
            if (i == ns - 1)
            {
                return ns;
            }
        }
    }
    return 0;
}

void calcTF(char *pat, int M, int TF[][totalChars])
{
    int state, x;
    for (state = 0; state <= M; ++state)
    {
        for (x = 0; x < totalChars; ++x)
        {
            TF[state][x] = calculateNextState(pat, M, state, x);
        }
    }
}

void calcOccur(char *pat, char *fnt)
{
    int M = strlen(pat);
    int N = strlen(fnt);
    int TF[M + 1][totalChars];
    calcTF(pat, M, TF);
    int state = 0;
    for (int i = 0; i < strlen(fnt); i++)
    {
        state = TF[state][fnt[i]];
        if (state == M)
        {
            printf("\nGiven pattern in found at the index %d\n", i - M + 1);
        }
    }
}

int main()
{
    char *fnt = "AABCDAABBDCAABADAABDABAABA";
    char *pat = "AABA";
    calcOccur(pat, fnt);
    return 0;
}