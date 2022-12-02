<h1>In_Class_Exercises</h1>

<h2>WEEK 3</h2>

**Law_Of_Exponents_**

 Write a program for the law of exponents  
 ●Include math.h header for powerfunction  
 ●double pow(double base, doubleexponent);  
 ●Prompt a menu to select theoperation to perform  
 ●Compile with an additional linkingflag  
 ●clang lawOfExponents.c -olawOfExponents -lm  

<h2>WEEK 4</h2>

**Factorial_**

 ● Write a C program that calculates the factorial of a given number○ Factorial of 0 and 1 are 1
 Print the sequence of calculations on the screen prior to printing the result
 
 **Count_odds_**
 
 ● Write a C program to count the number of times the user entered an odd valueand all the positive values entered by the user. 
 Terminate your program when theuser enters 0.
 
 **Rows_columns**
 
 ● Write a C program to print all numbers for a given row and column numbers.
 Useformatting so that each number appears in a 4 digit slot.
 e.g. row = 3, col = 4
 
 <h2>WEEK 6</h2>
 
 **Random_Array_**
 
 ● Write a C function that creates a 1D char array filled with random small letteralphabet characters(ASCII table: [97-122]).
 Write another C function that takes thisrandomly filled array and a character, and finds if the char exists in the array, if soreturns its position, otherwise -1.
 Use the correct keyword (const) for the functionarguments.
 
 --------------------------------------------------------------------------------------------------------------------------
 
 <h1>LABS</h1>
 
 <h2>LAB_WORK#1</h2>
 
 TASK: Write a C code to get orders and serve the customers for a stationary shop.
 You’re given a stock menu below. Print it on the screen.
 And get the order from the customer. Thereare some rules on how to get the order, check the Rules #1 section. After getting the order, calculatethe total amount and print the total on the screen. To see how to do it see Rules #2. See the outputsamples I provide on the third page as a guide.
 HINT #1: Make sure that your outputs on the screen matches exactly what’s provided to you.(pay attention to newlines, quotes, format specifiers, etc)
 HINT #2: When you declare a variable, a random location in the memory is allocated for itwhich can contain garbage value from a previous calculation. Hence initialize your variables to 0if you need to compare them in a condition. Refer to slide #41 from lecture #2
 The stock
 :-- STOCK --
 1. Pencil: Colored 2.00, Black: 1.00
 2. Rubber: 1.50
 3. Notebook: 4.00
 4. Print the stock on the screen.
 5. Rules #1 :  
 ● Due to a system failure the shop accepts coupons only, hence the customer’s total must be atleast 2.50 (which means the customer cannot buy just 2 black pencils). Hence print thefollowing on the screen after printing the stock on the screen:
 
 ○ Due to a system failure our shop accepts coupons only, your total must be at least 2.50
 
 ● Pencils are either coloured or black. The customer will input the choice for the type of thepencils as follows: 1 for coloured and 0 for block pencils. To indicate that, print the followingon the screen after printing the stock on the screen:
 
 ○ Our pencils are either colored or black. If you're buying pencils please put 1 forcolored and 0 for black
 
 ● A customer cannot buy coloured and block pencils at the same time. To indicate that print thefollowing on the screen after printing the stock on the screen:○ You cannot buy both colored and black pencils at the same time
 
 .● If customer changes her mind and selects nothing, farewell them kindly by a printed messageon the screen:○ You changed your mind? Please come back some other time!● Now, get the order of the customer. You’ll get 4 inputs separated by commas. Print thefollowing on the screen.
 
 ○ Please enter the number of items you will buy for all stock items.
 
 ○ Enter 2 inputs for pencils -- number of pencils and type (1 for colored, 0 for black)
 
 ○ number of rubbers and number of notebooks, a total of 4 inputs, 3 of them separatedwith commas.
 
 ○ e.g. 2 1, 0, 2 for 2 colored pencils, no rubbers and 2 notebooks
 
 ● If the customer bought only 2 black pencils, print the following message on the screen:
 
 ○ You bought only 2 black pencils. You should buy items worth at least 2.50
 
 ● If any one of the entered number of items is negative, print the following message on thescreen:
 
 ○ You entered an invalid # of items for at least one of the stock items.
 
 ● If the customer spent at least 10.0, we’re applying a discount of 10%. So print the followingon the screen (HINT: Be careful about the '%' character. Use '%' (not '\') to escape '%'):
 
 ○ Congratulations! You have a 10% discount for spending at least 10.0!After you successfully get the order, calculate the total that the customer has to pay. You can see theprices in the stock menu. See Rules #2.Rules #2:
 
 ● If the customer spends at least 10.0, apply a discount of 10%.
 
 ● Print the total on the screen, if the customer chose to leave without purchasing, price will be 0.Make sure that you format the output to have a total of 5 digits and 3 digits after the point:
 
 ○ Your total is: <the total will be seen here>.○ 
 
 <h2>LAB_WORK#2</h2>
 
 TASK: Write a C code to get a series of increasing numbers from the user. See the details below  
 ● Stop getting numbers when a negative number is entered.
 
 ● Stop when the series becomes non-increasing or decreasing.
 
 ● Skip if the number entered is 0. That is, do not include it into the calculation of the average.
 
 ● At the end, print the average of all the numbers.
 
 
 
 
 
 
 
 
 
 
 
 
 
 
