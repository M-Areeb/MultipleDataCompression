#include"header.h"
#include"declaration.h"


int  main()
{
	int choice ;
	printf("Get the choice from main menu\n");
	choice = mainmenu(); // this will call main menu and takes  the choicefrom it 
	switch (choice)
	{
		case 1: 
			printf("Choice is %d\n",choice);
			compression();
			break ;
		case 2:
			printf("Choice is %d\n", choice);
			//decompression();
			break;
		case 0:
			exit(EXIT_SUCCESS);
	}
	return 0 ;
}



	




