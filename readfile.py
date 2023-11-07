import sys
#retreive the file name passed to the program
fileName = sys.arg[1]

#declare a count variable
count=0

#open the file and read it
with open(fileName) as f:
	for line in f:
		lineCount+=1

		if lineCount %2==0:
			print(line,end = "")

if lineCount>10:
	print("Big")

else:
	print("Small")
