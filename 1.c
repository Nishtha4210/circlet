
Q.1 Write a Program to print the below pattern using nested for loop. 
 #include<stdio.h>
 void main()
 {
 	int i,j;
 	for(i=1;i<=5;i++)
 	{
 		for(j=i;j>=1;j--)
 		{
 			printf(" %d ",j);	
		}
	printf("\n");
	 }
 }

output :-

 1
 2  1
 3  2  1
 4  3  2  1
 5  4  3  2  1

Q.2 Write a Program to print the below pattern using nested for loop.
 #include<stdio.h>
 void main()
 {
 	int i,j;
 	for(i=5;i>=1;i--)
 	{
 		for(j=i;j<=5;j++)
 		{
 			printf(" %d ",j);	
		}
	printf("\n");
	 }
 }
output :-

 5
 4  5
 3  4  5
 2  3  4  5
 1  2  3  4  5


Q.3 Write a Program to print the below pattern using nested for loop.
 #include<stdio.h>
 void main()
 {
 	int i,j;
 	for(i=5;i>=1;i--)
 	{
 		for(j=i;j<=5;j++)
 		{
 			printf(" %d ",i);	
		}
	printf("\n");
	 }
 }
output :-

 5
 4  4
 3  3  3
 2  2  2  2
 1  1  1  1  1
 
 Q.4 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;++i)
	{
		for(j=i;j<=5;++j)
		{
			printf(" %d ",j);
		}
	printf("\n");
	}
}
 output :-

 1  2  3  4  5
 2  3  4  5
 3  4  5
 4  5
 5


Q.5 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;++i)
	{
		for(j=i;j<=5;++j)
		{
			printf(" %d ",i);
		}
	printf("\n");
	}
}

output:-

 1  1  1  1  1
 2  2  2  2
 3  3  3
 4  4
 5

Q.6 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
void main()
{
	int i,j,n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=6-i)
			{
				printf(" %d",j%2);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}

output:-

 1 0 1 0 1
 1 0 1 0
 1 0 1
 1 0
 1

Q.7 Write a Program to print the below pattern using nested for loop.
 #include<stdio.h>
 void main()
 {
 	int i,j;
 	char ch='A';
 	for(i=1;i<=5;i++)
 	{
 		for(j=i;j>=1;j--)
 		{
 			printf(" %c ",j+64);	
		}
	printf("\n");
	 }
 }

output :-

 A
 B  A
 C  B  A
 D  C  B  A
 E  D  C  B  A
 
Q.8 Write a Program to print the below pattern using nested for loop.
 #include<stdio.h>
 void main()
 {
 	int i,j,n=1;
 	for(i=1;i<=5;i++)
 	{
 		for(j=1;j<=i;j++)
 		{
 			printf(" %d ",n++);	
		}
	printf("\n");
	 }
 }

output:-

 1
 2  3
 4  5  6
 7  8  9  10
 11  12  13  14  15












//Q.1 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5 - i; j++)
		{
            printf("   ");
        }
        for (int k = i; k >= 1; k--)
		{
            printf(" %d ", k);
        }
        printf("\n");
    }

    return 0;
}

