#include <stdio.h>

// Função recursiva para mover a Torre
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("-> Direita\n");
    moverTorre(passos - 1);
}

// Função recursiva para mover o Bispo
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("↗ Cima, Direita\n");
    moverBispo(passos - 1);
}

// Função recursiva para mover a Rainha
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("<- Esquerda\n");
    moverRainha(passos - 1);
}

int main() {
    // Movimento da Torre
    printf("========================================\n");
    printf("         🔷 Movimento da Torre 🔷\n");
    printf("========================================\n");
    moverTorre(5);
    
    // Movimento do Bispo
    printf("\n========================================\n");
    printf("         🔷 Movimento do Bispo 🔷\n");
    printf("========================================\n");
    moverBispo(5);
    
    // Movimento da Rainha
    printf("\n========================================\n");
    printf("         🔷 Movimento da Rainha 🔷\n");
    printf("========================================\n");
    moverRainha(8);
    
    // Movimento do Cavalo
    printf("\n========================================\n");
    printf("         🔷 Movimento do Cavalo 🔷\n");
    printf("========================================\n");
    
    for (int i = 0; i < 2; i++) {
        printf("⬆ Cima\n");
    }
    
    int j = 0;
    while (j < 1) {
        printf("➡ Direita\n");
        j++;
    }
    
    return 0;
}
