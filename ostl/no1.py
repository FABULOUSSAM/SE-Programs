''' AIM:Write a python program to swap two numbers and check if the first number is
positive or negative or zero '''


n1=int(input("Enter first number : "))
n2=int(input("Enter second number : "))
print("The number before swapping are : ",n1," ",n2)
temp=n1
n1=n2
n2=temp
print("The number after swapping are : ",n1," ",n2)
if(n1>0):
	print(n1," is positive ")
elif(n1==0):
	print(n1," is zero")
else:
	print(n1,"is negative")


'''
OUTPUT:	
sam@BountyHunter:~/Desktop/collage/ostl$ python3 no1.py
Enter first number : 2
Enter second number : 3
The number before swapping are :  2   3
The number after swapping are :  3   2
3  is positive 
'''


