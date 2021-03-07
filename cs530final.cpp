#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;;
int main()
{ cout << fixed << setprecision(2);// money
    char tableShape;
    float tableLength = 0,tableArea = 0,tableWidth = 0,tableDiameter = 0,tableRadius = 0,tableCost = 0,tableCostSum = 0;
    char materialType;
    int ageTotal = 0;
    int num_Of_tableEstm = 0;
    bool materialTypeSel = 0;

    cout << "Welcome to Tables � Yours One Stop Table Shop\n"
         << "Dawit Lemma � Master Table Builder\n"
         << "What shape of table do you want to build?\n"
         << "1. Rectangular\n"
         << "2. Square\n"
         << "3. Circular\n"
         << "4. End\n";


    cin >> tableShape;
while (tableShape >'4')
{
    cout <<"Error � Invalid Entry. Please reenter a valid value\n";
        system("cls");
        cout <<"What shape of table do you want to build?\n"
         << "1. Rectangular\n"
         << "2. Square\n"
         << "3. Circular\n"
         << "4. End\n";
}
if(tableShape >= '1' && tableShape <= '3')
{
    do{
        if(tableShape == '1')
        {   cout << "Enter the length of the table (in inches): ";
            cin >> tableLength;
                 while (tableLength <= 0)
                {
                cout << "Error � Length must be greater than zero. Please reenter a valid value";
                cin >> tableLength;
                }
                cout << "Enter the width of the table (in inches): ";
               cin >> tableWidth;
                 while (tableWidth <= 0)
                {
                cout << "Error � width must be greater than zero. Please reenter a valid value";
                cin >> tableWidth;
                }
                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error � type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }

                if(materialType == '1')
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;

                cout << "Output Report\n"
                     << "The area of the table is" << tableArea << "square inches\n"
                     << "The table will be made of Laminate\n"
                     << "The cost of this table is $" << tableCost;
                }
                else
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                cout << "Output Report\n"
                     << "The area of the table is" << tableArea << "square inches\n"
                     << "The table will be made of oak\n"
                     << "The cost of this table is $" << tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. End\n";
                    cin >> tableShape;

        }
        else if(tableShape = '2')
        {
                cout << "Enter the length of the table (in inches): ";
                cin >> tableLength;
                while (tableLength <= 0)
                {
                cout << "Error � Length must be greater than zero. Please reenter a valid value";
                cin >> tableLength;
                }

                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error � type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }
                if(materialType == '1')
                {
                tableArea = tableLength * tableLength;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                cout << "Output Report\n"
                     << "The area of the table is" << tableArea << "square inches\n"
                     << "The table will be made of Laminate\n"
                     << "The cost of this table is $" << tableCost;
                }
                else
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                cout << "Output Report\n"
                     << "The area of the table is" << tableArea << "square inches\n"
                     << "The table will be made of oak\n"
                     << "The cost of this table is $" << tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. End\n";
                    cin >> tableShape;

        }
        else if(tableShape = '3')
        {
                cout << "Enter the diameter of the table (in inches): ";
                cin >> tableDiameter;
                while (tableDiameter <= 0)
                {
                cout << "Error � Length must be greater than zero. Please reenter a valid value";
                cin >> tableDiameter;
                }

                cout << "What type of material do you want to use?\n"
                     << "1.	Laminate ($0.125 per square inch)\n"
                     << "2.	Oak ($0.25 per square inch)\n";
                cin >> materialType;

                while (materialType <= '0' && materialType > '2')
                {
                cout << "Error � type of material must be either Laminated or Oak. Please reenter a valid value";
                cin >> materialType;
                }
                if(materialType == '1')
                {
                tableRadius = tableDiameter / 2.0;
                tableArea = tableRadius * tableRadius * 3.14;
                tableCost = tableArea * 0.125;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                cout << "Output Report\n"
                     << "The area of the table is" << tableArea << "square inches\n"
                     << "The table will be made of Laminate\n"
                     << "The cost of this table is $" << tableCost;
                }
                else
                {
                tableArea = tableLength * tableWidth;
                tableCost = tableArea * 0.25;
                num_Of_tableEstm++;
                tableCostSum = tableCost + tableCostSum;


                cout << "Output Report\n"
                     << "The area of the table is" << tableArea << "square inches\n"
                     << "The table will be made of oak\n"
                     << "The cost of this table is $" << tableCost;
                }
                    cout <<"What shape of table do you want to build?\n"
                             << "1. Rectangular\n"
                             << "2. Square\n"
                             << "3. Circular\n"
                             << "4. End\n";
                    cin >> tableShape;

        }

        }
    while (tableShape > '0' && tableShape <= '3' && tableShape != '4');

}
if (tableShape == '4')
    {  if(num_Of_tableEstm == 0)
        cout<<"no estimation requested";
        else
            {
        cout << "number of table estimation: "<<num_Of_tableEstm<<"\n"
             << "total cost of tables" << tableCostSum<<"\n"
             << "*** Good Bye ***";

            }
    }

return 0;
}
