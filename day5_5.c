#include <stdio.h>
int main(void) 
{
	char input[100];
	int i;

	printf("소문자를 대문자로 바꾸는 코드\n\n");
	printf("Enter the string(<=100): ");
	scanf("%s", &input);

	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') //소문자가 입력되면
			input[i] = input[i] - 32;		
	}
	printf("%s", input);
}