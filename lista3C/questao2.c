typedef struct vetor {
    float x, y, z;
} Vetor;

float dot(Vetor* v1, Vetor* v2) {
    return (v1->x * v2->x) +
           (v1->y * v2->y) +
           (v1->z * v2->z);
}