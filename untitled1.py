import os, ast

def ReadData():
    with open('text1.txt','r',encoding='UTF-8-sig') as f:
        filedata = f.read()
        if filedata != "":
            data = ast.literal_eval(filedata)
            return data
        else: 
            return dict()

def input_data():
    while True:
        name = input("輸入聯絡人姓名")
        if name == "": break
        if name in data:
            print("{}已存在".format(name))
            continue
        password = input("電話")
        data[name] = password
        with open('text1.txt','w',encoding='UTF-8-sig') as f:
            f.write(str(data))
        print("{}儲存完畢".format(name))
        input("回到主畫面")

def disp_data():
    print("聯絡人\t電話")
    print("===========================================")
    for key in data:
        print("{}\t{}".format(key,data[key]))
    input("回到主畫面")

def edit_data():
    while True:
        name = input("輸入要修改的聯絡人姓名")
        if name == "": break
        if not name in data:
            print("{}帳號不存在".format(name))
            continue
        print("原電話為{}".format(data[name]))
        password = input("輸入新電話")
        data[name] = password
        with open('text1.txt','w',encoding='UTF-8-sig') as f:
            f.write(str(data))
        print("修改完成")
        input("回到主畫面")
        
def delete_data():
    while True:
        name = input("要刪除的聯絡人")
        if name == "": break
        if not name in data:
            print("{}帳號不存在".format(name))
            continue
        print("確定刪除{}的資料".format(name))
        yn = input("(Y/N)?")
        if(yn=="Y" or yn=="y"):
            del data[name]
            with open('text1.txt','w',encoding='UTF-8-sig') as f:
                f.write(str(data))
            input("刪除完畢")
            break
        
def menu():
    os.system("cls")
    print("通訊錄")
    print("------------------------------------")
    print("1.新增")
    print("2.顯示所有")
    print("3.修改")
    print("4.刪除")
    print("0.結束")
    print("------------------------------------")

data = dict()
data = ReadData()

while True:
    menu()
    choice = int(input("enter:"))
    print()
    if choice == 1:
        input_data()
    elif choice == 2:
        disp_data()
    elif choice == 3:
        edit_data()
    elif choice == 4:
        delete_data()
    else:
        break

print("END")
