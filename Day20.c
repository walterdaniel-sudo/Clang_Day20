#include <stdio.h>
#include <stdlib.h>

// ---- ���� �Ҵ� ----
// ���ϴ� ������ �޸� ������ ũ�⸦ �����ؼ� �Ҵ� �ް� �� ������ ��� ��, ���ϴ� ������ ������ �����ϴ� ���
// �޸� ������ �Ҵ� ���� ���� malloc()�Լ��� ����ؼ� �Ҵ� ���� �� �ִ�.
// �̶�, �ݵ�� stdlib.h ��������� ���� ����� �Ѵ�.
// mallic()�Լ��� ����: �ּҸ� ������ ���� = (������ ������ �ڷ���)malloc(ũ��);
// ���� �Ҵ��� ���ؼ� �Ҵ� ���� �޸� ������ Heap������ �ش��Ѵ�.
// ���� �Ҵ� ���� �޸� ������ ������ ���� free(������ ������ �ּ�); �������� ������ �� �ִ�.
// �� ���� ���� �Ҵ翡�� �ݵ�� �� ���� ���� ������ ����Ǿ� �Ѵ�.
// malloc()�Լ����� ũ�⸦ �Ѱ��� ���� �⺻������ sizeof()�����ڸ� �̿��ؼ� �Ѱ��ش�. 

int main()
{
	/*int* ptr;

	ptr = (int*)malloc(4);

	*ptr = 10;

	printf("���: %d\n", *ptr);

	free(ptr);*/

	/*int* ptr;

	ptr = (int*)malloc(sizeof(int) * 2);

	ptr[0] = 10;
	ptr[1] = 20;

	printf("���: %d %d\n", ptr[0], ptr[1]);

	free(ptr);*/

	int len;
	char* word;

	printf("���ܾ� ���� �Է�: ");
	scanf("%d", &len);
	 
	word = (char*)malloc(sizeof(char) * len);

	printf("���ܾ� �Է�: ");
	scanf("%s", word);

	printf("���ܾ� ���: ");
	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", word[i]);
	}

	free(word);

	return 0;
}