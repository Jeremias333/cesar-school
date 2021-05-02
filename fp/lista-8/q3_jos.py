words = ""
str_text = ""
full_text = ""
words_strip = ""

words = input().upper().replace(",", "").replace(".", "").strip()
words_split = words.split(" ")
words_split.sort()

while True:
	str_text = input().upper().replace(",", "").replace(".", "").strip()

	if str_text == "FIM":
		break

	full_text += " "+str_text

for index in range(len(words_split)):
	if full_text.count(words_split[index]) > 0:
		print(f"{words_split[index]} {full_text.count(words_split[index])}")