#include <stdio.h>

int main(void)
{
	int arr[3] = { 11, 22, 33 };
	int* ptr = arr; // int *ptr = &arr[0];
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr++;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); ptr--;
	printf("%d ", *ptr); printf("\n");
	return 0;
}



	/*printf("\\    /\\\n");
		printf(" )  ( ')\n");
		printf("(  /  )\n");
		printf(" \\(__)|\n");*/

		/*printf("|\\_/|\n");
			printf("|q p|   /}\n");
			printf("( 0 )\"\"\"\\\n");
			printf("|\"^\"`    |\n");
			printf("||_/=\\\\__|\n");*/

			//int A;

			//int B;

			//scanf_s("%d%d", &A, &B);
			////���ؿ����� scanf_s�� ������ ���� scanf�� ��� �ذ��
			//printf("%d", A + B);

			//return 0;

		//int A;
		//int B;
		//scanf_s("%d %d", &A, &B);
		//printf("%.9f", (double)A / B);
		//
		//return 0; // �������� ������� �Ǿ������� double�� ���� ������ ���°͵� ������� int�� ������ �� ���� ������ ������ ĳ������ �Ἥ �ٲ㵵 ������°� ����

		/*int A;
			int B;
			scanf_s("%d %d", &A, &B);
			printf("%d\n", A + B);
			printf("%d\n", A - B);
			printf("%d\n", A * B);
			printf("%d\n", A / B);
			printf("%d",   A % B);

			return 0;*/

			//int A;
			//int B;
			//int C;
			//
			//scanf_s("%d %d %d", &A, &B, &C);
			//printf("%d\n", (A + B) % C);
			//printf("%d\n", ((A% C) + (B % C)) % C);
			//printf("%d\n", (A* B) % C);
			//printf("%d", ((A% C)* (B% C)) % C);
			//
			//
			//return 0;


			//int a;
			//int b;
			//int c;
			//int d;
			//int e;

			//scanf_s("%d %d", &a, &b);

			//c = b / 100;
			//d = b / 10;
			//e = b;



			//printf("%d\n", c ); // ��° �ڸ��� ȹ��
			//printf("%d\n", d - c *10); //��° �ڸ��� ȹ��
			//printf("%d", e - ((d - c *10) * 10 + c * 100));//ù° �ڸ��� ȹ��

			//printf("%d\n", a* (e - ((d - c * 10) * 10 + c * 100)));
			//printf("%d\n", a* (d - c * 10));
			//printf("%d\n", a* c);
			//printf("%d", a* b);

			/*int a;
				int b;

				scanf_s("%d %d", &a, &b);

				if (a > b)
				{
					printf(">\n");
				}
				else if (a < b)
				{
					printf("<\n");
				}
				else
				{
					printf("==");
				}*/

				/*
				
					int Your_Score;

					scanf_s("%d", &Your_Score);

					if (Your_Score <= 100 && Your_Score >= 90)
					{
						printf("A");
					}
					else if (Your_Score >= 80 && Your_Score < 90)
					{
						printf("B");
					}
					else if (Your_Score >= 70 && Your_Score < 80)
					{
						printf("C");
					}
					else if (Your_Score >= 60 && Your_Score < 70)
					{
						printf("D");
					}
					else
					{
						printf("F");
					}
				*/


				/*		
				
					int year;

					scanf_s("%d", &year);
					if (year % 4 == 0 && year % 400 == 0)
					{
						printf("1");
					}
					else if (year % 4 == 0 && year % 100 != 0)
					{
						printf("1");
					}
					else if (year % 400 == 0 && year % 100 != 0)
					{
						printf("1");
					}

					else
					{
						printf("0");
					}

				
				*/

				/*int x;
					int y;

					scanf_s("%d %d", &x, &y);

					if (x > 0 && y > 0)
					{
						printf("1");
					}
					else if (x > 0 && y < 0)
					{
						printf("4");
					}
					else if (x < 0 && y >0)
					{
						printf("2");
					}
					else if (x < 0 && y < 0)
					{
						printf("3");
					}*/
					/*int H;
						int M;

						scanf_s("%d %d", &H, &M);
						if(H >=0 && H <=23 && M>= 0 && M <= 59)
						{
							if (H >= 0 && H < 24)
							{
								if (M < 45)
								{
									M = M + 60 - 45;
									H = H - 1;

								}
								else if (M >= 45 && M < 60)
								{
									M = M - 45;
								}
							}
							if (H < 0)
							{
								H = 23;
							}


							printf("%d %d", H, M);
						}
						return 0;*/

						//int gugudan;
						//
						//scanf_s("%d", &gugudan);
						//
						//for (int i = 1; i <= 9; i++)
						//{
						//	printf("%d * %d = %d\n", gugudan, i, gugudan * i);
						//
						//}

						/*int A;
							//int B;
							//int Test_case;

							//scanf_s("%d", &Test_case);

							////printf("%d\n", Test_case);

							//for (int i = Test_case;  i > 0; i--)
							//{
							//
							//	scanf_s("%d %d", &A, &B);

							//	printf("%d\n", A + B);
							//}
							//
						*/
						//int Num;
						//int Hap = 0;
						//scanf_s("%d", &Num);
						//for (int i = Num; i > 0; i--)
						//{
						//	Hap += i;
						//}
						//printf("%d", Hap); */

