
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


/* 
 *CreatLinkTable : initiation the LinkTable 
 *  return type is  LinkTable
 */
LinkTable * CreatLinkTable()
{
	LinkTable *pLink=(LinkTable *)malloc(sizeof(LinkTable));
	return pLink;
}

/*
 *InsertNode : Insert node for the LinkTable
 */
int InsertNode(LinkTable *pLink,void *data,int size)
{
	return SUCCESS;
}
/*
 * SearchNode : Search node from the LinkTable
 */
void* SearchNode(LinkTable *pLink,int condition(void *data))
{
	
	return NULL;
}

/*
 *DeleteNode : Delet node from the LinkTable
 */
int DeleteNode(LinkTable *pLink,int condition(void *data))
{
	
		return 0;
}

/*
 *DisplayNode : printf LinkNode
 */
int Display(LinkTable *pLink,int display(void *data))
{
	return SUCCESS;
}
/*
 *UpdataNode : change node element
 */
int UpdataNode(LinkTable *pLink,int condition(void *data),void *handle(),int size)
{

	return SUCCESS;
}
