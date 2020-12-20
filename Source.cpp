#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;

class BSTree
{
private:

	class TreeNode
	{
	public:
		int data;
		TreeNode * left, *right;
		int height;
		TreeNode(int d)
		{
			this->data = d;
			left = NULL;
			right = NULL;
			height = 0;
		}
	};
	TreeNode *root;
	void show(TreeNode *sr, int lv)
	{
		if (sr->left != NULL)
		{
			show(sr->left, lv + 1);
		}
		for (int k = 0; k<lv; k++) cout << "--";
		cout << sr->data << endl;
		if (sr->right != NULL)
		{
			show(sr->right, lv + 1);
		}
	}
	void remove(TreeNode *sr)
	{
		if (sr->left != NULL)
		{
			remove(sr->left);
		}
		if (sr->right != NULL)
		{
			remove(sr->right);
		}
		delete sr;
	}
	int ht(const TreeNode* t) const
	{
		return t == NULL ? -1 : t->height;
	}
	TreeNode* singleRightRotate(TreeNode* &t)
	{
		TreeNode* u = t->left;
		t->left = u->right;
		u->right = t;
		t->height = max(ht(t->left), ht(t->right)) + 1;
		u->height = max(ht(u->left), t->height) + 1;
		return u;
	}
	TreeNode* singleLeftRotate(TreeNode* &t)
	{
		TreeNode* u = t->right;
		t->right = u->left;
		u->left = t;
		t->height = max(ht(t->left), ht(t->right)) + 1;
		u->height = max(ht(t->right), t->height) + 1;
		return u;
	}
	TreeNode* doubleLeftRotate(TreeNode* &t)
	{
		t->right = singleRightRotate(t->right);
		return singleLeftRotate(t);
	}

	TreeNode* doubleRightRotate(TreeNode* &t)
	{
		t->left = singleLeftRotate(t->left);
		return singleRightRotate(t);
	}
	TreeNode* insert(int d, TreeNode* &t)
	{
		if (t == NULL)
		{
			t = new TreeNode(d);
			return t;
		}
		else if (d < t->data)
		{
			t->left = insert(d, t->left);
			if (ht(t->left) - ht(t->right) == 2)
			{
				if (d < t->left->data)
					t = singleRightRotate(t);
				else
					t = doubleRightRotate(t);
			}
		}
		else if (d > t->data)
		{
			t->right = insert(d, t->right);
			if (ht(t->right) - ht(t->left) == 2)
			{
				if (d > t->right->data)
					t = singleLeftRotate(t);
				else
					t = doubleLeftRotate(t);
			}
		}
		t->height = max(ht(t->left), ht(t->right)) + 1;
		return t;
	}
public:
	BSTree()
	{
		root = NULL;
	}
	~BSTree()
	{
		remove(root);
		root = NULL;
	}
	void insert(int d)
	{
		root = insert(d, root);
	}
	bool search(int d)
	{
		if (root != NULL)
		{
			TreeNode* tmp = NULL;
			stack<TreeNode *> s;
			s.push(root);
			while (!s.empty())
			{
				tmp = s.top();
				s.pop();
				if (tmp->data == d)
					return true;
				if (tmp->data >= d)
				{
					if (tmp->left != NULL)
						s.push(tmp->left);
				}
				else if (tmp->data < d)
				{
					if (tmp->right != NULL)
						s.push(tmp->right);
				}
			}
		}
		return false;
	}
	void show()
	{
		if (root != NULL)
		{
			show(root, 0);
		}
	}
	void remove(int d)
	{
		if (root != NULL && search(d))
		{
			TreeNode* tmp = NULL;
			TreeNode* jnkPar = NULL;
			TreeNode* jnk = NULL;
			bool side;
			stack<TreeNode *> s;
			s.push(root);
			while (!s.empty())
			{
				tmp = s.top();
				s.pop();
				jnkPar = tmp;
				if (tmp->data > d)
				{
					if (tmp->left->data == d)
					{
						jnk = tmp->left;
						side = 0;
						break;
					}
					if (tmp->left != NULL)
						s.push(tmp->left);
				}
				else if (tmp->data < d)
				{
					if (tmp->right->data == d)
					{
						jnk = tmp->right;
						side = 1;
						break;
					}
					if (tmp->right != NULL)
						s.push(tmp->right);
				}
				else
				{
					jnk = tmp;
					break;
				}
			}
			if (jnk->left == NULL && jnk->right == NULL)
			{
				if (side)
					jnkPar->right = NULL;
				else
					jnkPar->left = NULL;
				delete jnk;
			}
			else if (jnk->right == NULL)
			{
				if (side)
					jnkPar->right = jnk->left;
				else
					jnkPar->left = jnk->left;
				delete jnk;
			}
			else if (jnk->left == NULL)
			{
				if (side)
					jnkPar->right = jnk->right;
				else
					jnkPar->left = jnk->right;
				delete jnk;
			}
			else if (jnk->left != NULL && jnk->right != NULL)
			{
				if (jnk->right->left == NULL && jnk->left->right == NULL)
				{
					if (jnk->data - jnk->left->data <= jnk->right->data - jnk->data)
					{
						jnk->data = jnk->left->data;
						jnk->left = NULL;
					}
					else
					{
						jnk->data = jnk->right->data;
						jnk->right = NULL;
					}
					return;
				}
				int lr, rl;
				TreeNode* jnkParR = NULL;
				TreeNode* jnkParL = NULL;
				tmp = jnk->right;
				while (tmp != NULL && tmp->left != NULL)
				{
					jnkParR = tmp;
					tmp = tmp->left;
					rl = tmp->data;
				}
				TreeNode* jnkParRN = tmp;
				tmp = jnk->left;
				while (tmp != NULL && tmp->right != NULL)
				{
					jnkParL = tmp;
					tmp = tmp->right;
					lr = tmp->data;
				}
				TreeNode* jnkParLN = tmp;
				TreeNode* dable = NULL;
				if (jnk->data - rl <= lr - jnk->data)
				{
					jnk->data = rl;
					if (jnkParRN->right == NULL)
					{
						dable = jnkParR->left;
						jnkParR->left = NULL;
					}
					else
					{
						dable = jnkParR->left;
						jnkParR->left = jnkParRN->right;
					}

				}
				else
				{
					jnk->data = lr;
					if (jnkParLN->left == NULL)
					{
						dable = jnkParL->right;
						jnkParL->right = NULL;
					}
					else
					{
						dable = jnkParR->right;
						jnkParR->right = jnkParRN->left;
					}
				}
				delete dable;
			}
		}
	}
};

int main()
{
	BSTree bst;
	bst.insert(30);
	bst.insert(25);
	bst.insert(19);
	bst.insert(15);
	bst.insert(10);
	bst.insert(5);
	bst.insert(4);
	bst.remove(15);
	bst.insert(90);
	bst.insert(5);
	bst.insert(60);
	bst.insert(15);
	bst.insert(100);
	bst.insert(55);
	bst.insert(98);
	bst.insert(75);
	bst.insert(110);
	bst.insert(80);
	bst.insert(85);
	bst.insert(72);
	bst.insert(82);
	bst.insert(81);
	bst.show();
	if (bst.search(90))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	cout << endl;
	bst.remove(90);
	bst.show();
	if (bst.search(90))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	system("pause");
	return 0;
}