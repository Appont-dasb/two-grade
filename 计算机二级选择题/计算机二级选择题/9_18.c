#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{

//	return 0 ;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	
	fp=fopen("file","w");
	return 0 ;
}





//第36 字符串的赋值
//int main()
//{
//	struct 
//	{
//		char mark[12];
//		int num1;
//		double num2;
//	}t1,t2;
//
//	//t1=t2;
//
//	strcpy(t2.mark, t1.mark);
//	//t2.mark=t1.mark;  // 错误 //mark是字符串类型数据，字符串的赋值要调用string.h头文件内的库函数strcpy
//
//	//t2.num2=t1.num2;
//	//t2.num1=t1.num1;
//	return 0 ;
//}




//第35  输出143
//#define S(x) 4*(x)*x+1
//int main()
//{
//	int k=5,j=2;
//    printf("%d\n",S(k+j)); // S(5+2) = 4*(5+2)*5+2+1 = 143
//	return 0 ;
//}



//第33
//int fun(int x,int y) //int fun 中int 代表了返回值的类型是整型
//{
//    if(x!=y) return((x+y)/2); //这个地方是/
//    else return(x);
//}
//int main()
//{
//    int a=4,b=5,c=6;
//    printf("%d\n",fun(2*a,fun(b,c)));
//	return 0 ;
//}



//第31
//int main()
//{
//	char a[30],b[30];
//    scanf("%s",a);
//    gets(b);
//    printf("%s\n %s\n",a,b);
//	return 0 ;
//}


//第28 变量类型转换和赋值
//int main()
//{
//	char s[3][10],(*k)[3],*p;
//	//p = s; //p的类型是char*，s的类型是char(*)[10]，两者类型不同
//	//p = k; //p的类型是char*，k的类型是char(*)[3],两者类型不同
//	//k = s; //k的类型是char(*)[3]，s的类型是char(*)[10]，两者类型不同
//	p = s[0] ; //s[0]的类型是char* ！！！
//	return 0 ;
//}


////第27 输出0
//int main()
//{
//	int x=1,y=0;
//    if(!x) y++;
//    else if(x==0)
//		//{
//	if (x) y+=2;
//    else y+=3;//if和else连体！！
//	    //}
//    printf("%d\n",y);//else if 下面的代码 均是其忽略的{}中的内容
//	return 0 ;
//}


//第24  scanf后面一定要接 地址！！！
//int main()
//{
//	double x[10],*p= x;
//	scanf("%lf",p+6);
//
////	scanf("%f",&x[6]); //虽然&x[6]确实为地址，但double类型对应%lf
////  scanf("%lf",*(x+6)); //scanf后面接地址
////	scanf("%lf",p[6]); //scanf后面接地址
//	return 0 ;
//}


//第22 无限循环
//int main()
//{
//	int i;
//	int k ;
//	for(i=0,k=1;k=1;k++) //无论这儿是k++ 还是++k，都将是无限循环
//	                     //因为k=1 先执行，k++执行后，k又将重新被赋值为1 ！！！
//	printf("*＊*＊*\n");
//	return 0 ;
//}


//第21 结果输出3
//int main()
//{
//	char s[]="012xy\08s34f4w2";
//    int i,n=0;
//    for(i=0;s[i]!=0;i++) //当进入012xy时，循环不会停止，直到进入'\0'(acsii值为0),不满足循环条件，停止循环！
//    if(s[i]>= '0'&&s[i]<= '9')n++; //循环3次
//    printf("%d\n",n);
//	return 0 ;
//}


//第18
//int main()
//{
//	int x = 011; //在数字前加 0 表示八进制数， 0x表示十六进制数
//
//    printf("%d\n",x);
//	return 0 ;
//}

//“r”：以只读的形式打开文本文件(不存在则出错)
//“w”：以只写的形式打开文本文件(若不存在则新建，反之，则从文件起始位置写，覆盖原内容)
//“a”：以追加的形式打开文本文件(若不存在，则新建；反之，在原文件后追加)
//“r+”：以读写的形式打开文本文件(读时，从头开始；写时，新数据只覆盖所占的空间)
//“wb”：以只写的形式打开二进制文件
//“rb”：以只读的形式打开二进制文件
//“ab”：以追加的形式打开一个二进制文件
//“rb+”：以读写的形式打开二进制文件。
//“w+”：首先建立一个新文件，进行写操作，然后从头开始读(若文件存在，原内容将全部消失)
//“a+”：功能与”a”相同。只是在文件尾部追加数据后，可以从头开始读
//“wb+”：功能与”w+”相同。只是在读写时，可以由位置函数设置读和写的起始位置
//“ab+”：功能与”a+”相同。只是在文件尾部追加数据之后，可以由位置函数设置开始读的起始位置


//数据定义语言(DDL)及其翻译程序：主要负责数据的 模式定义 与 数据的物理存取构建 。
//
//数据操纵语言(DML)及其编译(或解释)程序：主要负责数据的基本操作，包括 查询 及 增加 、删除、修改  等操作。
//
//数据控制语言：主要负责  解释每个控制命令的含义   ，决定如何去执行控制命令。


//C语言程序仅可以 编译执行

//解释执行：先翻译成中间代码，由解释器运行 
//例如： Python , JavaScript   ,Perl,Shell


// if语句的基本形式是：if（体现式）语句 ,体现式可以是任意合法的数值


//
