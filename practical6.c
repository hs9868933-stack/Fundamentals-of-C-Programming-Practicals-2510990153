#include <stdio.h>

int main() {
    int x;
    printf("Enter the num from (1-4): ");
    scanf("%d",&x);

    if (x == 1) {
        int V,u,a,t;
        printf("You have chosen V = u + at eqn\n");             //2510990027
        scanf("%d %d %d",&u,&a,&t);

        V = u + a*t;
        printf("%d",V);
    }
    else if (x == 2) {
        int S,u,a,t;
        printf("You have chosen S = ut + 1/2(at**2) eqn\n");
        scanf("%d %d %d",&u,&a,&t);

        S = u*t + 0.5*(a*(pow(t,2)));
        printf("%d",S);
    }
    else if (x == 3) {
        int T,b,a,c;
        printf("You have chosen T=2*a+√b+9c eqn\n");
        scanf("%d %d %d",&b,&a,&c);

        T = 2*a + pow(b,0.5) + 9*c;
        printf("%d",T);
    }
    else if (x == 4) {
        int H,b,p;
        printf("You have chosen H=√b**2+p**2 eqn\n");
        scanf("%d %d",&b,&p);

        H = pow(pow(b,2)+pow(p,2),0.5);
        printf("%d",H);
    }
    else {
        printf("The num u entered is out of range");
    }
    return 0;

}
