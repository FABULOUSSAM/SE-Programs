name1,roll_no1,marks1=[],[],[]
student,new,sorting=[],[],[]
n=int(input("Enter the number of students : "))

count=0
for i in range(0,n):
	name=input("Enter the name :")
	roll_no=input("Enter the Roll no :")
	for j in range (1,4):
		marks1.append(input("Enter the marks of subject :"))
	student=(name,roll_no,marks1)
	new.append(student)
	marks1=[]
print(new)
for i in range(0,n):
	if(new[i][0]=="python"):
		print("name :",new[i][0])
		print("roll no :",new[i][1])
		print("marks :",new[i][2])
		count=1
		break

if(count==0):
	print("python not found ")

print("Before sorting:",new)
sorting=new
sorting.sort();
print("After sorting sorting:",sorting)

