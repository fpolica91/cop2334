// hopsital overload part 2
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// @interface Patient : NSObject

enum SurgeryTypes
{
  URGENT,
  NON_URGENT,
  EMERGENCY,
  NON_EMERGENCY,
  COSMETIC

};

enum PatientStatus
{
  WAITING,
  IN_SURGERY,
  OUT_SURGERY,
  DECEASED,
};

class Surgery
{
public:
  int id;
  string name;
  SurgeryTypes type;
  int cost;
  Surgery(int id, string name, int cost, SurgeryTypes type)
  {
    this->id = id;
    this->type = type;
    this->name = name;
    this->cost = cost;
  }
};

class Medicine
{
public:
  int id;
  string name;
  int cost;
  Medicine(string name, int cost)
  {
    this->name = name;
    this->cost = cost;
  }
};

class PharmacyScript
{
public:
  int id;
  vector<Medicine> medicineInventory;
  PharmacyScript(int id, vector<Medicine> medicineInventory)
  {
    this->id = id;
    this->medicineInventory = medicineInventory;
  }
};

int main()
{
  unordered_map<int, Surgery> surgeries;
  Surgery *surg1 = new Surgery(1, "Brain Surgery", 100, URGENT);
  surgeries[surg1->id] = surg1;
  cout << surg1->id << " " << surg1->name << " " << surg1->cost << " " << surg1->type << endl;
  vector<Medicine> medsForPatient = {Medicine("Aspirin", 10), Medicine("Percocet", 20)};
  PharmacyScript *pharmacyScript = new PharmacyScript(1, medsForPatient); // create pharmacy script
}