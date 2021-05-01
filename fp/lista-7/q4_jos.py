word1 = input().lower().strip().replace(" ", "").replace(".", "").replace(",", "").replace("!", "").replace("?", "")
word2 = input().lower().strip().replace(" ", "").replace(".", "").replace(",", "").replace("!", "").replace("?", "")

if len(word1) == len(word2):
    list_word1 = list(word1)
    list_word2 = list(word2)
    list_word1 = sorted(list_word1)
    list_word2 = sorted(list_word2)

    if list_word1 == list_word2:
        print(True)
    else:
        print(False)
else:
    print(False)
