#include <stdio.h>
int main()
{
    int a;
    scanf("%c",&a);    
    if( a >= 97 && a <= 122 )
      {
        int ans=a-32;
        printf("%c",ans);
      }
      
    return 0;
}