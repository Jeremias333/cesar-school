email = ""
while True:
    email = input()
    
    if email == "sair":
            break  
    if email.count(".") == 2:
        if email.count("@") >= 2 or email.count("@") <= 0:
            print("errado")
        else:
            before_email = email[:email.index("@")]
            #print(before_email)
            if  len(before_email) >= 1 and before_email[0] != "@":
                after_email = email[email.index("@")+1:]
                if len(after_email) >= 1:
                    if len(after_email[after_email.find(".")-1]) >= 1 and len(after_email[after_email.find(".")+1]):
                        if after_email[after_email.find(".")+1] != "." and after_email[after_email.find(".")-1] != ".":
                            after_email = after_email[after_email.find("."):]
                            if len(after_email[after_email.find(".")-1]) >= 1 and len(after_email[after_email.find(".")+1]):
                                if after_email[after_email.find(".")+1] != "." and after_email[after_email.find(".")-1] != ".":
                                    if email[email.find("@")+1] != ".":
                                        print("certo")
                                    else:
                                        print("errado")
                                else:
                                    print("errado")
                            else:
                                print("errado")
                        else:
                            print("errado")
                    else:
                        print("errado")
                else:
                    print("errado")
                
            else:
                print("errado")
             
    else:
        print("errado")
    