//int A;
	//int B;
	//int Test_case;

	//scanf_s("%d", &Test_case);

	////printf("%d\n", Test_case);

	//for (int i = 1;  i <= Test_case; i++)
	//{
	//	
	//	scanf_s("%d %d", &A, &B);

	//	printf("Case #%d: %d + %d = %d\n",i, A, B, A + B);
	//}

/*

	int num;

	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		for (int k = num-1; k >= i; k--)
		{
			printf(" ");
		}
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}


		printf("\n");
	
}*/

//int A, B;

////scanf_s("%d %d", &A, &B); // ó������ A B�� �Է������� �� ���� ������ ����

//while (scanf_s("%d %d", &A, &B) != EOF /*|| scanf_s("%d", &B) != EOF*/) 
//{
//	//scanf_s("%d %d", &A, &B);
//	printf("%d\n", A + B);

//	
//	//scanf_s("%d %d", &A, &B);
//}

/*int num;
int num1 = 1;

scanf_s("%d", &num);

while (num1 != num)
{
	printf("Hello World! \n");
	num1++;
}*/

/*int num;
int num1 = 1;

scanf_s("%d", &num);

while (num1 <= num)
{
	printf("%d ", num1 * 3);
	num1++;
}*/

/*int num;
	int num1 =0;

	scanf_s("%d", &num);

	while (num !=0)
	{
		num1 += num;
		printf("%d\n", num1);
		scanf_s("%d", &num);
	}*/

/*int num;
	int num1 =0;

	scanf_s("%d", &num);

	while (num !=0)
	{
		num1 += num;
		printf("%d\n", num1);
		scanf_s("%d", &num);
	}*/

/*int num;
	int num1= 0;
	int num2 = 0;

	int average= 0;

	printf("��� ������ �Է��Ͻðڽ��ϱ�?");
	scanf_s("%d", &num);

	while (num1 < num)
	{
		scanf_s("%d", &num2);
		average += num2;
		num1++;
	}

	printf("%d",average / num);*/

/*int num;
	int num1 = 1;
	int num2 = 0;
	int num3 = 0;

	scanf_s("%d", &num);

	while (num1 <= num)
	{
		scanf_s("%d", &num2);
		if (num2 >= 1)
		{
			num3 += num2;
			num1++;
			
		}
		else
		{
			printf("�Է��ϴ� ������ 1�̻��̾�� �մϴ�.");
		}

		
	}

	printf("%d", num3);*/


//int star;
//int circle;
//int num = 0;
//int num2 = 0;

//scanf_s("%d", &star);

//while (num < star)
//{
//	num2 = 0;
//	

//	while (num2 < num)
//	{
//		//num2 = 0;
//		printf("o");
//		num2++;
//		/*if (num2 == star)
//		{
//			break;
//		}*/

//	}
//		printf("*\n");

//	num++;
//	
//}

/*int num;
	int total = 0;

	printf("���� �Է�(0 to quit): ");
	scanf_s("%d", &num);


	while (num != 0)
	{
		total += num;
		printf("���� �Է�(0 to quit): ");
		scanf_s("%d", &num);
	}

	printf("%d", total);*/

/*int total = 0, num = 0;

	do 
	{
		printf("�����Է�(0 to quit): ");
		scanf_s("%d", &num);
		total += num;

	} while (num != 0);
	printf("�հ� : %d \n", total);

	return 0;*/ // ���ڿ������ٰ� ������ ����̶�� �ߴµ� ���� �� �𸣰���..

