
//int main() {
//
//	int a = 10; //a在内存中要分配空间的 - 4个字节
//
//	printf("%p\n", &a);//%p 专门用来打印地址
//
//	int* pa = &a; //pa是用来存放地址的，在C语言中pa叫指针变量
//	//* 说明pa是指针变量
//	//int 说明pa指向的对象是int类型的
//	char ch = 'n';
//	char* pc = &ch;
//
//	return 0;
//}

//指针就是地址
//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	*pa = 20; //*解引用操作符 ， *pa就是通过pa里面的地址找到a；
//
//	printf("%d\n", a);
//	return 0;
//}

int main() {
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(long*));
	printf("%d\n", sizeof(long long *));
	printf("%d\n", sizeof(float*));
	printf("%d\n", sizeof(double*));
	return 0;
}
