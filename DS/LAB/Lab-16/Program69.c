#include <stdio.h>

int main()
{
    int T, N;
    scanf("%d", &T);

    while (T--)
    {
        scanf("%d", &N);

        int A[100], S[100], B[100];
        int top = -1;

        // Input
        for (int i = 0; i < N; i++)
            scanf("%d", &A[i]);


        for (int i = 0; i < N; i++)
            B[i] = A[i];

        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                if (B[j] > B[j + 1])
                {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        int k = 0;

        for (int i = 0; i < N; i++)
        {
            S[++top] = A[i];
            while (top >= 0 && S[top] == B[k])
            {
                top--;
                k++;
            }
        }
        if (k == N)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}