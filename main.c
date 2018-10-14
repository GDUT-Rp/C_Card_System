#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct consumer
{
    int num;
    int rnum;
    char name[20];
	int money;
    int time;
    long long trade_date;
    long long input_date;
    float fee;
    float remain;
    char type[20];
    char addr[50];
	struct consumer * down;
    struct consumer * next;
}con,*pcon;

#define SIZE sizeof(con)

void month();
void check_1();
void term();
void year();
void check_2();
void check_3();
void MC_month();
void MC_sort_1();
void MC_check_1();
void MC_check_2();
void MC_check_3();
void MC_check_4();
void MC_sort_1();
void MC_sort_2();
void MC_sort_3();
void MC_input_1();
void MC_input_2();
void MC_input_3();
void MC_input_4();
void sort_1();
void sort_2();
void sort_3();


int main()
{
    /*��������*/
    void shenfen();
    void welcome();
    void check();
    void sort();
    void statistics();
    void input();
    void update();
    void MC_check();
    void MC_sort();
    void MC_statistics();
    void MC_input();
    void MC_update();
	void print();
	void byebye();
    pcon LoadInfo();

    int choice;
    int first;
    int flag = 0;
    pcon head;

    head = LoadInfo();

    shenfen();
    scanf("%d",&first);
    while(1){

        welcome();

        switch(first)
        {
            case 1:
            scanf("%d",&choice);               /*���湦��ѡ��*/
            switch(choice)
            {
                case 1: check(head);            break;   /*����һ:��ѯ*/
                case 2: sort(head);             break;   /*���ܶ�:����*/
                case 3: statistics(head);       break;   /*������:ͳ��*/
                case 4: input(head);            break;   /*������:¼��*/
                case 5: update(head);           break;   /*������:����*/
                case 7: flag = 1;               break;
                default: printf("Input Error!\nPlease check again!\n");exit(0);
            }
            break;
            case 2:
            scanf("%d",&choice);               /*���湦��ѡ��*/
            switch(choice)
            {
                case 1: MC_check(head);        break;   /*����һ:��ѯ*/
                case 2: MC_sort(head);             break;   /*���ܶ�:����*/
                case 3: MC_statistics(head);       break;   /*������:ͳ��*/
                case 4: MC_input(head);            break;   /*������:¼��*/
                case 5: MC_update(head);           break;   /*������:����*/
                case 6: print(head);        break;   /*�����������ȫ��*/
                default: printf("Input Error!\nPlease check again!\n");exit(0);
            }
            break;

        }
        if(flag == 1)
            {
                byebye(head);
                break;
            }
    }
    return 0;
}

