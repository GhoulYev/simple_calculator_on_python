#include <iostream>
#include <fstream>
int main()
{
	std::ofstream fout("../simple_calculator_on_python.py");
	std::string operators = "+-*/";
	const int range = 2000;
	std::cout << "Start generation\n";
	fout << "a = input()\n";
	fout << "b = input()\n";
	fout << "print('Что делаем? +; -; *; /')\n";
	fout << "c = input()\n";

	for (int i = 0; i < 4; i++)
	{
		fout << "if(c == '" << operators[i] << "'):\n";
		for (int j = 1; j <= range; j++)
		{
			for (int k = 1; k <= range; k++)
			{
				fout << "\tif(a == " << j << " && b == " << k << "):\n";
				switch (i)
				{
					case 0:
						fout << "\t\t print(" << j + k << ")\n";
						break;
					case 1:
						fout << "\t\t print(" << j - k << ")\n";
						break;
					case 2:
						fout << "\t\t print(" << j * k << ")\n";
						break;
					case 3:
						fout << "\t\t print(" << j / (k*1.0) << ")\n";
						break;
				}
			}
		}
	}
	fout.close();
	std::cout << "End generation";
}
