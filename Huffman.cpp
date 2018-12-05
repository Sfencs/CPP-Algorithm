#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
struct HTNode
{
	double weight;
	char self;
	HTNode *parent, *lchild, *rchild;
};


void code(HTNode* root,string ma)
{
	if (root->lchild==NULL&&root->lchild==NULL)
	{
		cout << root->self << ma << endl;
		return;
	}
	if (root->rchild == NULL)
	{
		ma = ma + '1';
		code(root->lchild, ma);
	}
	if (root->lchild == NULL)
	{
		ma = ma + '0';
		code(root->rchild, ma);
	}
	if (root->lchild != NULL&&root->lchild != NULL)
	{
		string one = ma + '1';
		code(root->lchild, one);
		string two = ma + '0';
		code(root->rchild,two);
	}

}

int main()
{
	vector<char> str = { 'a','b','c','d' };
	vector<double> rate = {0.4,0.2,0.3,0.1};

	vector<HTNode*> node;
	for (int i = 0;i < str.size();i++)
	{
		HTNode* temp = new HTNode();
		temp->weight = rate[i];
		temp->self = str[i];
		temp->parent = NULL;
		temp->lchild = NULL;
		temp->rchild = NULL;
		node.push_back(temp);
	}

	while (node.size()>1)
	{
		auto min = min_element(node.begin(), node.end(), [](HTNode* a, HTNode* b) { return a->weight < b->weight; });
		HTNode* min1 = *min;
		node.erase(min);

		auto min_ = min_element(node.begin(), node.end(), [](HTNode* a, HTNode* b) { return a->weight < b->weight; });
		HTNode* min2 = *min_;
		node.erase(min_);

		HTNode* temp = new HTNode();
		temp->weight = min1->weight+min2->weight;
		temp->parent = NULL;
		temp->lchild = min1;
		temp->rchild = min2;
		node.push_back(temp);
	}
	string ma ="";
	code(node[0], ma);






}