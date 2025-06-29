#include<stdio.h>
#include<math.h>

float area(float pi, float r);
float surfacearea(float pi, float r);
float volume(float pi, float r);

int main(){

    float radius = 0.0f;
    float area_result = 0.0f;
    float surfacearea_result = 0.0f;
    float volume_result = 0.0f;
    const float pi = 3.14f;

    printf("Enter radius to find 'Area','SurfaceArea','Volume' : ");
    scanf("%f",&radius);

    area_result = area(pi, radius);
    surfacearea_result = surfacearea(pi, radius);
    volume_result = volume(pi, radius);

    return 0;
    
}

float area(float a,float b){
    float result;
    result = a*b;
    printf("\nArea of circle is :%f ",result);
    return result;
}
float surfacearea(float a ,float b){
    float result;
    result = a*b*b;
    printf("\nSurfaceArea of circle is :%f ",result);
    return result;
}
float volume(float a, float b){
    float result;
    result = 4*a*(b*b);
    printf("\nVolume of circle is : %f",result);
    return result;
}