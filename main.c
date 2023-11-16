#include <stdio.h>
#include <string.h>
#define R 3
#define C 4

void init_matrix(int rows, int cols, int m[rows][cols]) {
    int i, j;
    /*
    for (i=0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            m[i][j] = (cols*i) + j + 1;
        printf("\n");
    }
     */
    for (i=0; i < rows * cols; i++)
        m[i / cols][i % cols] = i+1;
}

void print_matrix(int rows, int cols, int m[rows][cols]) {
    int i, j;
    for (i=0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void rotate_matrix(int rows, int cols, int m[rows][cols],
                   int m2[cols][rows]) {
    int c, r;
    for (c=0; c < cols; c++)
        for (r = rows -1 ; r >= 0; r--)
            m2[c][rows - r - 1] = m[r][c];

}

int main2() {
    int m[R][C], m2[C][R];
    init_matrix(R, C, m);
    print_matrix(R, C, m);
    rotate_matrix(R, C, m, m2);
    printf("\n");
    print_matrix(C, R, m2);
    return 0;
}

int main () {
    char key[] = "apple";
    char buffer[80];
    do {
        printf ("Guess my favorite fruit? ");
        scanf ("%79s",buffer);
    } while (strcmp (key,buffer) != 0);
    printf("Correct answer!\n");
    return 0;
}
