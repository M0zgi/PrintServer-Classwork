#include"PrintServer.h"
#include<Windows.h>


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand(time(0));
	PrintServer ps("10.6.0.155");

	string fName[] = { "zvit.xls", "otchet.doc", "file1.txt", "foto.jpg", "presentation.ppt" };
	string dept[] = { "Admin", "Economics", "HR", "Transport", "Buhgalteria" };

	int t = 0; //таймер

	while (true)
	{
		int m = rand() % 5 + 3;

		if (t % m == 0)
			ps.addTaskPrint(TaskPrint(fName[rand() % 5], dept[rand() % 5], rand() % 5 + 5));

		ps.work();
		t++;
		Sleep(1000);
	}


	cout << endl;
	system("pause");
}