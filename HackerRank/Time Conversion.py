list1= list(input())
if(list1[-2]=='P'):
	#print('PM')
	if(list1[0]=='1' and list1[1]=='2'):
		str1 = ''.join(list1)
	else:
		int1=int(list1[0])
		int2=int(list1[1])
		#print(int1,int2)
		list1[0]= str(int1+1)
		list1[1]= str(int2+2)
		#print(list2)
	str1 = ''.join(list1)
else:
	if(list1[0]=='1' and list1[1]=='2'):
		list1[0]= '0'
		list1[1]= '0'
	str1 = ''.join(list1)
print(str1[:-2])
