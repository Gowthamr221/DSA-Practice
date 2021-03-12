testCases = input()
while (testCases--):

    user_input=input()
    for i in user_input:
        if('P' in user_input and 'C' in user_input and 'M' in user_input ):
            print("YES")
        else:
            print("NO")