import cv2

capture = cv2.VideoCapture(0)

while True:
    _, frame = capture.read()
    cv2.imshow("Capture from Windows", frame) 
    if cv2.waitKey(1) == 27:
        break

capture.release()
cv2.destroyAllWindows()