#include "std_lib_facilities.h"
using namespace std;

class name_value
{
public:
    string name;
    int value;
};

//print the vector
void print_vector(vector<name_value> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].name << " " << v[i].value << endl;
    }
}

//compare the user input name with the other name of the vector
//return error if names matched
int compare_name(vector<name_value> &v, string name)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (name == v[i].name)
        {
            return 1;
        }
        else
        {
            continue;
        }
    }
    return 0;
}

name_value return_obj(string name, int value)
{
    name_value obj;
    obj.name = name;
    obj.value = value;

    return obj;
}

int main()
{
    string temp_name;
    int temp_value;

    vector<name_value> v;

    while (1)
    {
        cout << "Please enter a name and a value (enter NoName 0 to end the program): ";
        cin >> temp_name >> temp_value;

        int x = compare_name(v, temp_name);

        if (x == 1)
        {
            cout << "This name has been entered twice.";
            break;
        }
        else
        {
            if (temp_name == "NoName" && temp_value == 0) //if user enter this , print the vector and end the program
            {
                print_vector(v);
                break;
            }
            else
            {
                name_value obj = return_obj(temp_name,temp_value);
                v.push_back(obj);
            }
        }
    }

    return 0;
}
