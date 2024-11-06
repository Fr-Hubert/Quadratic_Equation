#include <stdio.h>
#include <math.h>  // sqrt() 関数を使うためにインクルード

int main() {
    double a, b, c;  // 係数 a, b, c
    double discriminant, x1, x2;  // 判別式、2つの解

    // ユーザーから a, b, c の値を入力
    printf("2次方程式の係数 a, b, c を入力してください: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 判別式の計算: Δ = b^2 - 4ac
    discriminant = b * b - 4 * a * c;

    // 判別式に基づいて解を求める
    if (discriminant > 0) {
        // 異なる2つの実数解が存在する場合
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("解は2つあります: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if (discriminant == 0) {
        // 重解: 実数解が1つの場合
        x1 = -b / (2 * a);
        printf("解は1つです: x = %.2f\n", x1);
    }
    else {
        // 判別式が負の場合、実数解がなく、複素数解が存在する
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("解は複素数です: x1 = %.2f + %.2fi, x2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0; // プログラムの正常終了
}
