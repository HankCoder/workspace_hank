from PIL import Image, ImageDraw, ImageFont, ImageFilter

import random

def randChar():
	return chr(random.randint(65, 90))

def randColor():
	return (random.randint(64, 255), random.randint(64, 255), random.randint(64, 255))

def randColor2():
	return (random.randint(32, 127), random.randint(32, 127), random.randint(32, 127))

width = 60 * 4
height = 60

image = Image.new('RGB', (width, height), (255, 255, 255))

font = ImageFont.truetype('Garuda.ttf', 36)

draw = ImageDraw.Draw(image)

for x in range(width):
	for y in range(height):
		draw.point((x, y), fill =randColor())

for t in range(4):
	draw.text((60 * t + 10, 0), randChar(), font=font, fill=randColor2())
image = image.filter(ImageFilter.BLUR)

image.save('code.jpg', 'jpeg')
