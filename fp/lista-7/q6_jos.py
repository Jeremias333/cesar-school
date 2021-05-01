N = int(input())
words = list()
all = ""
letters = ""
letters_dict = dict()
for index in range(N+1):
    words.insert(index, input())
    
    if index <= N-1:
        all += words[index]
    else:
        letters = list(words[index])
        for letter in letters:
            letters_dict[letter] = 0

for x in range(N):
    for y in range(len(letters)):
        now = words[x].count(letters[y])
        letters_dict.update({letters[y]: letters_dict[letters[y]]+now})

for letters, value in letters_dict.items():
    print(letters ,"=", value)