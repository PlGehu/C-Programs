int main() {
    float base, height, area;
    
    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);
    
    calculateArea(&base, &height, &area);  // Pass addresses of variables to the function
    
    printf("The area of the triangle is: %.2f\n", area);
    
    return 0;
}

void calculateArea(float *base, float *height, float *area) {
    *area = (0.5) * (*base) * (*height);
    
}
