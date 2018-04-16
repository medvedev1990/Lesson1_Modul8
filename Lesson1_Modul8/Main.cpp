#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<time.h>
#include"Header.h"
void main()
{
	setlocale(LC_ALL, "rus");
	int n, quit;
	srand(time(NULL));

	do
	{
		printf("enter number task: ");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
		{
			/*1.Составить программу, которая:
a.запрашивает имя человека и повторяет его на экране;
b.запрашивает имя человека и повторяет его на экране с приветствием.*/
			char *name = NULL;
			int row = 20;
			name = (char*)calloc(row, sizeof(char));
			if (name == NULL)
				printf("no memmory!\n");
			else
			{
				printf("please enter Your name: ");
				scanf("%s", name);
				printf("%s\n", name);
				printf("Hello %s\n", name);
			}
			free(name);
		}
		break;
		case 2:
		{
			/*2.Составить программу, которая запрашивает название футбольной команды и повторяет его на экране со словами "— это чемпион!".*/
			char *comand = NULL;
			int row = 20;
			comand = (char*)calloc(row, sizeof(char));
			if (comand == NULL)
				printf("no memmory!\n");
			else
			{
				printf("please enter name comand: ");
				scanf("%s", comand);
				printf("%s\n", comand);
				printf("%s Чемпион!\n", comand);
			}
			free(comand);
		}
		break;
		case 3:
		{
			/*3.Составить программу, которая запрашивает отдельно имя и отдельно фамилию, а затем выводит их как одну символьную строку.*/
			char *name = NULL;
			int row = 20;
			name = (char*)calloc(row, sizeof(char));
			char *firsname = NULL;
			firsname = (char*)calloc(row, sizeof(char));
			if (name == NULL)
				printf("no memmory name!\n");
			if (firsname == NULL)
				printf("no memmory firstname!\n");
			else
			{

				printf("please enter Your name: ");
				scanf("%s", name);
				printf("please enter Your Firstname: ");
				scanf("%s", firsname);
				strncat(name, firsname, 40);
				printf("%s\n", name);
			}
			free(name);
			free(firsname);
		}
		break;
		case 4:
		{
			/*4.Составить программу, которая запрашивает название государства и его столицы, а затем выводит сообщение: "Столица государства ... — город ..."
			(на месте многоточий должны быть выведены соответствующие значения).*/
			char *gos = NULL;
			int row = 20;
			gos = (char*)calloc(row, sizeof(char));
			char *stolica = NULL;
			stolica = (char*)calloc(row, sizeof(char));
			if (gos == NULL)
				printf("no memmory gos!\n");
			if (stolica == NULL)
				printf("no memmory stolica!\n");
			else
			{

				printf("please enter Gosudarstvo: ");
				scanf("%s", gos);
				printf("please enter stolica: ");
				scanf("%s", stolica);
				printf("Столица государства %s-город %s\n", gos, stolica);
			}
			free(gos);
			free(stolica);
		}
		break;
		case 5:
		{
			/*Дано название футбольного клуба. Определить количество символов в нем.*/
			char *club = NULL;
			int row = 20;
			club = (char*)calloc(row, sizeof(char));
			if (club == NULL)
				printf("no memmory name!\n");
			else
			{
				printf("please enter club: ");
				scanf("%s", club);
				printf("колличество символов %d \n", strlen(club));
			}
			free(club);
		}
		break;
		case 6:
		{
			/*6.Дано название города. Определить, четно или нет количество символов в нем*/
			char *gos = NULL;
			int row = 20;
			gos = (char*)calloc(row, sizeof(char));
			if (gos == NULL)
				printf("no memmory gos!\n");
			else
			{

				printf("please enter Gosudarstvo: ");
				scanf("%s", gos);
				int a = strlen(gos);
				if (a % 2 == 0)
					printf("колличество символов четное %d \n", a);
				else
					printf("колличество символов не четное %d \n", a);
			}
			free(gos);
		}
		break;
		case 7:
		{
			/*7.Даны две фамилии. Определить, какая из них длиннее.*/
			char *name = NULL;
			int row = 20;
			name = (char*)calloc(row, sizeof(char));
			char *name2 = NULL;
			name2 = (char*)calloc(row, sizeof(char));
			if (name == NULL)
				printf("no memmory name!\n");
			if (name2 == NULL)
				printf("no memmory firstname!\n");
			else
			{

				printf("please enter Your name: ");
				scanf("%s", name);
				printf("please enter Your name 2: ");
				scanf("%s", name2);
				if (strlen(name) > strlen(name2))
					printf("длинее имя %s\n", name);
				else if (strlen(name) < strlen(name2))
					printf("длинее имя %s\n", name2);
				else
					printf("имена одинаковые\n");
			}
			free(name);
			free(name2);
		}
		break;
		case 8:
		{
			/*8.Даны названия трех городов. Вывести на экран самое длинное и самое короткое название.*/
			char *strana1 = NULL;
			int row = 20;
			strana1 = (char*)calloc(row, sizeof(char));
			char *strana2 = NULL;
			strana2 = (char*)calloc(row, sizeof(char));
			char *strana3 = NULL;
			strana3 = (char*)calloc(row, sizeof(char));
			if (strana1 == NULL)
				printf("no memmory strana1!\n");
			if (strana2 == NULL)
				printf("no memmory strana2!\n");
			if (strana3 == NULL)
				printf("no memmory strana3!\n");
			else
			{
				strana1 = "Spain";
				strana2 = "Oman";
				strana3 = "Argentina";
				if ((strlen(strana1) < strlen(strana2)) && (strlen(strana1) < strlen(strana3)))
					printf("самое короткое слово %s", strana1);
				else if ((strlen(strana2) < strlen(strana1)) && (strlen(strana2) < strlen(strana3)))
					printf("самое короткое слово %s", strana2);
				else if ((strlen(strana3) < strlen(strana2)) && (strlen(strana3) < strlen(strana1)))
					printf("самое короткое слово %s", strana3);
				if ((strlen(strana1) > strlen(strana2)) && (strlen(strana1) > strlen(strana3)))
					printf("самое длинное слово %s", strana1);
				else if ((strlen(strana2) > strlen(strana1)) && (strlen(strana2) > strlen(strana3)))
					printf("самое длинное слово %s", strana2);
				else if ((strlen(strana3) > strlen(strana2)) && (strlen(strana3) > strlen(strana1)))
					printf("самое длинное слово %s", strana3);

			}
			free(strana1);
			free(strana2);
			free(strana3);
		}
		break;
		case 9:
		{
			/*9.Дано слово. Вывести на экран его третий символ*/
			char *name = NULL;
			int row = 20;
			name = (char*)calloc(row, sizeof(char));
			if (name == NULL)
				printf("no memmory name!\n");
			else
			{
				printf("please enter Your name: ");
				scanf("%s", name);
				printf("%c\n", *(name + 2));
			}
			free(name);
		}
		break;
		case 10:
		{
			/*10.Введите массив символов из 12 элементов. Замените каждый символ- цифру на символ '!'*/
			char *cale = NULL;
			int row = 12;
			cale = (char*)calloc(row, sizeof(char));
			if (cale == NULL)
				printf("no memmory name!\n");
			else
			{
				int i;
				for (i = 0;i < row;i++)
				{
					printf("please enter numbers: ");
					scanf("%c", (cale + i));
					if ((*(cale + i) == '0') || (*(cale + i) == '1') || (*(cale + i) == '2') || (*(cale + i) == '3') || (*(cale + i) == '4') || (*(cale + i) == '5') || (*(cale + i) == '6') || (*(cale + i) == '7') || (*(cale + i) == '8') || (*(cale + i) == '9'))
						*(cale + i) = '!';
				}
				for (i = 0;i < row;i++)
				{
					printf("%c", *(cale + i));
				}
				printf("\n");
			}
			free(cale);
		}
		break;
		case 11:
		{
			/*11.Дана матрица символов размером 2×6. Сколько раз среди данных символов встречаются символы +, -, *.*/
			char *mass = NULL;
			int str = 2;
			int col = 6;
			mass = (char*)calloc(str*col, sizeof(char));
			if (mass != NULL)
			{
				zapMass(mass, &col, &str);
				printmass(mass, &col, &str);
				searchSimbol(mass, &col, &str);
			}
			free(mass);
		}
		break;
		case 12:
		{
			/*Введите массив символов из 15 элементов. Подсчитать количество гласных русских букв.*/


		}
		break;
		case 13:
		{
			/*13.Дан массив символов, среди которых есть символ двоеточие ‘:’. Определить, сколько символов ему предшествует.*/
			char mass[15] = { '1','2','3','4','5','6',':','4','5','6','1','2','3' };
			int i;
			int chek = 0;
			for (i = 0;i < 15;i++)
			{
				if (mass[i] != ':')
					chek++;
				else
					break;
			}
			printf("символов до : %d\n", chek);
		}
		break;
		case 15:
		{
			/*15.Заданы две строки. Построить новую строку, состоящую из символов, которые входят в первую строку, но не входят во вторую.*/
			char *gos = NULL;
			int row = 20;
			gos = (char*)calloc(row, sizeof(char));
			char *stolica = NULL;
			stolica = (char*)calloc(row, sizeof(char));
			if (gos == NULL)
				printf("no memmory gos!\n");
			if (stolica == NULL)
				printf("no memmory stolica!\n");
			else
			{

				printf("please enter Gosudarstvo: ");
				scanf("%s", gos);
				printf("please enter stolica: ");
				scanf("%s", stolica);
				printf("%d\n", strcmp(gos, stolica));
			}
			free(gos);
			free(stolica);
		}
		break;
		default:printf("нет задания\n");
			break;
		}
		printf("продолжить 1-да: ");
		scanf("%d", &quit);
		printf("\n");
	} while (quit == 1);
}