// ConsoleApplication9.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{

    char gizlikelime[6] = "ROKET";
    char input[98];
    char bulun[6] = "_____";
    char yan[100] = " ";
    char olmayan[100] = " ";;
    printf("Find the secret word secret word has 5 characters\n");
    fgets(input, 98, stdin);
    int n = strlen(input) - 1;
    int m = strlen(gizlikelime);
    int a = 0;
    int b = 0;
    for (int i = 0; i < n; i++) {//uppercase yapalım inputu
        input[i] = toupper(input[i]);
    }
    printf("Your word contains %d word and secret word has %d word.\n", n, m);
    if (n == m) {
        while (1) {

            for (int i = 0; i < n; i++) {


                if (input[i] == gizlikelime[i]) {
                    bulun[i] = input[i];
                }

                if (input[i] != gizlikelime[0] && input[i] != gizlikelime[1] && input[i] != gizlikelime[2] && input[i] != gizlikelime[3]
                    && input[i] != gizlikelime[4] && input[i] != gizlikelime[5] && input[i] != gizlikelime[6]) {
                    olmayan[a] = input[i];
                    a++;
                }

                if (i == 0 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[1] || input[i] == gizlikelime[2] || input[i] == gizlikelime[3]
                        || input[i] == gizlikelime[4] || input[i] == gizlikelime[5] || input[i] == gizlikelime[6]) {
                        yan[b] = input[i];
                        b++;
                    }
                }
                if (i == 1 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[0] || input[i] == gizlikelime[2] || input[i] == gizlikelime[3]
                        || input[i] == gizlikelime[4] || input[i] == gizlikelime[5] || input[i] == gizlikelime[6]) {
                        yan[b] = input[i];
                        b++;
                    }
                }
                if (i == 2 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[1] || input[i] == gizlikelime[0] || input[i] == gizlikelime[3]
                        || input[i] == gizlikelime[4] || input[i] == gizlikelime[5] || input[i] == gizlikelime[6]) {
                        yan[b] = input[i];
                        b++;
                    }
                }
                if (i == 3 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[1] || input[i] == gizlikelime[0] || input[i] == gizlikelime[2]
                        || input[i] == gizlikelime[4] || input[i] == gizlikelime[5] || input[i] == gizlikelime[6]) {
                        yan[b] = input[i];
                        b++;
                    }
                }
                if (i == 4 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[1] || input[i] == gizlikelime[0] || input[i] == gizlikelime[3]
                        || input[i] == gizlikelime[2] || input[i] == gizlikelime[5] || input[i] == gizlikelime[6]) {
                        yan[b] = input[i];
                        b++;
                    }
                }
                if (i == 5 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[1] || input[i] == gizlikelime[0] || input[i] == gizlikelime[3]
                        || input[i] == gizlikelime[4] || input[i] == gizlikelime[2] || input[i] == gizlikelime[6]) {
                        yan[b] = input[i];
                        b++;
                    }
                }
                if (i == 6 && input[i] != gizlikelime[i]) {
                    if (input[i] == gizlikelime[1] || input[i] == gizlikelime[0] || input[i] == gizlikelime[3]
                        || input[i] == gizlikelime[4] || input[i] == gizlikelime[5] || input[i] == gizlikelime[2]) {
                        yan[b] = input[i];
                        b++;
                    }
                }




            }

            printf("%s CANT FOUND IN WORD:%s FOUN IN WORD BUT IN DIFFERENT PLACE:%s\n", bulun, olmayan, yan);
            if (bulun[0] == gizlikelime[0] && bulun[1] == gizlikelime[1] && bulun[2] == gizlikelime[2] && bulun[3] == gizlikelime[3]
                && bulun[4] == gizlikelime[4] && bulun[5] == gizlikelime[5] && bulun[6] == gizlikelime[6]) {
                printf("YOU WIN!!");
                break;
            }
            else {

                printf(" Try to find the secret word secret word again!\n");

                fgets(input, 98, stdin);
                int n = strlen(input) - 1;
                for (int i = 0; i < n; i++) {//uppercase yapalım inputu
                    input[i] = toupper(input[i]);
                    if (n != m) {
                        printf("Your word and your secret word doesnt have same size.You losed\n");
                        return 0;


                    }
                }
            }
        }
    }



    else {
        printf("Your word and your secret word doesnt have same size\n");
    }
    return 0;

}
