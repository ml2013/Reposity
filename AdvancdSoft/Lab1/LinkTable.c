
/********************************************************************/
/* Copyright (C) SSE-USTC, 2013-2014                                */
/*                                                                  */
/*  FILE NAME             :  students.c                             */
/*  PRINCIPAL AUTHOR      :  MaLong                                 */
/*  SUBSYSTEM NAME        :  students                               */
/*  MODULE NAME           :  students                               */
/*  LANGUAGE              :  C                                      */
/*  TARGET ENVIRONMENT    :  ANY                                    */
/*  DATE OF FIRST RELEASE :  2012/12/30                             */
/*  DESCRIPTION           :  students info manager system           */
/********************************************************************/

/*
 * Revision log:
 *
 * Created by MaLong,2013/09/09
 * Debug and Test by MaLong,2013/09/13
 *
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student
{
	int id;
	char name[20];
	struct student *next;
}tstudent;

int main()
{
	tstudent *head=NULL;
	int i=0;
	/* insert 1000 students */
	for( i=0 ; i<1000 ; i++ )
	{
		tstudent *node=(tstudent *)malloc(sizeof(tstudent));
		node->id=i;
		strcpy(node->name,"malong");
		node->next=head;
		head=node;
	}
	 /* select 1000 times by student id */
	for(i = 0 ; i<1000 ; i++ )
	{
		/* random() return long int value,0 to (2^31 - 1) */
		int key=rand() %1000;
		tstudent *pstudent=head;
		while(pstudent->id != key)
		{
			pstudent=pstudent->next;
		}
		printf("\nid = %d , name = %s ",pstudent->id,pstudent->name );
	}

}
