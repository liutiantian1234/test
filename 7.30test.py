# i=0
# while i<10:
#     i=i+1

# print(i)

# i=0
# sum=0
# while i<100:
#     i=i+1
#     if i%2==1:
#         sum=sum+i
#     else:
#         continue
# print(sum)

# 遍历字符串
# while 的方式遍历每一个字符
# range函数
# print(list(range(100)))
# print(list(range(0,100,2)))
# for i in range(0,100,3):
#     print(i)
# l1=[1,2,3,4,5,6,7,8,9]
# for i in range(0,len(l1),3):
#     print(l1[i])
# sum=0
# for i in range(101):
#     sum=sum+i
# print(sum)
# sum=0
# for i in range(1,100,2):
#     sum=sum+i
# print(sum)
# def print_result(val,result="helloworld"):
#     print("result:",result)
#     return val,result
# # l1=print_result()# 接收返回值
# # print(l1)
# p=print_result(1) # 是一个元祖
# print(p)
# from math import sqrt,sin
# print(sqrt(4))
from flask import Flask

app = Flask(__name__)

@app.route("/")
def index():
    return '<h1>hello,world</h1>'
if __name__ == '__main__':
    app.run(debug=True)
    
