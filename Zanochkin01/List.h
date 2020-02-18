#pragma once
#include "Task.h"

class List {
private:
	int list_size;

public:
	Task* stud;
	
	int getList_size() const;
	void setList_size(int);
	void Add_student();
	void Delete_student(int);
	void Print_all() const;
	void Print_one_student(int) const;
	Task Create_student();
	Task Create_student2();
	void Create_list();
	void Free_memory();
};