/*int num = 0, total = 0;

	do
	{
		total += num;

		num += 2;

		

	} while (num>=0 && num<=100);

	printf("%d", total);*/

	/*int cur = 2;
		//int is = 0;

		//while (cur < 10)
		//{
		//	is = 1;
		//	while (is < 10)
		//	{
		//		printf("%d x %d = %d \n", cur, is, cur * is);
		//		is++;
		//	}
		//	cur++;
		//}
		//return 0;*/

		//int cur = 2;
		//int is = 0;

		//do
		//{
		//	is = 1;
		//	do
		//	{
		//		printf("%d x %d = %d \n", cur, is, cur * is);
		//		is++;

		//	} while (is < 10);

		//		cur++;
		//} while (cur < 10);

/*  int num;
	int num2;

	int total = 0;

	scanf_s("%d %d", &num, &num2);

	for (int i = num; i <= num2; i++)
	{
		total += i;
	}
	printf("%d", total);*/

/*int num;
	int total = 1;

	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total *= i;
	}

	printf("%d! = %d", num, total);*/

/*int num = 0;
	
	while (num < 100)
	{
		num += 1;

		if (num % 7 == 0 || num % 9 == 0)
		{
			printf("%d\n", num);
		}

	}
	return 0;*/

/*int num = 0;
	
	while (num < 100)
	{
		num += 1;

		if (num % 7 == 0 || num % 9 == 0)
		{
			printf("%d\n", num);
		}

	}
	return 0;*/

/*int Korean;
	int English;
	int Math;

	int total = 0;

	scanf_s("%d %d %d", &Korean, &English, &Math);

	total = (Korean + English + Math) / 3;

	if (total >= 90)
	{
		printf("A");
	}
	else if (total >= 80)
	{
		printf("B");
	}
	else if (total >= 70)
	{
		printf("C");
	}
	else if (total >= 50)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	*/

	/*int num;
		int num2;

		int result;

		scanf_s("%d %d", &num, &num2);

		result = num > num2 ? (num - num2) : (num2 - num);

		printf("%d", result);
		*/

//int i = 1;
	//int num = 0;

	//for (int gugudan = 1; gugudan < 10; gugudan++ )
	//{
	//	if (i % 2 != 0)
	//	{
	//		num = 0;
	//		i++;
	//		//printf("gugudan : %d\n", gugudan);
	//		//gugudan++;
	//		continue;
	//	}

	//	if (i % 2 == 0)
	//	{
	//		//gugudan = 1;
	//		if (num ==0)
	//		{
	//			//printf("i = %d\n", i);
	//			//printf("gugudan = %d\n", gugudan);
	//			gugudan = 1;
	//			num = 1;
	//		}
	//		//gugudan = 1;
	//		printf("%d X %d = %d\n", i, gugudan, gugudan * i);
	//		
	//		
	//			//gugudan++;
	//			
	//		
	//		if (gugudan == i)
	//		{
	//			i++;
	//			printf("\n");
	//		}
	//			
	//		//continue;
	//	}
	//
	//}
	//

/*int A;
	int Z;
	
	int result;

	for(A=0; A<10; A++)
	{
		for (Z = 0; Z < 10; Z++)
		{
			if (A == Z)
			{
				continue;
			}

			result = (A * 10 + Z) + (10 * Z + A);
			if (result == 99)
			{
				printf("%d%d + %d%d = %d\n", A, Z, Z, A, result);
			}
		}*/

/*int n;

	scanf_s("%d", &n);

	switch (n)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:		
		printf("0�̻� 10�̸�\n");
		break;
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
	case 19:
		printf("10�̻� 20�̸�\n");
		break;
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 25:
	case 26:
	case 27:
	case 28:
	case 29:
		printf("20�̻� 30�̸�\n");
		break;
	default:
		printf("30�̻� \n");
		break;
	
	}*/


	/*int N;
	int A;
	int X;


	scanf_s("%d %d", &N, &X);

	for (int A = 0; A < N; A++)
	{
		scanf_s("%d", &A);
		if (A < X)
		{
			printf("%d", A);
		}

	}*/



	//int A;
	//int B;
	//int C = 0;
	//int D = 0;

	//scanf_s("%d", &A);

	//B = A;



	//if (B >= 10)
	//{
	//	while (B != C)
	//	{
	//		C = (A * 0.1 + (A - ((A * 0.1) * 10))); //8
	//		C = C + ((A * 0.1) * 10); //68
	//		D = D + 1;
	//		A = C;
	//	}
	//}
	//else
	//{
	//	C = 0 + A;
	//	C = C + ((A * 0.1) * 10);

	//	D = D + 1;

	//	A = C;
	//}


	//printf("%d", D);


