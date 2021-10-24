//#pragma once
#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - �������� ��� ������,
// �������������� ���������.
//------------------------------------------------------------------------------

#include "stdio.h"
#include "shape.h"

//------------------------------------------------------------------------------
// ���������� ��������� �� ������ ����������� �������.
class Container {
public:
    Container();
    ~Container();
    // ���� ����������� ���������� �� ���������� ������
    void In(FILE* file);
    // ��������� ���� ����������� ����������
    void InRnd(int size);
    // ����� ����������� ���������� � ��������� �����
    void Out(FILE* file);
    // ����� ��������� ������ ����������
    void ProcessingString(FILE* file);
    // ����� ���������� ������.
    void quicksort(double* mas, int first, int last);

private:
    void Clear();    // ������� ���������� �� ������
    int len; // ������� �����
    Shape* storage[10000];
};

#endif