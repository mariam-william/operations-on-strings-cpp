#ifndef STUDENTNAME_H
#define STUDENTNAME_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class StudentName
{
    public:
        StudentName();
        StudentName(string nm);
        void print();
        bool replaceName(int i, int j);

        virtual ~StudentName();

    protected:

    private:
        string name;
        vector <string> vec;
};

#endif // STUDENTNAME_H
