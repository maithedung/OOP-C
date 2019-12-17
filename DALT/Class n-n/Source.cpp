#include <bits/stdc++.h>
using namespace std;

/* Patient.h */
class Doctor;
class Patient
{
private:
    string nameP;
    vector<Doctor*>doctor;
    void addDoctor(Doctor*);
public:
    Patient(/* args */);
    ~Patient();
};

Patient::Patient(/* args */)
{
}

Patient::~Patient()
{
}
