
/*==============================================
Name:           Mannat Sachdeva
Student Number: 148832231
Email:          msachdeva7@myseneca.ca
Section:        ZDD
Workshop:       Workshop 2 - Part 1
Date:           05-25-2024
I have done all the coding by myself and only
copied the code that my professor provided to
complete my workshops and assignments.
==============================================*/

#ifndef SENECA_FILE_H_
#define SENECA_FILE_H_
namespace seneca {
	bool openFile(const char filename[]);
	void closeFile();
	int noOfRecords();
	// TODO: Declare read prototypes
	bool read(char *empName);
	bool read(int& empNum);
	bool read(double& empSalary);
			
}
#endif // !SENECA_FILE_H_