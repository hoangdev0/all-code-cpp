#kiểu số nguyên a (interger)
a = 24;
print(a);
print(type(a));

#kiểu số thực b(float) (làm tròn đến tối đa 15 chữ số sau dấu phẩy
#dấu "," trong tin học là dấu "." và tin học chỉ mang tính chất tương đối
b = 3.1215
print(b);
print(type(b));

#kiểu decimal
#lấy toàn bộ nội dung của thư viện decimal
from decimal import*
#lấy tối đa 30 chữ số sau đấu phẩy
getcontext().prec = 30
#Chỉ cần 1 trong 2 là Decimal (vì nó lấy dữ liệ lớn nhất)
d = Decimal(10)/Decimal(3)
print(d)
print(type(d))