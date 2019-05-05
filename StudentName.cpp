#include "StudentName.h"

StudentName::StudentName(){
    //ctor
}

StudentName::StudentName(string nm){
    name = nm;
    int nSpace = 0;
    char spc = ' ';
    string tmp;
    for (int i=0; i < name.size(); ++i)
        if (name[i] == spc)
            nSpace++;
    if (nSpace == 1){
        for (int i=0; i < name.size(); ++i)
            if (name[i-1] == spc){
                for (int j=i; j < name.size(); ++j)
                    tmp += name[j];
                break;
            }
        name = name + " " + tmp;
    }
    else if (nSpace == 0){
        name = name + " " + name + " " + name;
    }

    tmp = name[0];
    for(int i=1; i<name.size(); ++i){
        if(name[i] != spc)
            tmp += name[i];
        else{
            vec.push_back(tmp);
            tmp = "";
        }
    }
    vec.push_back(tmp);
}

void StudentName::print(){
    cout << "Detailed parts of the name: " << name << endl;
    for(int i=0; i<vec.size(); ++i){
        cout << i+1 << ") " << vec[i] << endl;
    }
    cout << endl;
}

bool StudentName::replaceName(int i, int j){
    string tmp;
    if (i > vec.size() || j > vec.size()){
        cout << "*false*\n\n";
        return false;
    }
    else{
        for(int k=0; k<vec.size(); ++k){
            if((k+1)==i){
                tmp = vec[k];
                vec[k] = vec[j-1];
                vec[j-1] = tmp;
                break;
            }
        }
        cout << "*true*  ";
        for(int k=0; k<vec.size(); ++k){
            cout << vec[k] << " ";
        }
        cout << endl;

        return true;
    }
}

StudentName::~StudentName()
{
    //dtor
}
