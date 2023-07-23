#include"creat.h"
#include"file.h"
int main()
{
	IPLIST list = creatlist();
	//开始要把文件内容初始化到一个链表里面去
	allfileinfo(list, "write.txt");
	while (1)
	{
		meau();
		char key = getchar();
		switch (key - 48)
		{
		case Exit:
			exit(0);
			break;
		case Increase:
			tailinsertnode(list);
			filea(list, "write.txt");
			break;
		case Delete:
			deletenode(list);
			filewrite(list, "write.txt");
			break;
		case Alter:
			break;
		case Search:
			insearchnode(list);
			break;
		case Visit:
			allprintf(list);
			system("pause");
			break;
		case FileRead:
			
			fileread(list, "write.txt");
			
				system("pause");
				break;
			
		}
		system("cls");
	}

}