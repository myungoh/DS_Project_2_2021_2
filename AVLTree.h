#ifndef _AVLTREE_H_
#define _AVLTREE_H_

#include "VaccinationData.h"
#include "AVLNode.h"
/* class AVL */

class AVLTree{
private:
	AVLNode*	root;

public:
	
	AVLTree(){
		root=NULL;
	}
	~AVLTree(){};
	bool		Insert(VaccinationData* pVac);
	VaccinationData*	Search(int id);
	void GetVector(vector<VaccinationData*>& v);
};

#endif