void welcome()
{
    printf("                       Welcome To The System                                 \n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf(" 1---��ѯ  2---����   3---ͳ��  4---¼��  5----����  6----��ʾȫ��  7----�˳�\n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
}

void shenfen()
{
    printf("-----------------------------------------------------------------------------\n");
    printf("-------------------------------�������������--------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                1----������                  2----������                     \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
}

void check(pcon x)
{
	void check_1();
    void check_2();
    void check_3();
    int check_choice;
    pcon head;
    head = x;

    system("cls");
    printf("Ready for the check!\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("      1----���̶�ʱ�β�ѯ       2----����������β�ѯ                        \n");
    printf("      3----�����׽���ѯ                                                    \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&check_choice);
    switch(check_choice)
    {
        case 1: check_1(head);
				break;
        case 2: check_2(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
                break;
        case 3: check_3(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void sort(pcon x)
{
    void sort_1();
    void sort_2();
    void sort_3();
	int sort_choice;
    pcon head;
    head = x;

    system("cls");
    printf("Ready for the sort!\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("      1----��������������       2----�����׽������                          \n");
    printf("      3----�����״�������                                                    \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&sort_choice);

    switch(sort_choice)
    {
        case 1: sort_1(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 2: sort_2(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 3: sort_3(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_check(pcon x)
{
    void MC_check_1();
    void MC_check_2();
    void MC_check_3();
    void MC_check_4();
    int check_choice;
    pcon head;
    head =x;

    printf("Ready for the check!\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("      1----���̶�ʱ�β�ѯ       2----����������β�ѯ                        \n");
    printf("      3----�����׽���ѯ       4----��ɾ����¼��ѯ                          \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&check_choice);

    switch(check_choice)
    {
        case 1: MC_check_1(head);
				break;
        case 2: MC_check_2(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 3: MC_check_3(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 4: MC_check_4(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_sort(pcon x)
{
    void MC_sort_1();
    void MC_sort_2();
    void MC_sort_3();
    int sort_choice;
    pcon head;
    head = x;

    printf("Ready for the sort!\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("      1----��������������       2----�����׽������                          \n");
    printf("      3----�����״�������                                                    \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&sort_choice);

    switch(sort_choice)
    {
        case 1: MC_sort_1(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 2: MC_sort_2(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 3: MC_sort_3(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}
pcon LoadInfo()
{
    int rnum;
	int num;
	char name[20];

	int break_flag = 1;
	char filename[] = "data.txt";
	FILE *fp;
	pcon head,ptr,pdown;

	int you = 1;		/*��ʾ�ڼ���������*/
	int time;
	long long trade_date;
	long long input_date;
	float fee;
	float remain;
	char type[20];
	char addr[50];

	/*��������ͷ�ڵ�Ŀ�����head���������������Ϣ*/
	head = (pcon)malloc(SIZE);
	ptr = head;
	pdown = head;
	ptr->next = NULL;

	/*����data�ļ������head����*/
	if( NULL == (fp = fopen(filename,"r")))/*�ж��ļ��Ƿ���ڼ��ɶ�*/
	{
		printf("Error!\nFile can't be read!\n");
		exit(0);
	}

	while(!feof(fp))
	{
	    if(you == 1) {fscanf(fp,"%d",&rnum);}
		fscanf(fp,"%d %s %d %lld %lld %f %f %s %s",&num,name,&time,&trade_date,&input_date,&fee,&remain,type,addr);
		ptr->next = (pcon)malloc(SIZE);
		ptr = ptr->next;
		pdown = ptr;
		ptr->next = NULL;
		ptr->num = num;
		ptr->rnum = rnum;
		strcpy(ptr->name,name);
        ptr->time = time;
        ptr->trade_date = trade_date;
        ptr->input_date = input_date;
        ptr->fee = fee;
        ptr->remain = remain;
        strcpy(ptr->type,type);
        strcpy(ptr->addr,addr);
        you++;

        while(1)
        {
            fscanf(fp,"%d",&rnum);
            break_flag = rnum;
            pdown->down = NULL;
            if(rnum == num)
            {
                pdown->down = (pcon)malloc(SIZE);
                fscanf(fp,"%d %s %d %lld %lld %f %f %s %s",&num,name,&time,&trade_date,&input_date,&fee,&remain,type,addr);
                pdown = pdown->down;		/*��������*/
                pdown->down = NULL;
                pdown->num = num;
                pdown->rnum = rnum;
                pdown->time = time;
                pdown->trade_date = trade_date;
                pdown->input_date = input_date;
                pdown->fee = fee;
                pdown->remain = remain;
                strcpy(pdown->type,type);
                strcpy(pdown->name,name);
                strcpy(pdown->addr,addr);
            }
            else{
                break;
            }
        }
        if(break_flag == -1)        /*�ļ���-1��Ϊ������*/
        {
            break;
        }
    }

    you--;
	fclose(fp);

	return head->next;
}

pcon LoadInfo1()
{
    int rnum;
	int num;
	char name[20];
	int time;
	long long trade_date;
	long long input_date;
	float fee;
	float remain;
	char type[20];
	char addr[50];
	int break_flag = 1;
	char filename[] = "fee_unde1.txt";
	int you = 1;		/*��ʾ�ڼ���������*/
	FILE *fp;
	pcon head,ptr,pdown;


	/*��������ͷ�ڵ�Ŀ�����head���������������Ϣ*/
	head = (pcon)malloc(SIZE);
	ptr = head;
	pdown = head;
	ptr->next = NULL;

	/*����data�ļ������head����*/
	if( NULL == (fp = fopen(filename,"r")))/*�ж��ļ��Ƿ���ڼ��ɶ�*/
	{
		printf("Error!\nFile can't be read!\n");
		exit(0);
	}

	while(!feof(fp))
	{
	    if(you == 1) {fscanf(fp,"%d",&rnum);}
		fscanf(fp,"%d %s %d %lld %lld %f %f %s %s",&num,name,&time,&trade_date,&input_date,&fee,&remain,type,addr);
		ptr->next = (pcon)malloc(SIZE);
		ptr = ptr->next;
		pdown = ptr;
		ptr->next = NULL;
		ptr->num = num;
		ptr->rnum = rnum;
		strcpy(ptr->name,name);
        ptr->time = time;
        ptr->trade_date = trade_date;
        ptr->input_date = input_date;
        ptr->fee = fee;
        ptr->remain = remain;
        strcpy(ptr->type,type);
        strcpy(ptr->addr,addr);
        you++;

        while(1)
        {
            fscanf(fp,"%d",&rnum);
            break_flag = rnum;
            pdown->down = NULL;
            if(rnum == num)
            {
                pdown->down = (pcon)malloc(SIZE);
                fscanf(fp,"%d %s %d %lld %lld %f %f %s %s",&num,name,&time,&trade_date,&input_date,&fee,&remain,type,addr);
                pdown = pdown->down;		/*��������*/
                pdown->down = NULL;
                pdown->num = num;
                pdown->rnum = rnum;
                pdown->time = time;
                pdown->trade_date = trade_date;
                pdown->input_date = input_date;
                pdown->fee = fee;
                pdown->remain = remain;
                strcpy(pdown->type,type);
                strcpy(pdown->name,name);
                strcpy(pdown->addr,addr);
            }
            else{
                break;
            }
        }
        if(break_flag == -1)        /*�ļ���-1��Ϊ������*/
        {
            break;
        }
    }

    you--;
	fclose(fp);

	return head->next;
}



/*�˹��ܱ���ȫ����¼*/
void print(pcon x)
{
	pcon ptr,pdown;
	ptr = pdown = x;

	printf("Ready for the print!\n");
	if(ptr == NULL) printf("ptr is NULL !\n");

	while(ptr != NULL)
	{
		printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
		pdown = ptr;
		while(pdown->down != NULL)
		{
			pdown = pdown->down;
			printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

		}
		ptr = ptr->next;
	}

	printf("printf is done!\n");
}

void statistics(pcon x)
{
    void check();

    pcon head;
    head = x;

    printf("Ready for the statistics!\n");

    check(head);
}

void input()
{
    printf("�Բ�����û��¼���Ȩ��!\nĿǰֻ�й�������Ȩ��\n");
    system("cls");
}

void update()
{
    printf("Ŀǰ�����°�\n");
}

void check_1(pcon x)
{
    void month();
    void term();
    void year();
    int check_1choice;
    pcon head;
    head = x;

    printf("���̶�ʱ�β�ѯ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("    1----���²�ѯ     2----��ѧ�ڲ�ѯ    3----��ѧ���ѯ                     \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&check_1choice);
    switch(check_1choice)
    {
        case 1: month(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
                break;
        case 2: term(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
                break;
        case 3: year(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void month(pcon x)
{
    int yue;
    float total = 0;
    int flag = 0;
    int beginday;
    int endday;
    char name[20];
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("����������������");
    scanf("%s",name);
    printf("���·ݲ�ѯ\n");
    printf("�밴�����ڸ�ʽ201802����\n");
    printf("������Ҫ��ѯ���·ݣ�");
    scanf("%d",&yue);
    beginday = yue * 100;
    endday = (yue + 1) * 100;
    while( ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total += pdown->fee;
            }
        }
        ptr = ptr->next;
    }
    if(flag == 1)printf("��ѯ�������\n�ö�ʱ���ڵ������ܽ�%f\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}

void term(pcon x)
{
    int yue;
    int beginday;
    int endday;
    char name[20];
    float total = 0.0;
    int flag = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("����������������");
    scanf("%s",name);
    printf("��ѧ�ڲ�ѯ\n");
    printf("����ѯ2017���һѧ�ڣ��밴�����ڸ�ʽ201709����\n");
    printf("����ѯ2017��ڶ�ѧ�ڣ��밴�����ڸ�ʽ201703����\n");
    printf("������Ҫ��ѯ��ѧ�ڣ�");
    scanf("%d",&yue);
    beginday = yue * 100;
    if((yue%10) >= 6) {endday = yue + 94;  endday *= 100;}
    else {
        endday = yue + 6;
        endday *= 100;
    }
    while( ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total += pdown->fee;
            }
        }
        ptr = ptr->next;
    }
    if(flag == 1)printf("��ѯ�������\n�ö�ʱ���ڵ������ܽ�%f\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}


void year(pcon x)
{
    int yue;
    int beginday;
    int endday;
    char name[20];
    float total = 0.0;
    int flag = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("����������������");
    scanf("%s",name);
    printf("����ݲ�ѯ\n");
    printf("�밴����ݸ�ʽ2017����\n");
    printf("������Ҫ��ѯ����ݣ�");
    scanf("%d",&yue);
    beginday = yue * 10000;
    endday = yue + 1;
    endday *= 10000;
    while( ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total += pdown->fee;
            }
        }
        ptr = ptr->next;
    }
    if(flag == 1)printf("��ѯ�������\n�ö�ʱ���ڵ������ܽ�%f\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}


void check_2(pcon x)
{
    int flag;
    int beginday;
    int endday;
    char name[20];
	float total = 0;
    pcon head,ptr,pdown;

    flag = 0;
    head = x;
    ptr = head;
    pdown = head;

    printf("����������������");
    scanf("%s",name);
    printf("����������β�ѯ\n");
    printf("�밴�����ڸ�ʽ20180217����\n");
    printf("������Ҫ��ѯ�ĳ�ʼʱ�䣺");
    scanf("%d",&beginday);
    printf("������Ҫ��ѯ�Ľ���ʱ�䣺");
    scanf("%d",&endday);

    while( ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
			total += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
				total += pdown->fee;
            }
        }
        ptr = ptr->next;
    }
    if(flag == 1)printf("��ѯ�������\n�ö�ʱ���ڵ������ܽ�%f\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}

void check_3(pcon x)
{
    int flag;
    float beginday;
    float endday;
    char name[20];
	float total = 0;
    pcon head,ptr,pdown;

    flag = 0;
    head = x;
    ptr = head;
    pdown = head;

    printf("����������������");
    scanf("%s",name);
    printf("���������β�ѯ\n");
    printf("�밴�ս���ʽ 8.50 ���룻����ֻ���ѯ8.50Ԫ��  �������С����ͬ����\n");
    printf("������Ҫ��ѯ����С���䣺");
    scanf("%f",&beginday);
    printf("������Ҫ��ѯ��������䣺");
    scanf("%f",&endday);

    while( ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }
        if( ptr->fee >= beginday && ptr->fee <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->fee >= beginday && pdown->fee <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total += pdown->fee;
            }
        }
        ptr = ptr->next;
    }
    if(flag == 1)printf("��ѯ�������\n�ö�ʱ���ڵ������ܽ�%f\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}

/*���ǲ�����ǰ������㷨*/
void sort_1(pcon x)
{
    pcon head,ptr,pdown,qdown,tdown,mdown;

    int time;
    char name[20];
    int trade_date;
    int input_date;
    float fee;
    float remain;
    int choice;
    char type[20];
    char addr[50];
    int flag = 0;

    head = x;
    ptr = x;
    pdown = x;

    printf("����������������");
    scanf("%s",name);
    printf("�����׽��������ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----����          2----����                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*��ȡѡ������˼��*/
            {
                if( strcmp(ptr->name,name)!=0 )
                {
                    ptr = ptr->next;
                    continue;
                }
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->trade_date >= qdown->trade_date)
                        {
                            qdown = qdown->down;
                            flag = 1;
                            continue;
                        }
                        else{
                            mdown = qdown;
                            flag = 1;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                ptr = ptr->next;
            }
                break;

        case 2:/*����*/

            pdown = head;/*����ָ��ͷָ��*/
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*��ȡѡ������˼��*/
            {
                if( strcmp(ptr->name,name)!=0 )
                {
                    ptr = ptr->next;
                    continue;
                }

                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->trade_date <= qdown->trade_date)
                        {
                            qdown = qdown->down;
                            flag = 1;
                            continue;
                        }
                        else{
                            mdown = qdown;
                            flag = 1;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                ptr = ptr->next;
            }
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);

    }


    if(flag == 0)
    {
        printf("δ�ҵ�������ݣ�\n");
    }
    else{
        printf("����Ϊ���������ݣ�\n");
        ptr = head;
        pdown = head;
        while(ptr != NULL)
        {
            if( strcmp(ptr->name,name)!=0 )
            {
                ptr = ptr->next;
                continue;
            }
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            pdown = ptr;
            while(pdown->down != NULL)
            {
                pdown = pdown->down;
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

            }
            ptr = ptr->next;
        }
    }
}

void sort_2(pcon x)
{
    pcon head,ptr,pdown,qdown,tdown,mdown;

    int time;
    char name[20];
    int trade_date;
    int input_date;
    float fee;
    float remain;
    int choice;
    char type[20];
    char addr[50];
    int flag = 0;

    head = x;
    ptr = x;
    pdown = x;

    printf("����������������");
    scanf("%s",name);
    printf("�����׽��������ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----����          2----����                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*��ȡѡ������˼��*/
            {
                if( strcmp(ptr->name,name)!=0 )
                {
                    ptr = ptr->next;
                    continue;
                }
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->fee >= qdown->fee)
                        {
                            qdown = qdown->down;
                            flag = 1;
                            continue;
                        }
                        else{
                            mdown = qdown;
                            flag = 1;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                ptr = ptr->next;
            }
                break;

        case 2:/*����*/

            pdown = head;/*����ָ��ͷָ��*/
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*��ȡѡ������˼��*/
            {
                if( strcmp(ptr->name,name)!=0 )
                {
                    ptr = ptr->next;
                    continue;
                }

                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->fee <= qdown->fee)
                        {
                            qdown = qdown->down;
                            flag = 1;
                            continue;
                        }
                        else{
                            mdown = qdown;
                            flag = 1;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                ptr = ptr->next;
            }
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);

    }


    if(flag == 0)
    {
        printf("δ�ҵ�������ݣ�\n");
    }
    else{
        printf("����Ϊ���������ݣ�\n");
        ptr = head;
        pdown = head;
        while(ptr != NULL)
        {
            if( strcmp(ptr->name,name)!=0 )
            {
                ptr = ptr->next;
                continue;
            }
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            pdown = ptr;
            while(pdown->down != NULL)
            {
                pdown = pdown->down;
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

            }
            ptr = ptr->next;
        }
    }
    printf("�����׽������\n");

}

void sort_3(pcon x)
{
    pcon head,ptr,pdown,qdown,tdown,mdown;

    int time;
    char name[20];
    int trade_date;
    int input_date;
    float fee;
    float remain;
    int choice;
    char type[20];
    char addr[50];
    int flag = 0;

    head = x;
    ptr = x;
    pdown = x;

    printf("����������������");
    scanf("%s",name);
    printf("�����׽��������ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----����          2----����                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*��ȡѡ������˼��*/
            {
                if( strcmp(ptr->name,name)!=0 )
                {
                    ptr = ptr->next;
                    continue;
                }
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->time >= qdown->time)
                        {
                            qdown = qdown->down;
                            flag = 1;
                            continue;
                        }
                        else{
                            mdown = qdown;
                            flag = 1;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                ptr = ptr->next;
            }
                break;

        case 2:/*����*/

            pdown = head;/*����ָ��ͷָ��*/
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*��ȡѡ������˼��*/
            {
                if( strcmp(ptr->name,name)!=0 )
                {
                    ptr = ptr->next;
                    continue;
                }

                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->time <= qdown->time)
                        {
                            qdown = qdown->down;
                            flag = 1;
                            continue;
                        }
                        else{
                            mdown = qdown;
                            flag = 1;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                ptr = ptr->next;
            }
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);

    }

    if(flag == 0)
    {
        printf("δ�ҵ�������ݣ�\n");
    }
    else{
        printf("����Ϊ���������ݣ�\n");
        ptr = head;
        pdown = head;
        while(ptr != NULL)
        {
            if( strcmp(ptr->name,name)!=0 )
            {
                ptr = ptr->next;
                continue;
            }
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            pdown = ptr;
            while(pdown->down != NULL)
            {
                pdown = pdown->down;
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

            }
            ptr = ptr->next;
        }
    }
    printf("�����״�������\n");
}

void MC_check_1(pcon x)
{
    void MC_month();
    void MC_term();
    void MC_year();
    int check_1choice;
    pcon head;
    head = x;

    printf("���̶�ʱ�β�ѯ\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("    1----���²�ѯ     2----��ѧ�ڲ�ѯ    3----��ѧ���ѯ                     \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");


    scanf("%d",&check_1choice);
    switch(check_1choice)
    {
        case 1: MC_month(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 2: MC_term(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 3: MC_year(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_month(pcon x)
{
    int yue;
    int beginday;
    int endday;
    float total = 0;
    int flag = 0;
    float total1 = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("���·ݲ�ѯ\n");
    printf("�밴�����ڸ�ʽ201802����\n");
    printf("������Ҫ��ѯ���·ݣ�");
    scanf("%d",&yue);
    beginday = yue * 100;
    endday = (yue + 1) * 100;
    while( ptr != NULL)
    {
        total1 = 0;
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total1 += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total1 += pdown->fee;
            }
        }
        total += total1;
        printf("%s �ڸö�ʱ���ڵ����ѽ��Ϊ��%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("�ö�ʱ���ڵ��ܽ�%.2f\n��ѯ�������\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}

void MC_term(pcon x)
{
    int yue;
    int beginday;
    int endday;
    float total = 0;
    float total1 = 0;
    int flag = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("��ѧ�ڲ�ѯ\n");
    printf("����ѯ2017���һѧ�ڣ��밴�����ڸ�ʽ201709����\n");
    printf("����ѯ2017��ڶ�ѧ�ڣ��밴�����ڸ�ʽ201703����\n");
    printf("������Ҫ��ѯ��ѧ�ڣ�");
    scanf("%d",&yue);
    beginday = yue * 100;
    if((yue%10) >= 6) {endday = yue + 94;  endday *= 100;}
    else {
        endday = yue + 6;
        endday *= 100;
    }
    while( ptr != NULL)
    {
        total1 = 0;
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total1 += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total1 += pdown->fee;
            }
        }
        total += total1;
        printf("%s �ڸö�ʱ���ڵ����ѽ��Ϊ��%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("�ö�ʱ���ڵ��ܽ�%.2f\n��ѯ�������\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}


void MC_year(pcon x)
{
    int yue;
    int beginday;
    int endday;
    float total = 0;
    float total1 = 0;
    int flag = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("����ݲ�ѯ\n");
    printf("�밴����ݸ�ʽ2017����\n");
    printf("������Ҫ��ѯ����ݣ�");
    scanf("%d",&yue);
    beginday = yue * 10000;
    endday = yue + 1;
    endday *= 10000;
    while( ptr != NULL)
    {
        total1 = 0;
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
            total1 += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
                total1 += pdown->fee;
            }
        }
        total += total1;
        printf("%s �ڸö�ʱ���ڵ����ѽ��Ϊ��%.2f\n",ptr->name,total1);
        printf("\n");
        ptr = ptr->next;
    }
    if(flag == 1)printf("�ö�ʱ���ڵ��ܽ�%.2f\n��ѯ�������\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}


void MC_check_2(pcon x)
{
    int flag = 0;
    int beginday;
    int endday;
	float total = 0;
	float total1 = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("����������β�ѯ\n");
    printf("�밴�����ڸ�ʽ20180217����\n");
    printf("������Ҫ��ѯ�ĳ�ʼʱ�䣺");
    scanf("%d",&beginday);
    printf("������Ҫ��ѯ�Ľ���ʱ�䣺");
    scanf("%d",&endday);

    while( ptr != NULL)
    {
        total1 = 0;
        if( ptr->trade_date >= beginday && ptr->trade_date <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
			total += ptr->fee;
			total1 += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->trade_date >= beginday && pdown->trade_date <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
				total += pdown->fee;
				total1 += pdown->fee;
            }
        }
        printf("%s�ڸö�ʱ���ڵ������ܽ��Ϊ��%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("�ö�ʱ���ڵ��ܽ�%.2f\n��ѯ�������\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
    printf("\n");
}

void MC_check_3(pcon x)
{
    int flag = 0;
    float beginday;
    float endday;
    float total1 = 0;
    float total = 0;
    pcon head,ptr,pdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("���������β�ѯ\n");
    printf("�밴�ս���ʽ 8.50 ���룻����ֻ���ѯ8.50Ԫ��  �������С����ͬ����\n");
    printf("������Ҫ��ѯ����С���䣺");
    scanf("%f",&beginday);
    printf("������Ҫ��ѯ��������䣺");
    scanf("%f",&endday);

    while( ptr != NULL)
    {
        total1 = 0;
        if( ptr->fee >= beginday && ptr->fee <= endday )
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
            flag = 1;
			total1 += ptr->fee;
        }
        pdown = ptr;
        while( pdown->down != NULL)
        {
            pdown = pdown->down;
            if( pdown->fee >= beginday && pdown->fee <= endday )
            {
                printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                flag = 1;
				total1 += pdown->fee;
            }
        }
        total += total1;
        printf("%s�ڸö�ʱ���ڵ������ܽ��Ϊ��%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("�ö�ʱ���ڵ��ܽ�%.2f\n��ѯ�������\n",total);
    else printf("�����ڸ����Ѽ�¼!\n");
}

void MC_check_4(pcon x)
{
    int flag = 0;
    pcon head,ptr,pdown;
    head = x;

    head = LoadInfo1();
    ptr = head;
    printf("��ɾ����¼��ѯ\n");

    while( ptr != NULL)
    {
        pdown = ptr;
        while( pdown != NULL)
        {
            printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
            flag = 1;
            pdown = pdown->down;
        }
        ptr = ptr->next;
    }
    if(flag == 1)printf("��ѯ�������\n");
    else printf("�����ڸ����Ѽ�¼!\n");
}

void MC_sort_1(pcon x)
{
    pcon head,ptr,pdown,qdown,tdown,mdown;

    int time;
    int trade_date;
    int input_date;
    float fee;
    float remain;
    int choice;
    char type[20];
    char addr[50];

    head = x;
    ptr = x;
    pdown = x;

    printf("�����׽��������ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----����          2----����                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*��ȡѡ������˼��*/
            {
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->trade_date >= qdown->trade_date)
                        {
                            qdown = qdown->down;
                            continue;
                        }
                        else{
                            mdown = qdown;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
                pdown = ptr;
                while(pdown->down != NULL)
                {
                    pdown = pdown->down;
                    printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

                }
                printf("\n");
                ptr = ptr->next;
            }
                break;

        case 2:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*��ȡѡ������˼��*/
            {
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->trade_date <= qdown->trade_date)
                        {
                            qdown = qdown->down;
                            continue;
                        }
                        else{
                            mdown = qdown;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
                pdown = ptr;
                while(pdown->down != NULL)
                {
                    pdown = pdown->down;
                    printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

                }
                printf("\n");
                ptr = ptr->next;
            }
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_sort_2(pcon x)
{
    pcon head,ptr,pdown,qdown,tdown,mdown;

    int time;
    int trade_date;
    int input_date;
    float fee;
    float remain;
    int choice;
    char type[20];
    char addr[50];

    head = x;
    ptr = x;
    pdown = x;

    printf("�����׽��������ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----����          2----����                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*��ȡѡ������˼��*/
            {
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->fee >= qdown->fee)
                        {
                            qdown = qdown->down;
                            continue;
                        }
                        else{
                            mdown = qdown;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
                pdown = ptr;
                while(pdown->down != NULL)
                {
                    pdown = pdown->down;
                    printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

                }
                printf("\n");
                ptr = ptr->next;
            }
                break;

        case 2:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*��ȡѡ������˼��*/
            {
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->fee <= qdown->fee)
                        {
                            qdown = qdown->down;
                            continue;
                        }
                        else{
                            mdown = qdown;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
                pdown = ptr;
                while(pdown->down != NULL)
                {
                    pdown = pdown->down;
                    printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

                }
                printf("\n");
                ptr = ptr->next;
            }
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_sort_3(pcon x)
{
    pcon head,ptr,pdown,qdown,tdown,mdown;

    int time;
    int trade_date;
    int input_date;
    float fee;
    float remain;
    int choice;
    char type[20];
    char addr[50];

    head = x;
    ptr = x;
    pdown = x;

    printf("�����׽��������ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----����          2----����                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*��ȡѡ������˼��*/
            {
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->time >= qdown->time)
                        {
                            qdown = qdown->down;
                            continue;
                        }
                        else{
                            mdown = qdown;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
                pdown = ptr;
                while(pdown->down != NULL)
                {
                    pdown = pdown->down;
                    printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

                }
                printf("\n");
                ptr = ptr->next;
            }
                break;

        case 2:/*����*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*��ȡѡ������˼��*/
            {
                pdown = ptr->down;
                if(pdown == NULL) break;
                qdown = ptr->down;
                tdown = ptr;

                while(tdown != NULL)
                {
                    mdown = tdown;
                    qdown = tdown->down;
                    if(qdown == NULL)break;
                    while( qdown !=NULL )
                    {
                        if(mdown->time <= qdown->time)
                        {
                            qdown = qdown->down;
                            continue;
                        }
                        else{
                            mdown = qdown;
                        }
                        qdown = qdown->down;
                    }

                    if(mdown == tdown)
                    {
                        tdown = tdown->down;
                        continue;
                    }
                    else{
                            time = tdown->time;
                            trade_date = tdown->trade_date;
                            input_date = tdown->input_date;
                            fee = tdown->fee;
                            remain = tdown->remain;
                            strcpy(type,tdown->type);
                            strcpy(addr,tdown->addr);

                            tdown->time = mdown->time;
                            tdown->trade_date = mdown->trade_date;
                            tdown->input_date = mdown->input_date;
                            tdown->fee = mdown->fee;
                            tdown->remain = mdown->remain;
                            strcpy(tdown->type,mdown->type);
                            strcpy(tdown->addr,mdown->addr);

                            mdown->time = time;
                            mdown->trade_date = trade_date;
                            mdown->input_date = input_date;
                            mdown->fee = fee;
                            mdown->remain = remain;
                            strcpy(mdown->type,type);
                            strcpy(mdown->addr,addr);

                            tdown = tdown->down;
                    }
                }
                printf("%d %s %d %lld %lld %f %f %s %s\n",ptr->num,ptr->name,ptr->time,ptr->trade_date,ptr->input_date,ptr->fee,ptr->remain,ptr->type,ptr->addr);
                pdown = ptr;
                while(pdown->down != NULL)
                {
                    pdown = pdown->down;
                    printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);

                }
                printf("\n");
                ptr = ptr->next;
            }
                break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_statistics(pcon x)
{
    void MC_check();

    pcon head;
    head = x;

    printf("Ready for the statistics!\n");

    MC_check(head);
}

void MC_input(pcon x)
{
    void MC_input_1();
    void MC_input_2();
    void MC_input_3();
    void MC_input_4();

    int choice;
    pcon head;
    head = x;

    printf("Ready for the input!\n");
    printf("�����������ܣ���ѡ��\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("            1----����µ����Ѽ�¼                2----����µ�������         \n");
    printf("            3----ɾ��ĳ�����Ѽ�¼                4----����ĳ���Ѽ�¼         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: MC_input_1(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 2: MC_input_2(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 3: MC_input_3(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        case 4: MC_input_4(head);
                printf("������س����������˵���");     //�˴����ⰴ��������أ�����������Ļ�����Ҫ����A���ٰ��س�ȷ��
				getchar();			//��������յ�������������ɴ�����룬���ԸĽ�scanf�����ַ�����
				getchar();
				system("cls");			//��������getchar()��system("cls")ͬ��
				break;
        default: printf("Input Error!\nPlease check again!\n");exit(0);
    }
}

void MC_update(pcon x)
{
    printf("Ready for the update!\n");
}

void MC_input_1(pcon x)
{
    long long trade_date ;
    float fee ;
    float remain;
    FILE *fp;
    int flag = 0;
    char name[20];
    char addr[50];
    char filename[] = "data.txt";

    pcon head,ptr,pdown,qdown;

    head = x;
    ptr = head;
    pdown = head;

    printf("����������������");
    scanf("%s",name);
    printf("�����밴��ʽ�����µ����Ѽ�¼\n");
    printf("�밴�����ڸ�ʽ 20180217 ���뽻������");
    scanf("%lld",&trade_date);
    printf("����������ѵĽ�");
    scanf("%f",&fee);
    printf("���������Ѻ����");
    scanf("%f",&remain);
    printf("����������ѵĵص㣺");
    scanf("%s",addr);

    while( ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }

        flag = 1;
        pdown = ptr;
        qdown = ptr;

        while( pdown->down != NULL)
        {
            pdown = pdown->down;
        }

        /*�ҵ����Ľ�㣬��pdownָ��*/
        qdown = (pcon)malloc(SIZE);
        qdown->down =NULL;
        pdown->down = qdown;

        qdown->rnum = pdown->rnum;
        qdown->num = pdown->num;
        qdown->trade_date = trade_date;
        qdown->input_date = trade_date;
        qdown->fee = fee;
        qdown->remain = remain;
        qdown->time = pdown->time + 1;
        strcpy(qdown->name,pdown->name);
        strcpy(qdown->type,pdown->type);
        strcpy(qdown->addr,addr);

        ptr = ptr->next;
    }
    if(flag == 1)
    {
        ptr = head;

        if(NULL == (fp = fopen(filename,"w")))
        {
            printf("Error!The file can't be read!\n");
            exit(0);
        }

        while( ptr != NULL )
        {
            pdown = ptr;
            while( pdown != NULL )
            {
                fprintf(fp,"%d %d %s %d %lld %lld %.2f %.2f %s %s\n",pdown->rnum,pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                pdown = pdown->down;
            }
            ptr = ptr->next;
        }
        fprintf(fp,"-1");

        fclose(fp);
        printf("���Ѽ�¼��ӳɹ�\n");
    }

    else printf("�����ڸ�������!���������Ƿ�����\n");

}

void MC_input_2(pcon x)
{
    long long trade_date ;
    int ans;
    float fee ;
    float remain;
    FILE *fp;
    int time = 0;
    int flag = 0;
    char name[20];
    char addr[50];
    char filename[] = "data.txt";

    pcon head,ptr,pdown,qdown;

    head = x;
    ptr = head;
    pdown = head;

    while( ptr != NULL)
    {
        if(ptr->next != NULL)
        {
            ptr = ptr->next;
            continue;
        }

        /*��ʱptr->next�ǿ�ָ��*/

        pdown = (pcon)malloc(SIZE);
        ptr->next = pdown;
        pdown->next = NULL;
        pdown->down = NULL;
        qdown = ptr;

        printf("�������������ߵ�������");
        scanf("%s",name);
        printf("�����밴��ʽ�����µ����Ѽ�¼\n");
        printf("�밴�����ڸ�ʽ 20180217 ���뽻������");
        scanf("%lld",&trade_date);
        printf("����������ѵĽ�");
        scanf("%f",&fee);
        printf("���������Ѻ����");
        scanf("%f",&remain);
        printf("����������ѵĵص㣺");
        scanf("%s",addr);
        pdown->rnum = qdown->rnum + 1;
        pdown->num = qdown->num + 1;
        pdown->fee = fee;
        pdown->trade_date = trade_date;
        pdown->input_date = trade_date;
        pdown->remain = remain;
        strcpy(pdown->addr,addr);
        strcpy(pdown->type,qdown->type);
        strcpy(pdown->name,name);
        time = 1;
        pdown->time = 1;
        flag = 1;

        printf("��ʱ����������û������Ѽ�¼��ÿ��������1����������0\n");
        while( 1 )
        {
            printf("�Ƿ������µ����Ѽ�¼��������1��������0\n");
            scanf("%d",&ans);
            if(ans == 0)
            {
                break;
            }
            else if(ans == 1)
            {
                time++;
                printf("�밴�����ڸ�ʽ 20180217 ���뽻������");
                scanf("%lld",&trade_date);
                printf("����������ѵĽ�");
                scanf("%f",&fee);
                printf("���������Ѻ����");
                scanf("%f",&remain);
                printf("����������ѵĵص㣺");
                scanf("%s",addr);

                pdown->down = (pcon)malloc(SIZE);
                qdown = pdown;
                pdown = pdown->down;
                pdown->down = NULL;

                pdown->rnum = qdown->rnum;
                pdown->num = qdown->num;
                pdown->fee = fee;
                pdown->trade_date = trade_date;
                pdown->input_date = trade_date;
                pdown->remain = remain;
                strcpy(pdown->addr,addr);
                strcpy(pdown->type,qdown->type);
                strcpy(pdown->name,name);
                pdown->time = time;
            }
        }
        break;
    }
    if(flag == 1)
    {
        ptr = head;

        if(NULL == (fp = fopen(filename,"w")))
        {
            printf("Error!The file can't be read!\n");
            exit(0);
        }

        while( ptr != NULL )
        {
            pdown = ptr;
            while( pdown != NULL )
            {
                fprintf(fp,"%d %d %s %d %lld %lld %.2f %.2f %s %s\n",pdown->rnum,pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                pdown = pdown->down;
            }
            ptr = ptr->next;
        }
        fprintf(fp,"-1");

        fclose(fp);
        printf("�µ���������ӳɹ�\n");
    }

    else printf("��������Ӵ���!���������Ƿ�����\n");
}

void MC_input_3(pcon x)
{
    char name[20];
    int ans;
    int rnum;
    int num;
    char type[50];
    int time;
    long long trade_date ;
    long long input_date ;
    float fee ;
    float remain;
    char addr[50];
    FILE *fp;
    FILE *fq;
    int flag = 0;
    char filename[] = "data.txt";
    char filename1[] = "fee_unde1.txt";
    pcon head,ptr,pdown,qdown;

    head = x;
    ptr = x;
    pdown = x;

    printf("��������Ҫɾ��ĳ�������߼�¼��������");
    scanf("%s",name);
    printf("��������Ҫɾ�����Ѽ�¼�Ĵ������ɴӲ�ѯ�л�ã�\n");
    scanf("%d",&time);
    while(ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }

        pdown = ptr;
        qdown = ptr;
        while(pdown != NULL)
        {
            if(time != (pdown->time + 1))
            {
                pdown = pdown->down;
                continue;
            }
            qdown = pdown->down;
            flag = 1;
            printf("%d %s %d %lld %lld %f %f %s %s\n",qdown->num,qdown->name,qdown->time,qdown->trade_date,qdown->input_date,qdown->fee,qdown->remain,qdown->type,qdown->addr);
            num = qdown->num;
            rnum = qdown->rnum;
            time = qdown->time;
            trade_date = qdown->trade_date;
            input_date = qdown->input_date;
            fee = qdown->fee;
            remain = qdown->remain;
            strcpy(type,qdown->type);
            strcpy(addr,qdown->addr);

            printf("����Ϊ�ü�¼����������ɾ���ü�¼����ȷ�ϰ�1������0\n");
            scanf("%d",&ans);
            if(ans == 0)break;
            else if(ans == 1)
            {
                pdown->down = qdown->down;
                flag = 1;
            }
            break;
        }
        ptr = ptr->next;
        break;
    }
    if(flag == 1)
    {
        ptr = head;

        if(NULL == (fp = fopen(filename,"w")))
        {
            printf("Error!The file can't be read!\n");
            exit(0);
        }

        while( ptr != NULL )
        {
            pdown = ptr;
            while( pdown != NULL )
            {
                fprintf(fp,"%d %d %s %d %lld %lld %.2f %.2f %s %s\n",pdown->rnum,pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                pdown = pdown->down;
            }
            ptr = ptr->next;
        }
        fprintf(fp,"-1");

        fclose(fp);

        if(NULL == (fq = fopen(filename1,"w")))
        {
            printf("Error!The file can't be read!\n");
            exit(0);
        }
        else{
            fprintf(fq,"%d %d %s %d %lld %lld %.2f %.2f %s %s\n",rnum,num,name,time,trade_date,input_date,fee,remain,type,addr);
        }
        fprintf(fq,"-1");
        fclose(fq);
        printf("���Ѽ�¼�޸ĳɹ�\n");
    }
    else printf("���Ѽ�¼�޸Ĵ���!���������Ƿ�����\n");
}

void MC_input_4(pcon x)
{
    char name[20];
    int time;
    int trade_date ;
    float fee ;
    float remain;
    char addr[50];
    FILE *fp;
    int flag = 0;
    char filename[] = "data.txt";
    pcon head,ptr,pdown;

    head = x;
    ptr = x;
    pdown = x;

    printf("��������Ҫ�޸������߼�¼��������");
    scanf("%s",name);
    printf("��������Ҫ�޸����Ѽ�¼�Ĵ������ɴӲ�ѯ�л�ã�\n");
    scanf("%d",&time);
    while(ptr != NULL)
    {
        if( strcmp(ptr->name,name)!=0 )
        {
            ptr = ptr->next;
            continue;
        }

        pdown = ptr;
        while(pdown != NULL)
        {
            if(time != pdown->time)
            {
                pdown = pdown->down;
                continue;
            }
            flag = 1;
            printf("%d %s %d %lld %lld %f %f %s %s\n",pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
            printf("����Ϊ�ü�¼�����������޸ĸü�¼���밴�����ڸ�ʽ 20180217 ���뽻�����ڣ�");
            scanf("%lld",&trade_date);
            printf("����������ѵĽ�");
            scanf("%f",&fee);
            printf("���������Ѻ����");
            scanf("%f",&remain);
            printf("����������ѵĵص㣺");
            scanf("%s",addr);

            pdown->fee = fee;
            pdown->trade_date = trade_date;
            pdown->input_date = trade_date;
            pdown->remain = remain;
            strcpy(pdown->addr,addr);
            break;
        }
        ptr = ptr->next;
    }

    if(flag == 1)
    {
        ptr = head;

        if(NULL == (fp = fopen(filename,"w")))
        {
            printf("Error!The file can't be read!\n");
            exit(0);
        }

        while( ptr != NULL )
        {
            pdown = ptr;
            while( pdown != NULL )
            {
                fprintf(fp,"%d %d %s %d %lld %lld %.2f %.2f %s %s\n",pdown->rnum,pdown->num,pdown->name,pdown->time,pdown->trade_date,pdown->input_date,pdown->fee,pdown->remain,pdown->type,pdown->addr);
                pdown = pdown->down;
            }
            ptr = ptr->next;
        }
        fprintf(fp,"-1");

        fclose(fp);
        printf("���Ѽ�¼�޸ĳɹ�\n");
    }

    else printf("���Ѽ�¼�޸Ĵ���!���������Ƿ�����\n");
}

void byebye(pcon x)
{
    pcon ptr,pdown,qdown;
    ptr = x;
    pdown = x;

    while(ptr != NULL)
    {
        pdown = ptr;
        ptr = ptr->next;
        while( pdown != NULL )
        {
            qdown = pdown;
            pdown = pdown->down;
            free(qdown);
        }
    }
	printf("���˳�ϵͳ������ռ����ݣ�\n")
}
