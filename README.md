# Learning-Cpp
My Everyday Progress of Learning Cpp

## Day 1
1. Setup mingw and other toolkit for compiling
	You can get all the instructions from here:
	https://www.msys2.org/
2. Create [hello world program](hello.cpp)  

          using namespace std;
	Using this code after **include <iostream">** would eliminate the use of **std::** at various lines
	
	As you may have noticed, the **main** function is of the **int** type, and so we need to return an integer value by programming logic. Hence we use **0** as the default return value.

	Ways to display output are:

		std::cout<<"Hello World"";		(if not using the above code)
		cout<<"Hello World";
		cout<<"Hello World"<<endl;		(for a new line)
3. Use mathematical operations with type conversion
Ways to initialize data types are:

		int a=10;
		double b=1.0001;
		char c = 'a';
		string d = "myString";
	You can also initialize **char** data type by using the ASCII value:
	
		char c = 68;
	Some notes regarding mathematical functions::
						
		1. '%' operand works only on *int* data type.
		2. '/' needs the data types to be converted to *double* for exact output, or else it produces an *int* output.
4. Use **[for](forloop.cpp)** loop
	This loop is written with the first command as the **initializing value**, the second command as the **limiting value** and the third command as the **step-wise increment/decrement**:
	   
	   for(int i=1; i<=10; i++)
	This code will print the numbers starting from 1 to 10 with increase as 1. You can decrease the value by using:

		i--
	If you want to have step other than one, you can use:

		i=i+2		or 		i=i-2
		or some other value
5. Use **[switch case](switchcase.cpp)**
	It uses a conditional value to check for equality

		switch(a)
	It then searches for the command, here **case**, that corresponds to the value and executes the command

		case 1:
		//line of code
		break;
	**break** command makes the machine stop when the code for the particular case has been run. Else it will execute the next command as well. Try running the below code inside the **main** class.

		int a=1;
		switch(a)
		{
			case 1:
			cout<<"One";
			case 2:
			cout<<"Two";
			case 3:
			cout<<"Three";
			case 4:
			cout<<"Four";
		}

> Written with [StackEdit](https://stackedit.io/).
