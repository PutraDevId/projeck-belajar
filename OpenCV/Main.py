import cv2

cam = cv2.VideoCapture(0)
cam.set(3, 660)
cam.set(4, 500)

faceDetector = cv2.CascadeClassifier(
    cv2.data.haarcascades + "haarcascade_frontalface_default.xml")

while True:
    retv, frame = cam.read()
    warna = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    face = faceDetector.detectMultiScale(warna, 1.3, 5)

    for (x, y, w, h) in face:
        frame = cv2.rectangle(frame, (x, y), (x+w, y+h), (0, 225, 63), 2)
        rec_muka = warna[y: y + h, x: x + w]

    cv2.imshow("kamera1", frame)
    close = cv2.waitkey(1) & 0xFF
    if close == 27 or close == ord('n'):
        break


cam.realese()
cv2.destroyAllwindows()
