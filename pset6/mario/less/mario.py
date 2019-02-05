import cs50

# ask user for height
while True:
    print("Height ", end="")
    height = cs50.get_int()
    if height > 0 and height < 23:
        break
# start counter for debug
# count = 0
# use for loop to print
for x in range (0,(height+1),1):
    # count = count + 1
    # print(count)
    print(" " * (height-x), end="")
    print("#" * x)
    # if x = height:
        # break
