#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(int argc, char **argv)
{
srand(time(NULL));

char password[PASSWORD_LENGTH + 1];

for (int i = 0; i < PASSWORD_LENGTH; i++)
{
password[i] = rand() % 26 + 'a';
}
password[PASSWORD_LENGTH] = '\0';

printf("Generated password: %s\n", password);

return 0;
}
