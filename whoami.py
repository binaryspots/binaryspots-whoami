# Declare names
def myName(*args):
    name, handle, nickname = args
    print(f"Hello my name is {name}.")
    print(f"My online handle is {handle}.")
    print(f"My nickname is {nickname}.")

interests = ["security research", "becoming a better programmer", "and keeping fit"]
numSpots = 99
i = 0

myName("Anthony","binaryspots", "pejjy")
print("Always in the lab getting better at ", end="")
while (i < 3 -1):
    print(f"{interests[i]}, ", end="")
    i = i + 1
print(f"{interests[2]}.", end="")
print("\n")
dalmatian_enthusiast = True
if (dalmatian_enthusiast == True):
    print("Guilty, I am a dalmatian enthusiast.")
while (numSpots != 101):
    print(f"That is the incorrect number of spots {numSpots}.")
    numSpots = numSpots + 1
print(f"The number of spots is 101!")