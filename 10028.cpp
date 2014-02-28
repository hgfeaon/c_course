#include <stdio.h>
float matrix(float** m, int n);
int main()
{	
	int i,j; 
	float a[3][3], *p[3];

  	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++){
			scanf("%f", &a[i][j]);
			p[i] = a[i];
		}
 	printf("sum=%0.2f \n", matrix(p,3));
 	return 0;
}

float matrix(float** m, int n) {
    float s = 0;
    int i, rc;
    for (i=0; i<n; i++) {
        rc = n-i-1;
        if (rc != i) {
            s += m[i][i];
        }
        s += m[i][rc];
    }
    return s;
}
