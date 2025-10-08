public class Main {

    public static double determinante(double[][] matriz) {
        int n = matriz.length;

        if (n == 1)
            return matriz[0][0];

        double soma = 0;
        for (int j = 0; j < n; j++) {
            double[][] submatriz = submatriz(matriz, 0, j);
            soma += Math.pow(-1, j) * matriz[0][j] * determinante(submatriz);
        }
        return soma;
    }

    private static double[][] submatriz(double[][] matriz, int linha, int coluna) {
        int n = matriz.length;
        double[][] sub = new double[n - 1][n - 1];
        int r = 0, c;
        for (int i = 0; i < n; i++) {
            if (i == linha) continue;
            c = 0;
            for (int j = 0; j < n; j++) {
                if (j == coluna) continue;
                sub[r][c++] = matriz[i][j];
            }
            r++;
        }
        return sub;
    }

    public static void main(String[] args) {
        double[][] A = {
                {1, 2, 3, 4},
                {5, 6, 7, 8},
                {2, 6, 4, 8},
                {3, 1, 1, 2}
        };

        System.out.println("Determinante: " + determinante(A));
    }
}
