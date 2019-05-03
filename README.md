# Polymorphism Assignment

## Table of Contents
* [Specififcation](#specification)
* [Design Decisions](#design-decisions)

---

## Specification

Create a driver file from where you dynamically call inherited classes to calculate their wage and print paycheck statements.

---

## Design Decisions

`hoursWorked` is a double to allow entries like `3.14` for someone who worked 3 hours and 8.4 minutes, especially for someone working an hourly wage.

---

## Sample Output

```
EMPLOYEE #:000000	Calculated Wage: $63	Fri May  3 12:57:29 2019
	==================================================
	  bob
	  Address: 123 fake st.
	  Pay To The Order of: bob

	  Amount: $63.00
	==================================================
	  EARNINGS
	--------------------------------------------------
	  Rate: 	$4.20/Hr
	  Hours: 	15.00Hrs
	  This Period: 	$63.00
	  Gross Pay: 	$63.00
	==================================================

EMPLOYEE #:000001	Calculated Wage: $3840.00	Fri May  3 12:57:29 2019
	==================================================
	 joe
	 321 null st.
	 Pay To The Order of: joe

	 Earnings: $3840.00

	 Employee #1
	==================================================

```