//Q.2 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j>=6-i)
			{
				printf("%d ",j);
			}
			else
			{
			printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

//Q.3 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5 - i; j++) 
		{
            printf("  ");
        }
        for (int k = 1; k <= i; k++) 
		{
            printf("%d", 5 - i + 1);
            if (k < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//Q.4 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j < i; j++) 
		{
            printf("   ");
        }
        for (int k = i; k <= 5; k++) 
		{
            if ((i + k) % 2 == 0)
			{
                printf(" 1 ");
            } else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}


//Q.5 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j < i; j++)
		 {
            printf("  ");
        }
        for (int k = 5; k >= i; k--) 
		{
            printf("%d", k);
            if (k > i + 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//Q.6 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++)
	 {
  
        for (int j = 1; j < i; j++) 
		{
            printf("  ");
        }
        for (int k = 5; k >= i; k--) 
		{
            printf("%d", k);
            if (k > i + 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

//Q.6 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++)
	 {
  
        for (int j = 1; j < i; j++) 
		{
            printf("  ");
        }
        for (int k = 5; k >= i; k--) 
		{
            printf("%d", k);
            if (k > i + 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


//Q.7 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(j<=6-i || j>=4+i)
			{
				printf("%d ",j);
			}
			else
			{
			printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}

//Q.8 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (5- i); k++) {
            printf("   ");
        }

        for (int l = i; l >= 1; l--) {
            if (l != 5) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }
    for (int i = 5- 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (5 - i); k++) {
            printf("   ");
        }
        for (int l = i; l >= 1; l--) {
            if (l != 5) {
                printf("%d ", l);
            }
        }
        printf("\n");
    }

    return 0;
}
//Q.9 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 5; i >= 1; i--) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
    for (int i = 2; i <= 5; i++)
	 {
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

//Q.10 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5 - i; j++) 
		{
            printf("   ");
        }
        for (int k = 1; k <= i; k++) 
		{
            printf("%d", k);
            if (k < i)
			 {
                printf(" ");
            }
        }
        for (int l = i - 1; l >= 1; l--) 
		{
            printf(" %d", l);
        }
        printf("\n");
    }

    return 0;
}

//Q.11 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() 
{
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = 1; j <= 5 - i; j++) 
		{
            printf("   ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
		 {
            printf(" * ");
        }

        printf("\n");
    }

    return 0;
}



Q.1
#include<stdio.h>
void main()
{
	int i,j;
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=45;j++)
		{
			if(j<=i)
			{
				printf(" %d",j);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}

output:-
 41
 41 42
 41 42 43
 41 42 43 44
 41 42 43 44 45

Q.2
#include<stdio.h>
void main()
{
	int i,j,n=11;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			{
				printf(" %d",n++);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}
output:-
 11
 12 13
 14 15 16
 17 18 19 20
 21 22 23 24 25

Q.3
#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=6-i)
			{
				printf(" %d",j);	
			}
			else
			{
				printf("  "); 
			}
		}
		printf("\n");
	}
}



Q.4
#include <stdio.h>

int main() {
    int rows,i,j,k;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for ( i = 1; i <= rows; i++)
	 {
        for ( j = 1; j < i; j++) 
		{
            printf("   ");
        }
        for ( k = i; k <= rows; k++) 
		{
            if ((k - i) % 2 == 0) 
			{
                printf(" 1 ");
            } else {
                printf(" 0 ");
            }
        }

        printf("\n");
    }

    return 0;
}

//Q.5 Write a Program to print the below pattern using nested for loop.

#include <stdio.h>
int main() {
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) 
	{
        for (int j = 1; j <= i; j++) 
		{
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * (rows - i); k++) 
		{
            printf("   ");
        }
        for (int l = i; l >= 1; l--) 
		{
            printf("%d ", l);
        }

        printf("\n");
    }

    return 0;
}

//Q.6 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++)
	 {
    	for (int j = 1; j <=9; j++) 
		{
         	if(j>=6-i && j<=4+i)
         	{
         		printf("%d ",j);
			 }
			 else
			 {
			 	printf("  ");
			 }
    	}
    	printf("\n");
}

    return 0;
}

//Q.7 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>
int main() 
{
    for (int i = 1; i <= 3; i++) 
	{
        for (int j = 1; j <= 5; j++) 
		{
            if (i == 1 || i == 3 || j == 1 || j == 5) 
			{
                printf("* ");
            } 
			else 
			{
                printf("  "); 
            }
        }
        printf("\n"); 
    }
     for (int i = 1; i <= 2; i++) 
	{
        for (int j = 1; j <= 2; j++) 
		{
            if (i == 1 || i == 2 || j == 1 || j == 2) 
			{
                printf("*      ");
            } 
			else 
			{
                printf("  "); 
            }
        }
        printf("\n"); 
    }

    return 0;
}
patterninC.txt
Displaying patterninC.txt.