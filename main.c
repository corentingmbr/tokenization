#include <stdio.h>


int tokenization(char lettre) {
    if ('A' <= lettre && lettre <= 'Z') {
        return lettre - 'A';
} return lettre - 'a'+26;}

int calculOfTokenizationForTwoCharacters(char lettres[2]) {

    char first = lettres[0];
    char second = lettres[1];

    return tokenization(first) + (tokenization(second) * 26) + tokenization(second) + 52;
}

int main() {

    char tablelistetokenization1[2]={'Z','Z'};
    char tablelistetokenization2[2]={'A','Z'};
    char tablelistetokenization3[2]={'R','d'};
    char tablelistetokenization4[2]={'k','J'};

    printf("%d\n", calculOfTokenizationForTwoCharacters(tablelistetokenization1));
    printf("%d\n", calculOfTokenizationForTwoCharacters(tablelistetokenization2));
    printf("%d\n", calculOfTokenizationForTwoCharacters(tablelistetokenization3));
    printf("%d\n", calculOfTokenizationForTwoCharacters(tablelistetokenization4));



    return 0;
}