//int CheckHighNumber(int, int, int);
//int CheckLowNumber(int, int, int);
//
//int main(void)
//{
//	int num1, num2, num3;
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//	printf("�� �߿��� ���� ū ���� : %d, �׸��� ���� ���� �� : %d �Դϴ�!", CheckHighNumber(num1, num2, num3), CheckLowNumber(num1, num2, num3));
//}
//
//int CheckHighNumber(int num1, int num2, int num3)
//{
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			return num1;
//		}
//		else
//		{
//			return num3;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			return num2;
//		}
//		else
//		{
//			return num3;
//		}
//	}
//	
//}
//
//int CheckLowNumber(int num1, int num2, int num3)
//{
//	if (num1 < num2)
//	{
//		if (num1 < num3)
//		{
//			return num1;
//		}
//		else
//		{
//			return num3;
//		}
//	}
//	else
//	{
//		if (num2 < num3)
//		{
//			return num2;
//		}
//		else
//		{
//			return num3;
//		}
//	}
//}


//int CelToFah(int);
//int FahToCel(int);
//
//
//int main(void)
//{
//	int num, Celsius, Fahrenheit;
//	printf("������ ȭ���� �ٲٰ� �ʹٸ� 1, ȭ���� ������ �ٲٰ� �ʹٸ� 0�� �Է����ּ���!!\n");
//	scanf_s("%d", &num);
//
//	if (num == 1)
//	{
//		printf("���� ȭ���� �ٲٰ� ���� ���� �µ��� �Է����ּ���!\n");
//		scanf_s("%d", &Celsius);
//		printf("%d�� ���� ���� �µ��� %d�� �� ȭ�� �µ��� �ٲ�����ϴ�! ", Celsius, CelToFah(Celsius));
//		
//	}
//	else
//	{
//		printf("���� ������ �ٲٰ� ���� ȭ�� �µ��� �Է����ּ���!\n");
//		scanf_s("%d", &Fahrenheit);
//		printf("%d�� ���� ȭ�� �µ��� %d�� �� ���� �µ��� �ٲ�����ϴ�! ", Fahrenheit, FahToCel(Fahrenheit));
//	}
//
//	return 0;
//
//}
//
//int CelToFah(int Celsius)
//{
//	int result = Celsius * 1.8 + 32;
//	return result;
//}
//
//int FahToCel(int Fahrenheit)
//{
//	int result = Fahrenheit / 1.8 - 32;
//	return result;
//}

//
//int Fibonacci(int num);
//
//int main(void)
//{
//	int num;
//	scanf_s("%d", &num);
//	Fibonacci(num);
//
//}
//
//int Fibonacci(int num)
//{
//	int num1 = 0, num2 = 1;
//	int result;
//	for (int i = 0; i < num; i++)
//	{
//		if (i == 0)
//		{
//			printf("%d ", num1);
//		}
//		else if (i == 1)
//		{
//			printf("%d ", num2);
//		}
//		else
//		{
//			result = num1 + num2;
//			 
//			printf("%d ", result);
//			
//			if (num1 < num2)
//			{
//				num1 = result;
//			}
//			else
//			{
//				num2 = result;
//			}
//			
//			
//			//num2 = num1;
//		}
//
//		
//	}
//}

//int AddToTotal(int num)
//{
//	static int total= 0;
//	total += num;
//	return total;
//}
//
//
//
//int main(void)
//{
//	int num, i;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�Է�%d: ", i + 1);
//		scanf_s("%d", &num);
//		printf("����: %d\n", AddToTotal(num));
//	}
//
//	return 0;
//}

/*int num1;
	int num2;
	scanf_s("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		for (int i = num2; i <= num1; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
	}
	else
	{
		for (int i = num1; i <= num2; i++)
		{
			for (int j = 1; j < 10; j++)
			{
				printf("%d * %d = %d\n", i, j, i * j);
			}
		}
	}
	*/


