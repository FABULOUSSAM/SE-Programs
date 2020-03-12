while(1):
	new,dict1={},{}
	list1,list2=[],[]
	count=0
	print("Enter 1)Entering the data 2)Deleting the Element 3)Printing the value 4)mapping two list into dictionary :")
	c=int(input())
	if(c==1):
		n=int(input("Enter the number of elements :"))
		for i in range(0,n):
			key=input("Enter the {} key : ".format(i+1))
			value=input("Enter the {} value ".format(i+1))
			dict1[key]=value
		for x,y in dict1.items():
			print(x,y)
		print("***************************************")
	elif(c==2):
		ch=int(input("Enter the key you wanna to delete :"));
		del dict1[ch]
		print("***************************************")
		for x,y in dict1.items():
			print(x,y)
		print("***************************************")
	elif(c==3):
		print("Enter the key for which you wanna to print value :");
		d=input()
		for j in dict1:
			if(j==d):
				print(dict1[d])
				count=0
			if(count==1):
				print(d," Not Found")
		print("***************************************")
	elif(c==4):
		k1=int(input("Enter the element for 1st list :"))
		for i in range(0,k1):
			value=input("Enter the {} value : ".format(i+1))
			list1.append(value)

		k2=int(input("Enter the element for 2st list :"))
		for i in range(0,k2):
			value=input("Enter the {} value : ".format(i+1))
			list2.append(value)

		new=dict(zip(list1,list2))
		print(new)
	else:
		print("Enter the valid input")
