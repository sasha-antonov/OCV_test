#from cv2.cv import *
#import cv2
import cv

img = cv.LoadImage("/home/sasha/Project_X/test_OpenCV/PyTest/frame.jpg", 1)

gray = cv.CreateImage((img.width, img.height), cv.IPL_DEPTH_8U, 1)
cnt = cv.CreateImage((img.width, img.height), cv.IPL_DEPTH_8U, 1)
bin_img = cv.CreateImage(cv.GetSize(img), cv.IPL_DEPTH_8U, 1)
dst = cv.CreateImage(cv.GetSize(img), cv.IPL_DEPTH_8U, 1)

cv.NamedWindow("img", cv.CV_WINDOW_AUTOSIZE)
cv.NamedWindow("gray", cv.CV_WINDOW_AUTOSIZE)
cv.NamedWindow("bin_img", cv.CV_WINDOW_AUTOSIZE)
cv.NamedWindow("cnt", cv.CV_WINDOW_AUTOSIZE)
cv.NamedWindow("countours", cv.CV_WINDOW_AUTOSIZE)

cv.CvtColor(img, gray, cv.CV_RGB2GRAY)
cv.InRangeS(gray, cv.Scalar(1), cv.Scalar(250), bin_img)
cv.Canny(bin_img, cnt, 10, 100, 3)

storage = cv.CreateMemStorage(0)
contours = cv.FindContours(bin_img, storage, cv.CV_RETR_TREE,
                           cv.CV_CHAIN_APPROX_SIMPLE ,(0,0))

while contours != None:
    cv.DrawContours(dst,contours,cv.CV_RGB(250,0,0), cv.CV_RGB(0,0,250),2,1,8)
    contours = contours.h_next()

mat = cv.GetMat(dst,0)
cv.Save('matrix.xml',mat)


cv.ShowImage("img", img)
cv.ShowImage("gray", gray)
cv.ShowImage("bin_img", bin_img)
cv.ShowImage("cnt", cnt)
cv.ShowImage("contours", dst)

cv.WaitKey(0)
