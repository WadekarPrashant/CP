#include <stdio.h>
#include <string.h>
int main()
{
    char select[3];
    char sub[3];
    int input;
    scanf("%d",&input);
    while(input--){
        scanf("%s",select);
        scanf("%s",sub);
        
        if((select[0]=='b' || sub[0]=='b') && (select[1]=='b' || sub[1]=='b') && (select[2]=='o' || sub[2]=='o'))
        {
            printf("yes\n");
        }
        else if((select[0]=='b' || sub[0]=='b') && (select[1]=='o' || sub[1]=='o') && (select[2]=='b' || sub[2]=='b'))
        {
            printf("yes\n");
        }
        else if((select[0]=='o' || sub[0]=='o') && (select[1]=='b' || sub[1]=='b') && (select[2]=='b' || sub[2]=='b'))
        {
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    
    return 0;
}
  