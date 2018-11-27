//main.cpp
#include <iostream>
#include "dnode.h"

std::size_t length(dnode* head_ptr)
{
  dnode* temp = head_ptr;
  int count = 0;
  while(temp->data() != NULL)
  {
    temp->set_next(temp->next_link());
    count++;
  }
  return count;

}
void head_insert(dnode*& head_ptr, const dnode::value_type& entry);
void insert(dnode* previous_ptr, const dnode::value_type& entry);
dnode* search(dnode* head_ptr, const dnode::value_type& target);
const dnode* search(const dnode* head_ptr, const dnode::value_type& target); dnode* locate(dnode* head_ptr, std::size_t position);
const dnode* locate(const dnode* head_ptr, std::size_t position);
void list_head_remove(dnode*& head_ptr);
void list_remove(dnode* previous_ptr);
void list_clear(dnode*& head_ptr);
void list_copy(const dnode* source_ptr, dnode*& head_ptr, dnode*& tail_ptr);
//

int main()
{
  dnode *l1;
  dnode *l2;
  l1->set_data(1.0);
  l1->set_data(2.0);
  l1->set_next(l2);
  l2->set_previous(l1);
  l2->set_next(NULL);
  l1->set_previous(NULL);
  std::cout << length(l1) << "is the length of the linked list" << std::endl;
  return 0;
}
