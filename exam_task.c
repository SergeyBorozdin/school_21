// задача экзамена 1 реверс трехзначного числа

#include <stdio.h>

int main() {

    int n = 0;
    int i = 0;
    int arr[10];
    int flag = 1;

    while (n != -1) {

        if (scanf("%d", &n) != 1) {
            printf("n/a");
            flag = 0;
            break;
        }
        if (n != -1) {
            arr[i] = n;
            i++;
        }
    }

    if (flag && arr[0] != 0) {

        for(int j = i - 1; j > 0; j--) {
            printf("%d ", arr[j]);
        }
        printf("%d", arr[0]);
    }
    return 0;
}

// ======================================================

// задача экзамена 2 реверс последовательности чисел статический массив

#include <stdio.h>

int main() {

    int n = 0;
    int i = 0;
    int arr[10];
    int flag = 1;

    while (n != -1) {

        if (scanf("%d", &n) != 1) {
            printf("n/a");
            flag = 0;
            break;
        }
        if (n != -1) {
            arr[i] = n;
            i++;
        }
    }

    if (flag && arr[0] != 0) {

        for(int j = i - 1; j > 0; j--) {
            printf("%d ", arr[j]);
        }
        printf("%d", arr[0]);
    }
    return 0;
}

// ===============================================================
// с динамическим массивом

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n = 0;
    int i = 0;
    int flag = 1;
    int *arr = malloc(sizeof(int) * 1);
    if (arr != NULL) {
        while (n != -1) {

            if (scanf("%d", &n) != 1) {
                printf("n/a");
                flag = 0;
                break;
            }
            if (n != -1) {
                arr = realloc(arr, sizeof(int) * (n +2));
                arr[i] = n;
                i++;
            }
        }

        if (flag && arr[0] != 0) {

            for(int j = i - 1; j > 0; j--) {
                printf("%d ", arr[j]);
            }
            printf("%d", arr[0]);
        }
    }
    free(arr);
    return 0;
}


// ===========================================

// задача экзамена 3 перевод строки в верхний регистр

#include <stdio.h>
#include <stdlib.h>

int main () {

    char *str = NULL;
    size_t i = 0;
    char put;
    str = malloc(sizeof(char) * 1);

    if ( str != NULL) {

        while(scanf("%c", &put) != 0 && put != '\n') {
            str = realloc(str, sizeof(char) * (i+1));
            if (str != NULL) {
                str[i] = put;
                i++;
            }

        }
        str[i] = '\0';



        for (size_t j = 0; j < i; j++) {
            if (str[j] == ' ') {
                if (str[j+1] > 'a' && str[j+1] < 'z') {
                    str[j+1] = str[j+1] - 32;
                }
            }
        }


        for (size_t j = 0; j < i; j++) {
            printf("%c", str[j]);
        }
    }
    free(str);
    return 0;


// ========================================

// задача экзамена 4 
// вывести 0 или 1 если последовательность чисел  0 0 0 или  1 1 1 соответсвенно
// вывести 1 при вводе 1 1 0 или 1 0 1, при любой ошибке n/a

#include <stdio.h>

int main () {

    int x, y, z;

    if (scanf("%d%d%d", &x, &y, &z) == 3 && ((x == 1 || x == 0 ) && (y == 1 || y == 0) && (z == 1 || z == 0))) {
        if ((x == 1 && y == 1 && z == 1) || (x == 1 && y == 1 && z == 0) || (x == 1 && y == 0 && z == 1)) {
            printf("1");
        } else {
            printf("0");
        }
    } else {
        printf("n/a");
    }
}

// ===========================================

// задача экзамена 5  поиск максимума в последовательности

#include <stdio.h>

int main() {

    int put;
    int max = -1;

    if (scanf("%d", &max) != 1) {
        printf("n/a");
    } else {
        for (int i = 0; put > 0; i++) {
            if (scanf("%d", &put) == 1) {
                if (put > 0) {
                    if (put > max) {
                    max = put;
                    }
                } else {
                    break;
                    }
            } else {
                printf("n/a");
                max = -1;
                break;
            }
        }
    }

    if(max > 0) {
        printf("%d\n", max);
    } 

    return 0;
}

   
// =====================================
    
   // задача 6 swap min max  в двумерном массиве - статика
#include <stdio.h>

int main () {
    int Y, X;
    int flag = 1;

    if (scanf("%d%d", &Y, &X) != 2) {
        printf("n/a");
        flag = 0;    
    }

    if (flag) {

        int matrix[Y][X];
        for (int i = 0; i < Y; i++) {
            for (int j = 0; j < X; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        int max = matrix[0][0], min = matrix[0][0], max_i = 0, min_i = 0, max_j = 0, min_j = 0;

        for (int i = 0; i < Y; i++) {
            for (int j = 0; j < X; j++) {
                if (matrix[i][j] > max) {
                    max = matrix[i][j];
                    max_i = i;
                    max_j = j;
                }
                if (matrix[i][j] < min) {
                    min = matrix[i][j];
                    min_i = i;
                    min_j = j;
                }
            }
        }

        matrix[min_i][min_j] = max;
        matrix[max_i][max_j] = min;
        for (int i = 0; i < Y; i++) {
            for (int j = 0; j < X; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
    
    
 // =================================================
    // задача экзамена 7
    // является ли строка палиндромом
    
 #include <stdio.h>

int main() {

    char str[1000];
    char c;
    int flag = 1, i = 0;

    while (scanf("%c", &c) != 0 && c != '\n') {
        str[i] = c;
        i++;
    }
    str[i] = '\0';

    if (flag) {
        for(int j = 0; j < i; j++) {
            if (str[j] >= 'A' && str[j] <= 'Z') {
                str[j] = str[j] + 32;
            }
        }

        for (int j = 0; j < i / 2; j++) {
           if (str[j] != str[i -1 - j]) {
               flag = 0;
           }
        }

        if (flag) {
            printf("YES");
        } else {
            printf("NO");
        }
    }
  return 0;
}

 // ****************************************   
    // таблица askii с номерами 
    
#include <stdio.h>

int main() {

  for (int i = 0; i < 128; i++){
      printf("%d - %c\n", i, i);
  }


  return 0;
}



