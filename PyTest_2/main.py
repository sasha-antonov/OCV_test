#from cv2.cv import *
#import cv2
import cv

img = cv.LoadImage("/home/sasha/Project_X/test_OpenCV/PyTest/frame.jpg")
dst = cv.CreateImage((256, 256), img.depth, img.nChannels)
cv.Resize(img, dst, 0)

cv.NamedWindow("opencv")
cv.ShowImage("opencv",dst)
cv.WaitKey(0)
