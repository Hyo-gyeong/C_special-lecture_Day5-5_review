#include <stdio.h>
int main(void) 
{
	char input[100];
	int i;

	printf("�ҹ��ڸ� �빮�ڷ� �ٲٴ� �ڵ�\n\n");
	printf("Enter the string(<=100): ");
	scanf("%s", &input);

	for (i = 0; input[i] != '\0'; i++) {
		if (input[i] >= 'a' && input[i] <= 'z') //�ҹ��ڰ� �ԷµǸ�
			input[i] = input[i] - 32;		
	}
	printf("%s", input);
}