# Hello everyone this is my first small project. Here you can see list and listen music

#import songs
import webbrowser 


#Define song dict if you want to listen to music just add in dict

songs = {
    "Ghost":"https://www.youtube.com/watch?v=lTEzfj8IAR0",
    "faded":"https://www.youtube.com/watch?v=60ItHLz5WEA"
}


# Defining the functions:
def display():
    print(songs.keys())


def listen():
    song_name = input("Enter the song name you want to listen\n")
    Song = songs[song_name]
    webbrowser.open(Song)



# taking operation from user:
print("Welcome to Music library management")
print("What can i do for you: ")
print("1. dispaly songs list")
print("2. listen songs list")
choice = int(input("Enter the choice: "))



# conditions
if(choice == 1):    
    display()

elif(choice == 2):
    listen()
    
    


