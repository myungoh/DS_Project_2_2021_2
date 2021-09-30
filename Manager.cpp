#include "Manager.h"
Manager::Manager(int bpOrder) {

}

Manager::~Manager() {

}

void Manager::run(const char* command_txt) {

}

bool Manager::LOAD() {

}

bool Manager::VLOAD() {

}

bool Manager::ADD() {

}

bool Manager::SEARCH_BP(string name) {

}

bool Manager::SEARCH_AVL(string name) {

}

bool Compare(VaccinationData* vac1, VaccinationData* vac2) {

}

bool Manager::VPRINT(string type_) {
	vector<VaccinationData*> v;
	avl->GetVector(v);

	/* 
	write code here
	*/
}

void Manager::printErrorCode(int n) {
	ofstream fout;
	fout.open("log.txt", ofstream::app);
	fout << "========== ERROR ==========" <<endl;
	fout << n << endl;
	fout << "===========================" << endl << endl;
	fout.close();
}

