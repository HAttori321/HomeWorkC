#include <iostream>
using namespace std;

int main()
{
    //Task1

    //float distance;
    //float time;

    //cout << "Введіть відстань до аеропорту (у кілометрах): ";
    // 
    //cin >> distance;

    //cout << "Введіть час, необхідний для подорожі (у годинах): ";
    // 
    //cin >> time;

    //float speed = distance / time;

    //cout << "Треба рухатися зі швидкістю " << швидкість << " км/год." << endl;

    //Task 2

    //const double cost_per_minute = 2.0;

    //int start_hours, start_minutes, start_seconds;

    //cout << "Введіть час початку використання скутера (години хвилини секунди): ";

    //cin >> start_hours >> start_minutes >> start_seconds;

    //int end_hours, end_minutes, end_seconds;

    //cout << "Введіть час закінчення використання скутера (години хвилини секунди): ";

    //cin >> end_hours >> end_minutes >> end_seconds;

    //int start_total_minutes = start_hours * 60 + start_minutes + start_seconds / 60.0;

    //int end_total_minutes = end_hours * 60 + end_minutes + end_seconds / 60.0;

    //int travel_duration = end_total_minutes - start_total_minutes;

    //double travel_cost = travel_duration * cost_per_minute;

    //cout << "Вартість поїздки: " << travel_cost << " грн." << endl;

    //Task3

   /* double distance, fuelConsumption, priceA, priceB, priceC;

    cout << "Enter the distance (km): ";

    cin >> distance;

    cout << "Введіть витрати палива на 100 км (літри): ";

    cin >> fuelConsumption;

    cout << "Введіть ціну палива А: ";

    cin >> priceA;

    cout << "Введіть ціну палива Б: ";

    cin >> priceB;

    cout << "Введіть ціну палива В ";

    cin >> priceС;

    double costA = (distance / 100) * fuelConsumption * priceA;

    double costB = (distance / 100) * fuelConsumption * priceB;

    double costC = (distance / 100) * fuelConsumption * priceC;

    cout << "Тип палива\tВартість подорожі" << endl;

    cout << "A\t\t" << costA << " $" << endl;

    cout << "B\t\t" << costB << " $" << endl;

    cout << "C\t\t" << costC << " $" << endl;*/

    //Task5
     int second;
        cout << "Введіть час, що минув з початку робочого дня в секундах: ";
        cin >> second;
        int second2 = 28800 - second;
        int hours = second2 / 3600;
        cout << "Час, що залишився на роботі: " << hours << " hours." << endl;
}

