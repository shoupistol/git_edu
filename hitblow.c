#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

#define RAND(max) (int)(rand() * max / (1.0 + RAND_MAX)) //ƒ‰ƒ“ƒ_ƒ€ƒ}ƒNƒ:0~max‚Ü‚Å‚Ì—”

int main(void) {
    srand((unsigned int)time(NULL));
    int yonketa;
    int num[4];
    int answer[4] = {RAND(9)};
    int hit,blow;

    do {
        answer[1] = RAND(9);
    } while (answer[0] == answer[1]);

    do {
        answer[2] = RAND(9);
    } while (answer[0] == answer[2] || answer[1] == answer[2]);

    do {
        answer[3] = RAND(9);
    } while (answer[0] == answer[3] || answer[1] == answer[3] || answer[2] == answer[3]);
    
    for (int i = 1; ; i++) {
        int hit = 0;
        int blow = 0;

        printf("”‚ğ“–‚Ä‚Ä\n");
        scanf("%d",&yonketa);

        for (int ii = 0; ii <= 3; ii++) {
            num[ii] = yonketa / (1000 / pow(10,ii));
            yonketa = yonketa % (1000 / (int)pow(10,ii));
        }

        for (int ii = 0; ii <= 3; ii++) {
            if (num[ii] == answer[ii]) {
                hit++;
            } else {
                for (int iii = 0; iii <= 3; iii++) {
                    if (num[ii] == answer[iii]) {
                        blow++;
                    }
                }
            }
        
        }

        printf("hit : %d\nblow : %d\n",hit,blow);
        if (hit == 4) {
            printf("%d‰ñ‚Å³‰ğ!!",i);
            break;
        }
    }
}
