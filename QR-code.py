import numpy as np
from pyzbar.pyzbar import decode
import cv2
# reading QR code from an image
img=cv2.imread("qr1.png")
code=decode(img)
print(code)
for barcode in decode(img):
	print(barcode.data)
	text=barcode.data.decode('utf-8')
	print(text)
	print(barcode.rect)




