'''AIM:Write a menu driven python program to check if number and string palindrome
and find the factorial of the input number'''
choice=0;
def main():
	choice=int(input("Enter \n1)To find Palindrome \n 2)To find Recursion \n3)To exit:"))
	if(choice==1):
		palindrome()
	elif(choice==2):
		factorial();
	elif(choice==3):
		exit(1)
	else:
		main()
		
		
def recursive(i):
	if(i==1):
		return 1
	else:
		return i*recursive(i-1)

def palindrome():
	org=str(input("Enter the string :"));
	rev=org[ ::-1]
	if(org==rev):
		print(org+" is palindrome ")
	else:
		print(org+" is not palindrome ")
			
def factorial():
	i=int(input("Enter the number :"))
	final=recursive(i)		
	print("Factorial of ",i,"is : ",final)
		
'''
OUTPUT:
sam@BountyHunter:~/Desktop/collage/ostl$ python3 exp2.py
Enter 
1)To find Palindrome 
2)To find Recursion 
3)To exit:1
Enter
Enter the string :pop
pop is palindrome
'''
