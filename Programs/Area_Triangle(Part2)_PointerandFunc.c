int main() {
    float a,b,c, area;
    
    printf("Enter the value of a ");
    scanf("%f", &a);
    
    printf("Enter the value of b ");
    scanf("%f", &b);
    
    printf("Enter the value of c ");
    scanf("%f", &c);
    
    calculateArea(&a, &b , &c, &area);  // Pass addresses of variables to the function
    
    printf("The area of the triangle is: %.2f\n", area);
    
    return 0;
}

void calculateArea(float *a, float *b, float *c, float *area) {
    float s = (*a + *b + *c) / 2.0; // Calculate the semi-perimeter
    *area = sqrt(s * (s - *a) * (s - *b) * (s - *c)); // Calculate the area using Heron's formula
}
