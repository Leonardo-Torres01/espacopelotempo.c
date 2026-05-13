#include <stdio.h>

float espaco(float v, float t, float a, int tem_aceleracao) {
    if (tem_aceleracao == 1) {
        
        return (v * t) + (a * (t * t)) / 2;
    } else {
        
        return v * t;
    }
}
