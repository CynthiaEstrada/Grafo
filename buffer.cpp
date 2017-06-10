#include <cstdio>
#include <cstdlib>

int main(){

int i, p;
scanf("%i", &i);

do{
i = (i + 5 -1) % 5;
printf("i antes de disminuir: %i \n", i);
i++;
 printf(" i vale: %i \n", i);

scanf("%i", &p);
}
while(p != 0);
    return 0;
}
