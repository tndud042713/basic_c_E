#include<stdio.h>
#include<string.h>

int main()
{
	char a[100]; 
	int i, j, n;
	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s",&a);
	n=strlen(a);
	for(i=0; i<n; i++) {
		for(j=0; j<=i; j++) {
		printf("%c", a[j]);
 		}
 		printf("\n");
	}
	return 0;
}

