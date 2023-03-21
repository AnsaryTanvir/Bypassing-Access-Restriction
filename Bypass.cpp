#include <bits/stdc++.h>
using namespace std;



class Student{

    private:
        
        int     roll;
        float   cgpa;
        string  grade;

    public:

        Student(int roll, float cgpa, string grade){
            this->roll  = roll;
            this->cgpa  = cgpa;
            this->grade = grade;
        }
};

/*  
    Variable    Identifier       Size       Offset From Object
    int             roll        4  Bytes            0x0
    float           cgpa        4  Bytes            0x4
    string          grade       32 Bytes            0x8
*/

int main(){
    
    Student Ansary = Student( 132, 4.0, "A+" );

    /* Getting pointer to each member of the object using objects base address and the offset */
    char* BaseAddress = (char*) &Ansary;
    int*    roll    = (int*    )( BaseAddress + 0x0 );
    float*  cgpa    = (float*  )( BaseAddress + 0x4 );
    string* grade   = (string* )( BaseAddress + 0x8 );
    
    /* Dereference the pointers to get the contents */
    cout << *roll << " " << *cgpa << " " << *grade << endl;

    return 0;
}
