
/********************************************************************/
/* Copyright (C) SSE-USTC, 2013-2014                                */
/*                                                                  */
/*  FILE NAME             :  testlinktabe.c                         */
/*  PRINCIPAL AUTHOR      :  MaLong                               */
/*  SUBSYSTEM NAME        :  LinkTable                              */
/*  MODULE NAME           :  LinkTable                              */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  ANY                                    */
/*  DATE OF FIRST RELEASE :  2013/09/20                             */
/*  DESCRIPTION           :  test of Link Table                     */
/********************************************************************/

/*
 * Revision log:
 *
 * Created by MaLong,2013/09/20
 * Verified callback and head/next for search by MaLong,2013/09/21
 *
 */
#include "LinkTable.h"
#include <string.h>
#include <stdlib.h>
#define SUCCESS 1
#define FAILURE 0

typedef struct student 
{
	int id;
	char name[20];
}tstudent;

/* key : user for condition for the search */
int key;

/* callback : display the node element */
int display(void *data)
{
	tstudent *node=(tstudent *)data;
	if(data == NULL)
		return FAILURE;
	else
	{
		printf("\nid = %d, name = %s",node->id,node->name);
		return SUCCESS;
	}
}

/* condition : judge the key for struct id */ 

int condition(void *data)
{
	tstudent *node=(tstudent *)(data);
	if(node->id == key)
		return SUCCESS;
	else
		return FAILURE;
}

/* handle : judge the insrt new node element */
void* handle()
{
	tstudent *node=(tstudent *)malloc(sizeof(tstudent));
	printf("please input the new id:");
	scanf("%d",&node->id);
	printf("please input the new name:");
	scanf("%s",node->name);
	return node;
}


void print()
{
	printf("################################################################# \n");
	printf("                    WELCOME TO USER  THIS SYSTEM                  \n");
	printf("         FUNCTION A:Insert Node for the LINK,  INPUT     I        \n");
	printf("         FUNCTION B:Search Node for the LINK,  INPUT     S        \n");
	printf("         FUNCTION C:Delete Node for the LINK,  INPUT     D        \n");
	printf("         FUNCTION D:Change Node for the LINK,  INPUT     C        \n");
	printf("         FUNCTION E:Display Node for the LINK, INPUT     P        \n");
	printf("         FUNCTION E:Quit thie system ,         INPUT     Q        \n");
	printf("################################################################# \n");
}

int main()
{
	LinkTable *Link=CreatLinkTable();
	tstudent student;
	char chose;
	int i=0;

	for(i=0;i<1000;i++)
	{
		student.id=i;
		strcpy(student.name,"aaadfadfad");
		InsertNode(Link,&student,sizeof(tstudent));
	}
	print();
	
	while(1)
	{
		printf("\nplease input you want  to user function !");
		scanf(" %c",&chose);
		if(islower(chose))
		{
			chose=chose-('a'-'A');
		}
		switch(chose)
		{
		case 'I' :	
			{
				printf("please input id:  ");
				scanf("%d",&student.id);
				printf("please input name:   ");
				scanf("%s",&student.name);
				InsertNode(Link,&student,sizeof(tstudent));
			}
				break;
		case 'D':
			{
				printf("\nplease input you want to Delete id:");
				scanf("%d",&key);
				if(DeleteNode(Link,condition))
				{
					printf(" \t  SUCCESS ");
				}
				else
					printf("\t   ERROR");
			}
				break;
		case 'S':
			{
				printf("\nplease input you want to search id:");
				scanf("%d",&key);
				if(display(SearchNode(Link,condition)))
				{
					printf(" \t  SUCCESS ");
				}
				else
					printf("\t   ERROR");
			}
			break;
		case 'C':
			{
				printf("\nplease input you want to Change id:");
				scanf("%d",&key);
				printf("%d",sizeof(tstudent));
				UpdataNode(Link,condition,handle,sizeof(tstudent));
			}
			break;
		case 'P':
			{
				if( Display(Link,display) )
				{
					printf("\nSUCCESS");
				}
				else
				{
					printf("ERROR!");
				}
			}
				break;
		case 'Q' :return 1 ;break;

		}
		
	}
}



