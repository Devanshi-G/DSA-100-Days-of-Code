#include <stdio.h>

int main() {
    int m, n;
    int mat[100][100];
    
    scanf("%d %d", &m, &n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    
    Bool isSymmetric = True;
    
    // Check if square
    if (m != n) {
        isSymmetric = False;
    } else {
        // Check symmetry
        for (int i = 0; i < m && isSymmetric; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] != mat[j][i]) {
                    isSymmetric = False;
                    break;
                }
            }
        }
    }
    
    printf("%s\n", isSymmetric ? "Symmetric Matrix" : "Not a Symmetric Matrix");
    return 0;
}