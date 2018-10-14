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
    /*函数声明*/
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
            scanf("%d",&choice);               /*界面功能选择*/
            switch(choice)
            {
                case 1: check(head);            break;   /*功能一:查询*/
                case 2: sort(head);             break;   /*功能二:排序*/
                case 3: statistics(head);       break;   /*功能三:统计*/
                case 4: input(head);            break;   /*功能四:录入*/
                case 5: update(head);           break;   /*功能五:更新*/
                case 7: flag = 1;               break;
                default: printf("Input Error!\nPlease check again!\n");exit(0);
            }
            break;
            case 2:
            scanf("%d",&choice);               /*界面功能选择*/
            switch(choice)
            {
                case 1: MC_check(head);        break;   /*功能一:查询*/
                case 2: MC_sort(head);             break;   /*功能二:排序*/
                case 3: MC_statistics(head);       break;   /*功能三:统计*/
                case 4: MC_input(head);            break;   /*功能四:录入*/
                case 5: MC_update(head);           break;   /*功能五:更新*/
                case 6: print(head);        break;   /*功能六：输出全部*/
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
    printf(" 1---查询  2---排序   3---统计  4---录入  5----更新  6----显示全部  7----退出\n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
}

void shenfen()
{
    printf("-----------------------------------------------------------------------------\n");
    printf("-------------------------------请输入您的身份--------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                1----消费者                  2----管理者                     \n");
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
    printf("      1----按固定时段查询       2----按日期区间段查询                        \n");
    printf("      3----按交易金额查询                                                    \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&check_choice);
    switch(check_choice)
    {
        case 1: check_1(head);
				break;
        case 2: check_2(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
                break;
        case 3: check_3(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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
    printf("      1----按交易日期排序       2----按交易金额排序                          \n");
    printf("      3----按交易次数排序                                                    \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&sort_choice);

    switch(sort_choice)
    {
        case 1: sort_1(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 2: sort_2(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 3: sort_3(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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
    printf("      1----按固定时段查询       2----按日期区间段查询                        \n");
    printf("      3----按交易金额查询       4----已删除记录查询                          \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&check_choice);

    switch(check_choice)
    {
        case 1: MC_check_1(head);
				break;
        case 2: MC_check_2(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 3: MC_check_3(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 4: MC_check_4(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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
    printf("      1----按交易日期排序       2----按交易金额排序                          \n");
    printf("      3----按交易次数排序                                                    \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&sort_choice);

    switch(sort_choice)
    {
        case 1: MC_sort_1(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 2: MC_sort_2(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 3: MC_sort_3(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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

	int you = 1;		/*表示第几个消费者*/
	int time;
	long long trade_date;
	long long input_date;
	float fee;
	float remain;
	char type[20];
	char addr[50];

	/*创建带表头节点的空链表head，用来存放载入信息*/
	head = (pcon)malloc(SIZE);
	ptr = head;
	pdown = head;
	ptr->next = NULL;

	/*加载data文件，存放head链表*/
	if( NULL == (fp = fopen(filename,"r")))/*判断文件是否存在及可读*/
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
                pdown = pdown->down;		/*链表向下*/
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
        if(break_flag == -1)        /*文件以-1作为结束符*/
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
	int you = 1;		/*表示第几个消费者*/
	FILE *fp;
	pcon head,ptr,pdown;


	/*创建带表头节点的空链表head，用来存放载入信息*/
	head = (pcon)malloc(SIZE);
	ptr = head;
	pdown = head;
	ptr->next = NULL;

	/*加载data文件，存放head链表*/
	if( NULL == (fp = fopen(filename,"r")))/*判断文件是否存在及可读*/
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
                pdown = pdown->down;		/*链表向下*/
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
        if(break_flag == -1)        /*文件以-1作为结束符*/
        {
            break;
        }
    }

    you--;
	fclose(fp);

	return head->next;
}



/*此功能遍历全部记录*/
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
    printf("对不起，您没有录入的权利!\n目前只有管理者有权利\n");
    system("cls");
}

void update()
{
    printf("目前是最新版\n");
}

void check_1(pcon x)
{
    void month();
    void term();
    void year();
    int check_1choice;
    pcon head;
    head = x;

    printf("按固定时段查询\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("    1----按月查询     2----按学期查询    3----按学年查询                     \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");

    scanf("%d",&check_1choice);
    switch(check_1choice)
    {
        case 1: month(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
                break;
        case 2: term(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
                break;
        case 3: year(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按月份查询\n");
    printf("请按照日期格式201802输入\n");
    printf("请输入要查询的月份：");
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
    if(flag == 1)printf("查询结果如上\n该段时间内的消费总金额：%f\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按学期查询\n");
    printf("若查询2017年第一学期，请按照日期格式201709输入\n");
    printf("若查询2017年第二学期，请按照日期格式201703输入\n");
    printf("请输入要查询的学期：");
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
    if(flag == 1)printf("查询结果如上\n该段时间内的消费总金额：%f\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按年份查询\n");
    printf("请按照年份格式2017输入\n");
    printf("请输入要查询的年份：");
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
    if(flag == 1)printf("查询结果如上\n该段时间内的消费总金额：%f\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按日期区间段查询\n");
    printf("请按照日期格式20180217输入\n");
    printf("请输入要查询的初始时间：");
    scanf("%d",&beginday);
    printf("请输入要查询的结束时间：");
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
    if(flag == 1)printf("查询结果如上\n该段时间内的消费总金额：%f\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按金额区间段查询\n");
    printf("请按照金额格式 8.50 输入；若您只需查询8.50元的  则最大最小填相同即可\n");
    printf("请输入要查询的最小区间：");
    scanf("%f",&beginday);
    printf("请输入要查询的最大区间：");
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
    if(flag == 1)printf("查询结果如上\n该段时间内的消费总金额：%f\n",total);
    else printf("不存在该消费记录!\n");
}

/*考虑不用提前处理的算法*/
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按交易金额排序，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----降序          2----升序                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*降序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*采取选择排序思想*/
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

        case 2:/*升序*/

            pdown = head;/*重新指回头指针*/
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*采取选择排序思想*/
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
        printf("未找到相关内容！\n");
    }
    else{
        printf("以下为排序后的内容：\n");
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按交易金额排序，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----降序          2----升序                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*降序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*采取选择排序思想*/
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

        case 2:/*升序*/

            pdown = head;/*重新指回头指针*/
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*采取选择排序思想*/
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
        printf("未找到相关内容！\n");
    }
    else{
        printf("以下为排序后的内容：\n");
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
    printf("按交易金额排序\n");

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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("按交易金额排序，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----降序          2----升序                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*降序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*采取选择排序思想*/
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

        case 2:/*升序*/

            pdown = head;/*重新指回头指针*/
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr!=NULL )      /*采取选择排序思想*/
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
        printf("未找到相关内容！\n");
    }
    else{
        printf("以下为排序后的内容：\n");
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
    printf("按交易次数排序\n");
}

void MC_check_1(pcon x)
{
    void MC_month();
    void MC_term();
    void MC_year();
    int check_1choice;
    pcon head;
    head = x;

    printf("按固定时段查询\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("    1----按月查询     2----按学期查询    3----按学年查询                     \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");


    scanf("%d",&check_1choice);
    switch(check_1choice)
    {
        case 1: MC_month(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 2: MC_term(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 3: MC_year(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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

    printf("按月份查询\n");
    printf("请按照日期格式201802输入\n");
    printf("请输入要查询的月份：");
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
        printf("%s 在该段时间内的消费金额为：%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("该段时间内的总金额：%.2f\n查询结果如上\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("按学期查询\n");
    printf("若查询2017年第一学期，请按照日期格式201709输入\n");
    printf("若查询2017年第二学期，请按照日期格式201703输入\n");
    printf("请输入要查询的学期：");
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
        printf("%s 在该段时间内的消费金额为：%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("该段时间内的总金额：%.2f\n查询结果如上\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("按年份查询\n");
    printf("请按照年份格式2017输入\n");
    printf("请输入要查询的年份：");
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
        printf("%s 在该段时间内的消费金额为：%.2f\n",ptr->name,total1);
        printf("\n");
        ptr = ptr->next;
    }
    if(flag == 1)printf("该段时间内的总金额：%.2f\n查询结果如上\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("按日期区间段查询\n");
    printf("请按照日期格式20180217输入\n");
    printf("请输入要查询的初始时间：");
    scanf("%d",&beginday);
    printf("请输入要查询的结束时间：");
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
        printf("%s在该段时间内的消费总金额为：%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("该段时间内的总金额：%.2f\n查询结果如上\n",total);
    else printf("不存在该消费记录!\n");
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

    printf("按金额区间段查询\n");
    printf("请按照金额格式 8.50 输入；若您只需查询8.50元的  则最大最小填相同即可\n");
    printf("请输入要查询的最小区间：");
    scanf("%f",&beginday);
    printf("请输入要查询的最大区间：");
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
        printf("%s在该段时间内的消费总金额为：%.2f\n\n",ptr->name,total1);
        ptr = ptr->next;
    }
    if(flag == 1)printf("该段时间内的总金额：%.2f\n查询结果如上\n",total);
    else printf("不存在该消费记录!\n");
}

void MC_check_4(pcon x)
{
    int flag = 0;
    pcon head,ptr,pdown;
    head = x;

    head = LoadInfo1();
    ptr = head;
    printf("已删除记录查询\n");

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
    if(flag == 1)printf("查询结果如上\n");
    else printf("不存在该消费记录!\n");
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

    printf("按交易金额排序，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----降序          2----升序                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*降序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*采取选择排序思想*/
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

        case 2:/*升序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*采取选择排序思想*/
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

    printf("按交易金额排序，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----降序          2----升序                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*降序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*采取选择排序思想*/
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

        case 2:/*升序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*采取选择排序思想*/
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

    printf("按交易金额排序，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("                        1----降序          2----升序                         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:/*降序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*采取选择排序思想*/
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

        case 2:/*升序*/

            pdown = head;
            ptr = head;
            qdown = head;
            tdown = head;

            while( ptr != NULL )      /*采取选择排序思想*/
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
    printf("以下三个功能，请选择\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("*****************************************************************************\n");
    printf("            1----添加新的消费记录                2----添加新的消费者         \n");
    printf("            3----删除某个消费记录                4----更改某消费记录         \n");
    printf("*****************************************************************************\n");
    printf("-----------------------------------------------------------------------------\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1: MC_input_1(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 2: MC_input_2(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 3: MC_input_3(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
				break;
        case 4: MC_input_4(head);
                printf("请输入回车键返回主菜单！");     //此处本意按任意键返回，但是任意键的话，需要按键A，再按回车确定
				getchar();			//则会连续收到两个按键，造成错误读入，可以改进scanf接收字符串，
				getchar();
				system("cls");			//以下所有getchar()、system("cls")同理
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

    printf("请输入您的姓名：");
    scanf("%s",name);
    printf("接下请按格式输入新的消费记录\n");
    printf("请按照日期格式 20180217 输入交易日期");
    scanf("%lld",&trade_date);
    printf("请输入该消费的金额：");
    scanf("%f",&fee);
    printf("请输入消费后的余额：");
    scanf("%f",&remain);
    printf("请输入该消费的地点：");
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

        /*找到最后的结点，让pdown指着*/
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
        printf("消费记录添加成功\n");
    }

    else printf("不存在该消费者!请检查输入是否有误\n");

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

        /*此时ptr->next是空指针*/

        pdown = (pcon)malloc(SIZE);
        ptr->next = pdown;
        pdown->next = NULL;
        pdown->down = NULL;
        qdown = ptr;

        printf("请输入新消费者的姓名：");
        scanf("%s",name);
        printf("接下请按格式输入新的消费记录\n");
        printf("请按照日期格式 20180217 输入交易日期");
        scanf("%lld",&trade_date);
        printf("请输入该消费的金额：");
        scanf("%f",&fee);
        printf("请输入消费后的余额：");
        scanf("%f",&remain);
        printf("请输入该消费的地点：");
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

        printf("此时连续输入该用户的消费记录，每次先输入1，结束输入0\n");
        while( 1 )
        {
            printf("是否输入新的消费记录，是输入1，否输入0\n");
            scanf("%d",&ans);
            if(ans == 0)
            {
                break;
            }
            else if(ans == 1)
            {
                time++;
                printf("请按照日期格式 20180217 输入交易日期");
                scanf("%lld",&trade_date);
                printf("请输入该消费的金额：");
                scanf("%f",&fee);
                printf("请输入消费后的余额：");
                scanf("%f",&remain);
                printf("请输入该消费的地点：");
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
        printf("新的消费者添加成功\n");
    }

    else printf("消费者添加错误!请检查输入是否有误\n");
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

    printf("请输入需要删除某条消费者记录的姓名：");
    scanf("%s",name);
    printf("请输入需要删除消费记录的次数（可从查询中获得）\n");
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

            printf("上面为该记录，接下来将删除该记录，请确认按1，否则按0\n");
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
        printf("消费记录修改成功\n");
    }
    else printf("消费记录修改错误!请检查输入是否有误\n");
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

    printf("请输入需要修改消费者记录的姓名：");
    scanf("%s",name);
    printf("请输入需要修改消费记录的次数（可从查询中获得）\n");
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
            printf("上面为该记录，接下来将修改该记录，请按照日期格式 20180217 输入交易日期：");
            scanf("%lld",&trade_date);
            printf("请输入该消费的金额：");
            scanf("%f",&fee);
            printf("请输入消费后的余额：");
            scanf("%f",&remain);
            printf("请输入该消费的地点：");
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
        printf("消费记录修改成功\n");
    }

    else printf("消费记录修改错误!请检查输入是否有误\n");
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
	printf("已退出系统！清楚空间内容！\n")
}