/*int num1, num2;

scanf_s("%d %d", &num1, &num2);


if (num1 > num2)
{
	for (int i = num2; i >= 0; i--)
	{
		if (num2 % i == 0)
		{

			if (num1 % i == 0)
			{
				printf("%d", i);
				break;
			}
		}


	}

}
else
{
	for (int i = num1; i >= 0; i--)
	{
		if (num1 % i == 0)
		{

			if (num2 % i == 0)
			{
				printf("%d", i);
				break;
			}
		}


	}

}*/


//int Time;

	//int Hour = 0;
	//int Minute = 0;
	//int Second = 0;


	//scanf_s("%d", &Time);

	//while (Time > 3600)
	//{
	//	Time = Time - 3600;
	//	Hour++;
	//	//if(Time< 3600)
	//}

	//while (Time > 60)
	//{
	//	Time = Time - 60;
	//	Minute++;
	//}

	//Second = Time;

	//printf("[H: %d, M: %d, S: %d", Hour, Minute, Second);

//int num1 = 2;
//
//void ZaeGob(int num2)
//{
//
//	for (int i = 1; i < num2; i++)
//	{
//		num1 = num1 * 2;
//	}
//
//	return num1;
//}
//
//
//int main(void)
//{
//	
//	int num2;
//
//	scanf_s("%d", &num2);
//
//	ZaeGob(num2);
//
//	printf("2�� %d���� %d�Դϴ�.", num2, num1);
//
//
//}

//int arr1[5];

	//int result = 0, high = 0, low = 0;

	//for (int i = 0; i < 5; i++)
	//{
	//	scanf_s("%d", &arr1[i]);

	//	//result += arr1[i];
	//	
	//}

	//high = arr1[0];
	//low = arr1[0];

	//if (high > arr1[1])
	//{
	//	if (high > arr1[2])
	//	{
	//		if (high > arr1[3])
	//		{
	//			if (high > arr1[4])
	//			{
	//				high = arr1[0];
	//			}
	//			else
	//			{
	//				high = arr1[4];
	//			}
	//		}
	//		else
	//		{
	//			high = arr1[3];

	//			if(high > arr1[4])
	//			{
	//				high = arr1[3];
	//			}
	//			else
	//			{
	//				high = arr1[4];
	//			}
	//		}
	//	}
	//	else
	//	{
	//		high = arr1[2];
	//		if (high > arr1[3])
	//		{
	//			if(high > arr1[4])
	//				{
	//					high = arr1[2];
	//				}
	//			else
	//			{
	//				high = arr1[4];
	//			}
	//		}
	//		else
	//		{
	//			high = arr1[3];
	//			if (high > arr1[4])
	//			{
	//				high = arr1[3];
	//			}
	//			else
	//			{
	//				high = arr1[4];
	//			}
	//		}
	//	}
	//}
	//else
	//{
	//	high = arr1[1];
	//	
	//		if (high > arr1[2])
	//		{
	//			if (high > arr1[3])
	//			{
	//				if (high > arr1[4])
	//				{
	//					high = arr1[1];
	//				}
	//				else
	//				{
	//					high = arr1[4];
	//				}
	//			}
	//			else
	//			{
	//				high = arr1[3];
	//				if (high > arr1[4])
	//				{
	//					high = arr1[3];
	//				}
	//				else
	//				{
	//					high = arr1[4];
	//				}
	//			}
	//		}
	//		else
	//		{
	//			high = arr1[2];
	//			if (high > arr1[3])
	//			{
	//				if (high > arr1[4])
	//				{
	//					high = arr1[2];
	//				}
	//				else
	//				{
	//					high = arr1[4];
	//				}
	//			}
	//			else
	//			{
	//				high = arr1[3];
	//				if (high > arr1[4])
	//				{
	//					high = arr1[3];
	//				}
	//				else
	//				{
	//					high = arr1[4];
	//				}
	//			}
	//		}
	//}
	//if (low < arr1[1])
	//{
	//	if (low < arr1[2])
	//	{
	//		if (low < arr1[3])
	//		{
	//			if (low < arr1[4])
	//			{
	//				low = arr1[0];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}
	//		}
	//		else
	//		{
	//			low = arr1[3];

	//			if (low < arr1[4])
	//			{
	//				low = arr1[3];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}
	//		}

	//	}
	//	else
	//	{
	//		low = arr1[2];

	//		if (low < arr1[3])
	//		{
	//			if (low < arr1[4])
	//			{
	//				low = arr1[2];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}

	//		}
	//		else
	//		{
	//			low = arr1[3];

	//			if (low < arr1[4])
	//			{
	//				low = arr1[3];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}
	//		}
	//	}
	//}
	//else
	//{
	//	low = arr1[1];

	//	if (low < arr1[2])
	//	{
	//		if (low < arr1[3])
	//		{
	//			if (low < arr1[4])
	//			{
	//				low = arr1[1];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}
	//		}
	//		else
	//		{
	//			low = arr1[3];

	//			if (low < arr1[4])
	//			{
	//				low = arr1[3];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}
	//		}

	//	}
	//	else
	//	{
	//		low = arr1[2];

	//		if (low < arr1[3])
	//		{
	//			if (low < arr1[4])
	//			{
	//				low = arr1[2];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}

	//		}
	//		else
	//		{
	//			low = arr1[3];

	//			if (low < arr1[4])
	//			{
	//				low = arr1[3];
	//			}
	//			else
	//			{
	//				low = arr1[4];
	//			}
	//		}
	//	}
	//}



	//result = arr1[1] + arr1[2] + arr1[3] + arr1[4] + + arr1[0];
	//

	//printf("�Է��� ���� �߿��� �ִ� : %d \n", high);

	//printf("�Է��� ���� �߿��� �ּڰ� : %d \n", low);

	//printf("�Է��� ������ �� �� : %d \n", result);

