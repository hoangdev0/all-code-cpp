from pynput.keyboard import Listener

def anonymous(key):
	key = str(key)
	if key == "Key.f12":
		raise SystemExit(0)
	# with open("text.txt","a")
	# file.write(key)
	print(key)

with Listener(on_press=anonymous) as hoang:
	hoang.join()