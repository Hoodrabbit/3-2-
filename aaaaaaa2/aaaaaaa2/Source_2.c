#include <stdio.h>



int main(void)
{
	
}


//int arr[6] = { 1,2,3,4,5,6 };

//int * ptr_front = arr;
//int* ptr_back = &arr[5];

//int space = 0;

//for (int i = 0; i < 6; i++)
//{
//	//space = 0;
//	space = *(ptr_front + i);
//	if (i < 3)
//	{
//		*(ptr_front + i) = *(ptr_back - i);
//	}
//	
//	*(ptr_back - i) = space;

//	printf("%d ", *(ptr_front + i));
//}

//void Swap(int* ptr1, int* ptr2, int* ptr3)
//{
//	int temp1 = *ptr1;
//	*ptr1 = *ptr2;
//	*ptr2 = *ptr3;
//	*ptr3 = temp1;
//}
//
//
//int main(void)
//{
//	int num1 = 1, num2 = 2, num3 = 3;
//	Swap(&num1, &num2, &num3);
//	printf("num1 : %d  num2 : %d  num3: %d", num1, num2, num3);
//}

/*int arr[10];

	for (int i = 0; i < 10; i++)
	{
		printf("입력 :");
		scanf_s("%d", &arr[i], 10);
	
		
		
	}

	printf("홀수 출력 : ");
	
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 1 || arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}

	}

	printf("\n");
	printf("짝수 출력 : ");

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("%d ", arr[i]);
		}
	}*/

//int num1 = 0;
	//int a = 0;
	//int i = 0;
	//int arr[1000];
	//printf("10진수 정수 입력 : ");
	//scanf_s("%d", &num1);

	////num1 /= 2;

	//while (num1 !=0)
	//{
	//	
	//	
	//	if (num1 != 0)
	//	{
	//		arr[a] = num1 % 2;
	//		num1 /= 2;
	//	}
	//	

	//	if (num1 == 0)
	//	{
	//		arr[a + 1] = '\0';
	//		//return 0;
	//	}

	//	
	//	if (num1 != 0)
	//	{
	//		a++;
	//	}
	//	
	//}

	//
	//for (int i = a; i >= 0; i--)
	//{
	//	
	//	printf("%d", arr[i]);
	//}        //10진수에서 2진수로 변화시키기 제대로 몰라서 찾아봄 어떻게 돌아가는지는 이해한것 같은데 나중에 풀때는 또 까먹을것 같음..


/*
	int arr[10];
	int a = 0;
	int b = 9;

	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] % 2 != 0)
		{
			arr[i] = arr[a];
			a++;
		}
		else
		{
			a++;
		}

	}

	for (int i = 9; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] = arr[b];
			b--;
		}
		else
		{
			b--;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}*/

//char word[30];
	//int length;
	//int truecheck = 0;

	//printf("단어를 입력하세요 : ");
	//scanf_s("%s", word, 30);

	//length = strlen(word);

	//for (int i = 0; i < length; i++)
	//{
	//	if (word[i] != word[length - 1 - i]) // 마지막자리가 '\0'니까 i를 빼주는 것과는 별개로 1을 더 빼줘야함
	//	{
	//		truecheck = 1;
	//		break;
	//	}
	//}
	//if (truecheck == 0)
	//{
	//	printf("회문입니다.");
	//}

//void DesSort(int arr[], int leng);
//
//int main(void)
//{
//	int arr[7];
//	//int length;
//
//	//length = strlen(arr);
//
//	for (int i = 0; i < 7; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//	 DesSort(arr, sizeof(arr) / sizeof(int));
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//}
//
//void DesSort(int arr[], int leng)
//{
//	int i, j;
//	int temp;
//
//	for (i = 0; i < leng-1; i++)
//	{
//		for (j = 0; j < (leng-i) - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//} //직접 하긴 했는데 도전 5 설명에 나와있던 버블정렬 예시 소스코드를 보고 거의 따라해서 좀 그렇긴 함..


/*int arr1[3][9];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr1[i][j] = (i + 2) * (j + 1);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}
	return 0;*/


/*int A[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};

	int B[4][2];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			B[i][j] = A[j][i];
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}

	return 0;*/

/*int Grade[5][5] = { 0, };
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			scanf_s("%d", &Grade[i][j]);
		}
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			Grade[i][4] += Grade[i][j];
		}
	}

	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			Grade[4][j] += Grade[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ",Grade[i][j]);
		}
		printf("\n");
	}

	return 0;*/

//int num1 = 0;
	//int num2 = 0;
	//int num3 = 0;
	//int i = 0;
	//int num4 = 0;

	//int zerocheck = 0;

	//int hap = 0;
	//
	//int happpp = 10;

	//int happppp = 1;

	//int count = 0;

	//

	//int arr[10] = { 0, };

	//scanf_s("%d", &num1);
	//scanf_s("%d", &num2);
	//scanf_s("%d", &num3);

	//hap = num1 * num2 * num3;
	//happpp = hap;
	//
	//while (hap != 0)
	//{
	//	hap /= 10;
	//	count++;
	//}


	//printf("Count : %d \n\n", count);
	////printf("%d\n", hap);
	////printf("%d\n", happppp);

	//for(int i =0; i< count; i++)
	//{
	//	zerocheck = 0;
	//	hap = happpp;
	//	while (happppp < hap) //7037300
	//	{
	//		happppp *= 10;
	//	}
	//	if (happppp > 9)
	//	{
	//		happppp /= 10;
	//	}
	//	

	//	//hap = happpp;
	//	if (i > 0)
	//	{
	//		
	//			hap -= happppp; //7037300

	//			printf("hap = %d\n", hap);
	//			
	//			while(hap >= happppp)
	//			{
	//				hap -= happppp;
	//			}

	//			if (hap <= 0)
	//			{
	//				if (hap != 0)
	//				{
	//					hap = happpp;
	//				}
	//				else
	//				{
	//					hap = 0;
	//				}
	//				
	//				zerocheck = 1;
	//			}
	//					
	//		happpp = hap; // 7037300
	//	}
	//	//printf("현재 hap : %d\n", hap);
	//	if (zerocheck != 1)
	//	{
	//		while (hap > 9)
	//		{
	//			hap /= 10;
	//			
	//		}
	//		num4 = hap; //7, 0, 3, 7, 3, 0, 0
	//		printf("현재 num값 : %d \n\n", num4);
	//	}
	//	else
	//	{
	//		num4 = 0;
	//		printf("현재 num값 : %d \n\n", num4);
	//		
	//	}
	//	
	//	if (arr[num4] == 0)
	//	{
	//		arr[num4] = 1;
	//	}
	//	else
	//	{
	//		arr[num4] += 1;
	//	}	

	//	printf("%d\n\n", happpp);
	//	//i++;
	//}
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}
	//
	////	if(arr[i] != 0)
	////	{
	////		arr[i] +=1;
	////
	////	}

