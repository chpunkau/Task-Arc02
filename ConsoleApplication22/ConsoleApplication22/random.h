#ifndef __random__
#define __random__

#include <cstdlib>
#include <ctime>   // ��� ������� time()

//------------------------------------------------------------------------------
// random.h - �������� ��������� ��������� ����� � �������� ���������,
// � ����� ��������� ���������� ������� ������.
//------------------------------------------------------------------------------

class Random {
public:
    Random(int fst, int lst) {
        if (fst <= lst) {
            first = fst;
            last = lst;
        }
        else {
            first = lst;
            last = fst;
        }
        // ��������� ���� � �������� ��������������.
        srand(static_cast<unsigned int>(time(0)));
    }
    // ��������� ���������� ����� � �������� ���������.
    int Get() {
        return rand() % (last - first + 1) + first;
    }
    // ��������� ���������� ������� � �������� ���������.
    char GetNew() {
        return rand() % (lastc - firstc + 1) + firstc;
    }

private:
    int first;
    int last;
    char firstc;
    char lastc;
};

#endif //__random__