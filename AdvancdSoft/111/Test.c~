#include "LinkTable.h"
#include <stdlib.h>
#include <stdio.h>

int condition(void *data)
{
	return 1;
}

int display(void *data)
{
	char *node=(char *)data;
	puts(node);
	return 1;
}

void* handle(void *data)
{
	static char name[20]="aaaaaaaaaaaaa";
	return (void *)name;
}

int main()
{	
	LinkTable * testLinkTable;
	testLinkTable = CreatLinkTable();
	if(testLinkTable != NULL)
 	{
		printf("CreatLinkTable() SUCCESS!\n");
	}


//	int InsertNode(LinkTable *pLink,void *data,int size);
	char testdata[20]="jlaksdjfl";
	if(InsertNode(testLinkTable, (void *)testdata, 20) == 1)
 	{
		printf("InsertNode(LinkTable *pLink,void *data,int size) SUCCESS!\n");
	}


//      void* SearchNode(LinkTable *pLink,int condition(void *data));
	void *data=SearchNode(testLinkTable,condition);
	if( (int *)data != NULL)
	{
		printf("SearchNode success!\n");
	}

////////////////////////////////////////////////////////////////////////////////////////

//      int DeleteNode(LinkTable *pLink,int condition(void *data));
        
	if(DeleteNode (testLinkTable,condition))
	{
		printf("Delete success!\n");
	}

	char test[20]="ddddddddddd";
	if(InsertNode(testLinkTable, (void *)test, 20) == 1)
 	{
		printf("InsertNode(LinkTable *pLink,void *data,int size) SUCCESS!\n");
	}



	
//      int UpdataNode(LinkTable *pLink,int condition(void *data),void *handle(),int size);


	if(UpdataNode ( testLinkTable,condition,handle,30))
	{
		printf("UpdataNode success \n");
	}

//     int Display(LinkTable *pLink,int display(void *data));

	Display(testLinkTable,display);



}


