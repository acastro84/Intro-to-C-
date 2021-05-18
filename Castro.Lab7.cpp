//******************************************************************
// Gross Pay Calculator
// Programmer: Armando Castro
// Completed : 
// Status    : 
//
// Calculates Gross pay using objects.
//******************************************************************


class PayRoll
{
	private: 
		double emppayRate;
		double emphours;
	public:
		const int NUM_OF_EMPS = 14;
		double hours[NUM_OF_EMPS];
		double grossPay;
		PayRoll getValues()
		{
			PayRoll hours[NUM_OF_EMPS];				//Create local PayRoll object.
			double hoursforWeek = 0;
			double rateofPay = 0;
			ifstream inputFile;
			inputFile.open("C:\\Users\\Armando\\Desktop\\CPP compiles\\payroll.dat")
			
			if (!inputFile)
			{
				cout << "Error opening data file. " << endl;
			}
			else 
			{
				for (objects = 0; objects < NUM_OF_EMPS; objects++)
				{
					inputFile >> hours[objects];
				}
				inputFile.close();
			}
		}
		
		double getGross(int hours, double payRate)
		{
			grossPay = hours[hours] * hours[payRate];
			return grossPay;
		}
	
};

int main()
{
		
	emp1 = getGross(0, 1);
	emp2 = getGross(2, 3);
	emp3 = getGross(4, 5);
	emp4 = getGross(6, 7);
	emp5 = getGross(8, 9);
	emp6 = getGross(10, 11);
	emp7 = getGross(12, 13);
	
	
	cout << "Employee  Gross pay\n";
	cout << "========  =========\n";
	cout << "    1:    $ " << emp1 << "\n";
	cout << "    2:    $ " << emp2 << "\n";
	cout << "    3:    $ " << emp3 << "\n";
	cout << "    4:    $ " << emp4 << "\n";
	cout << "    5:    $ " << emp5 << "\n";
	cout << "    6:    $ " << emp6 << "\n";
	cout << "    7:    $ " << emp7 << "\n";
	
	return 0;
}
