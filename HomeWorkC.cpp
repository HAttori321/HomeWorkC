#include <iostream>
using namespace std;

int main()
{
    //Task1

    //float distance;
    //float time;

    //cout << "������ ������� �� ��������� (� ���������): ";
    // 
    //cin >> distance;

    //cout << "������ ���, ���������� ��� ������� (� �������): ";
    // 
    //cin >> time;

    //float speed = distance / time;

    //cout << "����� �������� � �������� " << �������� << " ��/���." << endl;

    //Task 2

    //const double cost_per_minute = 2.0;

    //int start_hours, start_minutes, start_seconds;

    //cout << "������ ��� ������� ������������ ������� (������ ������� �������): ";

    //cin >> start_hours >> start_minutes >> start_seconds;

    //int end_hours, end_minutes, end_seconds;

    //cout << "������ ��� ��������� ������������ ������� (������ ������� �������): ";

    //cin >> end_hours >> end_minutes >> end_seconds;

    //int start_total_minutes = start_hours * 60 + start_minutes + start_seconds / 60.0;

    //int end_total_minutes = end_hours * 60 + end_minutes + end_seconds / 60.0;

    //int travel_duration = end_total_minutes - start_total_minutes;

    //double travel_cost = travel_duration * cost_per_minute;

    //cout << "������� ������: " << travel_cost << " ���." << endl;

    //Task3

   /* double distance, fuelConsumption, priceA, priceB, priceC;

    cout << "Enter the distance (km): ";

    cin >> distance;

    cout << "������ ������� ������ �� 100 �� (����): ";

    cin >> fuelConsumption;

    cout << "������ ���� ������ �: ";

    cin >> priceA;

    cout << "������ ���� ������ �: ";

    cin >> priceB;

    cout << "������ ���� ������ � ";

    cin >> price�;

    double costA = (distance / 100) * fuelConsumption * priceA;

    double costB = (distance / 100) * fuelConsumption * priceB;

    double costC = (distance / 100) * fuelConsumption * priceC;

    cout << "��� ������\t������� �������" << endl;

    cout << "A\t\t" << costA << " $" << endl;

    cout << "B\t\t" << costB << " $" << endl;

    cout << "C\t\t" << costC << " $" << endl;*/

    //Task5
     int second;
        cout << "������ ���, �� ����� � ������� �������� ��� � ��������: ";
        cin >> second;
        int second2 = 28800 - second;
        int hours = second2 / 3600;
        cout << "���, �� ��������� �� �����: " << hours << " hours." << endl;
}