//char aaa[] = { 'G','o','o','d',' ','t','i','m','e' };

///*for (int i = 0; i < 9; i++)
//{
//	scanf_s("%c", aaa[i]); //�� �ȵǴ����� ���ؼ� ��Ȯ�ϰ� ��
//}*/
//printf("\n");
//for (int i = 0; i < 9; i++)
//{
//	printf("%c", aaa[i]);
//	
//}
//return 0;


/*char word[50];

	char Reverse[50];

	int Length = 0;

	scanf_s("%s", word, 50);

	while (word[Length] != 0)
	{
		Length++;
	}

	printf("%d\n", Length);

	for (int i = Length-1; i >= 0; i--)
	{
		Reverse[Length-1 - i] = word[i];
	}

	Reverse[Length] = '\0';

	printf("%s", Reverse);*/

/*int num1 = 10;
int num2 = 20;

int* ptr1 = &num1;
int* ptr2 = &num2;

(*ptr1) += 10;
(*ptr2) -= 10;

ptr1 = &num2;
ptr2 = &num1;

printf("%d \n", *ptr1);
printf("%d \n", *ptr2);

return 0; */



//int Array[1000000];
//
//
//int main(void)
//{
//	int n = 0;
//
//	
//	
//	int max = Array[0], min = Array[0];
//
//	scanf_s("%d", &n);
//
//	Array[n] = '\0';
//
//	
//
//	for (int i = 0; i < n; i++)
//	{
//		scanf_s("%d", &Array[i]);
//
//		if (i == 0)
//		{
//			max = Array[i];
//
//			min = Array[i];
//		}
//
//		if (i > 0)
//		{
//			if (max < Array[i])
//			{
//				max = Array[i];
//				
//			}
//
//			if (min > Array[i])
//			{
//				min = Array[i];
//				
//			}
//
//		}
//		
//	}
//
//	
//
//	printf("%d %d", min, max);
//}									//�迭�� ���������� �����ϸ� ���ÿ� �����Ǿ� ������ ũ�� ���ѿ� ���� ��Ÿ�� ������ �������� ���������� �����ϸ� �� ������ �����Ǿ� �� �������� ���� �����ӽ��ϴ�.




//
//	int Nine[9];
//
//	int Num = 1;
//
//	int Max = 0;
//
//
//
//
//	for (int i = 1; i < 10; i++)
//	{
//		scanf_s("%d", &Nine[i - 1]);
//
//		if (i == 1)
//		{
//			Max = Nine[0];
//		}
//		if (i > 1)
//		{
//			if (Max < Nine[i - 1])
//			{
//				Max = Nine[i - 1];
//				Num = i;
//			}
//		}
//
//
//
//
//	}
//
//	printf("%d\n%d", Max, Num);
//
//	return 0;
