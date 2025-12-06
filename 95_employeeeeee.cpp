#include <stdio.h>

struct emp
{
    int no;
    char name[50];
    float pay;
};

int main()
{
    struct emp e[50], *p;
    int n;
    char c;

    scanf("%d", &n);
    p = e;

    for (int i = 0; i < n; i++)
    {
        scanf("%d %s %f", &p->no, p->name, &p->pay);
        p++;
    }

    p = e;
    for (int i = 0; i < n; i++)
    {
        printf("%d %s %.2f\n", p->no, p->name, p->pay);
        p++;
    }
    return 0;
}