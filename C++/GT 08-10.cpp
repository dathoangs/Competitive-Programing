#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
struct canBo{
	int macb;
	string ngaysinh;
	float hsl, pc, tt;
};

struct node{
	canbo info;
	struct node *next;
};

struct list{
	node *head;
	node *tail;
};

void khoitao (list &Q){
	Q.head = NULL;
	Q.tail = NULL;
}

node *getnode(canbo x){
	node *p;
	p = new node;
	
	if (p == NULL){
		cout << "\nCap phat loi";
		return 0;
	}
	
	p->info = x;
	p->next = NULL;
	
	return p;
}

void insfirst(list &Q, node *p){
	
}


int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	
	
	
	
}













