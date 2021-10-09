from random import randint
print("Chon Dam, La, Keo: ")
player = input()
computer = randint(0,2)
if computer == 0:
	computer = "Dam"
if computer == 1:
	computer = "La"
if computer == 2:
	computer = "Keo"
print("---");
print("You choose: " + player);
print("Computer chooses: " + computer);
print("---");
if player == computer:
	print("Draw");
else: 
	if(player == "Dam"):
		if(computer == "Keo"):
			print("Win")
		else:
			print("Lose")
	elif(player == "Keo"):
		if(computer == "La"):
			print("Win")
		else:
			print("Lose")
	elif(player == "La"):
		if(computer == "Dam"):
			print("Win")
		else:
			print("Lose")
	else:
		print("Nhap sai!")
	