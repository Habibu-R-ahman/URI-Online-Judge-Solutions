#include <stdio.h>
int main()
{
    char a[15];
    char b[15];
    char c[15];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);

    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'c')printf("aguia\n");
    if (a[0] == 'v' && b[0] == 'a' && c[0] == 'o')printf("pomba\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'o')printf("homem\n");
    if (a[0] == 'v' && b[0] == 'm' && c[0] == 'h')printf("vaca\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'm')printf("pulga\n");
    if (a[0] == 'i' && b[0] == 'i' && c[2] == 'r')printf("lagarta\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'h')printf("sanguessuga\n");
    if (a[0] == 'i' && b[0] == 'a' && c[0] == 'o')printf("minhoca\n");

    return 0;
}
