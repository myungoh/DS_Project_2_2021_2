#ifndef _BpTree_H_
#define _BpTree_H_

#include "BpTreeNode.h"
#include "BpTreeDataNode.h"
#include "BpTreeIndexNode.h"
#include "VaccinationData.h"
// BpTree

class BpTree{
private:
	BpTreeNode*	root;
	int			order;		// m children

public:
	BpTree(int order = 3){
		root = NULL;
		this->order = order;
	}

	bool		Insert(VaccinationData* newData);
	bool		exceedDataNode(BpTreeNode* pDataNode);
	bool		exceedIndexNode(BpTreeNode* pIndexNode);
	void		splitDataNode(BpTreeNode* pDataNode);
	void		splitIndexNode(BpTreeNode* pIndexNode);
	BpTreeNode*	searchDataNode(string n); //search VaccinationData node
	void	SearchRange(string start, string end);
	void	Print(); // print all 

};

#endif
