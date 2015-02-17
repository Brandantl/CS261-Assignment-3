/*
 * File:   Linklist.h
 * Author: brandan
 *
 * Created on February 12, 2015, 19:57
 */

#ifndef LINKLIST_L
#define	LINKLIST_L
#include <iostream>
using namespace std;

template <class ItemType>
class Linklist {
public:
	Linklist();
	Linklist(Linklist<ItemType>&);
	virtual ~Linklist();

	bool insert(ItemType*);
	void display();
	void isEmpty();
	const Linklist& operator=(const Linklist& orig);
private:

	template <class U>
	struct node {
		U * item;
		node<U> *next;
	};

	node<ItemType>* head;
	node<ItemType>* tail;
	int size;
};

template <class ItemType>
Linklist<ItemType>::Linklist() {
	size = 0;
	head = NULL;
}

template <class ItemType>
Linklist<ItemType>::Linklist(Linklist<ItemType>& orig) {
	if (orig->head) {
		node<ItemType> * current = orig->head;
		while (current) {
			if (head) {
				node<ItemType> * tmp = new node < ItemType >;
				tmp->item = current->item;
				tmp->next = NULL;
				this->tail->next = tmp;
				tail = tmp->next;
			}
			else {
				head = new node < ItemType >;
				head->item = current->item;
				head->next = NULL;
				tail = head;
			}
		}
	}
	else {
		head = NULL;
		tail = NULL;
	}
}

template <class ItemType>
Linklist<ItemType>::~Linklist() {
	node<ItemType> * curr = head;
	while (head) {
		curr = head->next;
		if ((size > 1) && head->item) {
			delete head->item;
		}
		else if ((size == 1) && head->item) {
			delete head->item;
		}
		if (head) {
			delete head;
		}
		head = curr;
	}
}

template <class ItemType>
bool Linklist<ItemType>::insert(ItemType * thing) {
	node<ItemType> * prev = NULL;
	node<ItemType> * curr = head;
	if (this->size > 0) {
		while (curr != NULL) {
			prev = curr;
			curr = curr->next;
		}
	}
	else {
		curr = head;
		prev = NULL;
	}

	if (curr && curr->item == thing) {
		return false;
	}
	else {
		// Create a new node
		node<ItemType> * newNode = new node < ItemType > ;
		newNode->item = thing;
		newNode->next = curr;
		if (prev == NULL) {
			head = newNode;
		}
		else {
			prev->next = newNode;
		}
		newNode->next = NULL;
		tail = newNode;
		size++;
		return true;
	}
	return false;
}

template <class ItemType>
void Linklist<ItemType>::isEmpty() {
	if (!size > 0) {
		return true;
	}
	return false;
}

template <class ItemType>
void Linklist<ItemType>::display() {
	if (this->size > 0) {
		node<ItemType> * curr;
		for (curr = head; curr; curr = curr->next) {

			curr->item->print();
		}
	}
}


template <class ItemType>
const Linklist<ItemType>& Linklist<ItemType>::operator=(const Linklist<ItemType>& orig) {
	if (orig->head) {
		node<ItemType> * current = orig->head;
		while (current) {
			if (head) {
				node<ItemType> * tmp = new node < ItemType > ;
				tmp->item = current->item;
				tmp->next = NULL;
				this->tail->next = tmp;
				tail = tmp->next;
			}
			else {
				head = new node < ItemType > ;
				head->item = current->item;
				head->next = NULL;
				tail = head;
			}
		}
	}
	else {
		head = NULL;
		tail = NULL;
	}
}

#endif	/* LINKLIST_L */